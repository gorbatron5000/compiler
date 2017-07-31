#include "stdlib.h"
#include "stdio.h"
#include "y.tab.h"
#include "rtls.h"
#include "symboltable.h"
#include "scan.h"

struct list *rtls, *rtlend;
int identtype;
struct symbol *udtentry;

struct list *insert_rtl(struct list *ptr, struct symbol *dst, 
   union semrec *s, int type)
{
   struct list *newrtl = makelist();

   newrtl->sptr = s;
   newrtl->type = type;
   newrtl->dst = dst;

   if (newrtl->type == BINST)
      newrtl->dst = temp(s->lhs->dst->type);
   else if (newrtl->type == SYMBOL || newrtl->type == PARAM ||
            newrtl->type == RETURN || newrtl->type == STRUCT ||
            newrtl->type == ADDRESS)
      newrtl->dst = s->entry;
   else if (newrtl->type == ACC) {
      newrtl->type = BINST;
      newrtl->dst = s->lhs->dst;
      newrtl->dst->type = s->lhs->dst->type;
   }
   else if (newrtl->type == TEMPORARY || newrtl->type == CVT)
      newrtl->dst = temp(s->entry->type);
   else if (newrtl->type == COPY) {
      if (!s->lhs) {
         newrtl->dst = temp(s->rhs->dst->type);
         s->lhs = newrtl;
      }
      else
         newrtl->dst = s->lhs->dst;
   }
   else if (newrtl->type == UNARY)
      newrtl->dst = s->src;

   if (rtls) {
      newrtl->next = ptr->next;
      ptr->next = newrtl;
      if (ptr == rtlend)
         rtlend = newrtl;
   }
   else {
      newrtl->next = NULL;
      rtlend = rtls = newrtl;
   }

   newrtl->truelist = newrtl->falselist = NULL;
   return newrtl;
}

struct list *new_rtl(struct symbol *dst, union semrec *s, int type)
{
   return (rtlend = insert_rtl(rtlend, dst, s, type));
}

struct list *cvt(struct symbol *dst, struct type *type)
{
   union semrec *s = makesemrec();
   s->src = dst;
   s->oper = type->base;
   return new_rtl(temp(type), s, CVT);
}

struct list *makeparam(struct symbol *param)
{
   union semrec *s = makesemrec();
   s->entry = param;
   return new_rtl(param, s, PARAM);
}

struct list *call(char *f)
{
   union semrec *s = makesemrec();
   sprintf(s->label, "call %s %d", f, numparams(lookup(f)));
   emit_params(lookup(f));
   new_rtl(NULL, s, CALL);
}

struct list *gtlabel()
{
   static int lnum;
   union semrec *s = makesemrec();
   sprintf(s->label, "L%d", lnum++);
   return new_rtl(NULL, s, LABEL);
}

struct list *func(struct symbol *fdecl, struct symbol *fparams,
   struct list *funcinit)
{
   union semrec *s = makesemrec();
   sprintf(funcinit->sptr->label, "%s():", fdecl->id);
   funcinit->type = FUNC;
   fdecl->type = type(NULL, 0, FUNC);
   decrease_scope();
   sprintf(s->label, ".exit %s", fdecl->id);
   return new_rtl(NULL, s, FUNC);
}

struct list *empty()
{
   union semrec *s = makesemrec();
   return new_rtl(NULL, s, EMPTY);
}

struct list *binst(struct list *lhs, struct list *rhs, int oper)
{
   union semrec *s = makesemrec();
   s->lhs = lhs;
   s->rhs = rhs;
   s->op = oper > 256 ? toktostr(oper)[0] : oper;
   return new_rtl(temp(lhs->dst->type), s, 
            oper == INCR || oper == DECR ? ACC : optype(oper));
}

struct list *unary(struct list *rtl, int op)
{
   union semrec *s = makesemrec();
   s->op = op;
   s->src = rtl->dst;
   return new_rtl(temp(rtl->dst->type), s, UNARY);
}

struct list *maketemporary(struct type *t)
{
   struct list *newrtl;
   union semrec *s = makesemrec();
   s->entry = temp(t);
   return new_rtl(s->entry, s, TEMPORARY);
}

struct list *copy(struct list *dst, struct list *src)
{
   union semrec *s = makesemrec();
   s->lhs = dst ? dst : maketemporary(src->dst->type);
   s->rhs = src;
   s->op = '=';
   return new_rtl(dst->dst, s, COPY);
}

struct list *ret(struct list *ret)
{
   union semrec *s = makesemrec();
   s->entry = ret ? ret->dst : NULL;
   return new_rtl(NULL, s, RETURN);
}

struct list *makeimmediate(int d)
{
   union semrec *s = makesemrec();
   char tmp[MAXRTL];
   s->entry = malloc(sizeof(struct symbol));
   s->entry->type = type(NULL, 1, INT);
   sprintf(tmp, "%d", d);
   s->entry->id = malloc(strlen(tmp)+1);
   strcpy(s->entry->id, tmp);
   return new_rtl(temp(type(NULL, 1, INT)), s, SYMBOL);
}

struct list *postfix(struct list *rtl, int oper)
{
   union semrec *s1 = makesemrec(), *s2 = makesemrec(), *s3 = makesemrec();
   s1->rhs = s2->lhs = rtl;
   s2->rhs = makeimmediate(1);
   s3->lhs = s3->rhs = new_rtl(temp(rtl->dst->type), s1, COPY);
   s2->op = toktostr(oper)[0];
   new_rtl(rtl->dst, s2, ACC);
   return new_rtl(s3->lhs->dst, s3, COPY);
}

struct list *terminal(int type, char *str)
{
   union semrec *s = makesemrec();
   if (type == IDENTIFIER)
      s->entry = lookup(str);
   else if (type == NUMBER)
      return makeimmediate(atoi(str));
   return new_rtl(s->entry, s, isaddr(s->entry->type->base) ? ADDRESS :
                  s->entry->type->base == STRUCT ? STRUCT : SYMBOL);
}

struct list *accumulator(struct list *r1, struct list *r2, int op)
{
   union semrec *s = makesemrec();
   s->lhs = r1;
   s->rhs = r2;
   s->op = op;
   return new_rtl(s->lhs->dst, s, ACC);
}

struct list *arrayref(struct list *base, struct list *offset)
{
   struct list *rhs, *ret;
   rhs = binst(offset, makeimmediate(base->dst->type->type->width), '*');
   ret = binst(base, rhs, '+');
   ret->dst->type = base->dst->type->type;
   return ret;
}

struct jumplist *make_jump(struct list *rtl, struct jumplist **jlist,
   int test)
{
   union semrec *j = makesemrec();
   *jlist = makejumplist();
   j->target = NULL;
   j->test = test == TRUE ? rtl : NULL;
   (*jlist)->next = NULL;
   (*jlist)->ptr = insert_rtl(rtl, NULL, j, JUMP);
   return *jlist;
}

void make_jumps(struct list *rtl)
{
   if (!rtl->truelist)
      make_jump(rtl, &rtl->truelist, TRUE);
   if (!rtl->falselist)
      make_jump(rtl->truelist->ptr, &rtl->falselist, FALSE);
}

void backpatch(struct jumplist *jmps, struct list *lbl)
{
   struct jumplist *ptr;
   char *c;
   for (ptr = jmps; ptr; ptr = ptr->next)
      ptr->ptr->sptr->target = lbl;
}

struct jumplist *merge(struct jumplist *l1, struct jumplist *l2)
{
   struct jumplist *ptr;
   if (!l1)
      return l2;
   for (ptr = l1; ptr->next; ptr = ptr->next);
   ptr->next = l2;
   return l1;
}

struct jumplist *jump()
{
   struct jumplist *j = makejumplist();
   return make_jump(rtlend, &j, FALSE);
}

void emit_params(struct symbol *func)
{
   struct symbollist *fptr = func->params, *pptr = calledfunc->params;
   struct type *ftptr, *ptptr;
   struct list *cvtret;

   for (; fptr && pptr; fptr = fptr->next, pptr = pptr->next) {
      for (ftptr = fptr->ptr->type, ptptr = pptr->ptr->type; 
           ftptr && ptptr; ftptr = ftptr->type, ptptr = ptptr->type) {
         if (ftptr->base != ptptr->base) {
            cvtret = cvt(fptr->ptr, ptptr);
            makeparam(cvtret->dst);
         }
         else
            makeparam(pptr->ptr);
      }
   }
   if (ftptr || ptptr) {
      printf("function parameters don't match\n");
      exit(1);
   }

}

int numparams(struct symbol *func)
{
   struct symbollist *ptr;
   int i;
   for (i = 0, ptr = func->params; ptr; ptr = ptr->next, i++);
   return i;   
}

void param(struct symbol *p)
{
   insert_param(p);
}

struct list *access_member(struct list *b, char *member)
{
   struct symbollist *members = b->dst->type->udttype->members;
   int offset = 0;
   struct list *ret;

   for (; members; members = members->next)
      if (!strcmp(members->ptr->id, member))
         break;
      else
         offset += members->ptr->type->width;

   if (!members) {
      printf("%s is not a members of %s\n", member, b->dst->id);
      exit(1);
   }

   ret = binst(b, makeimmediate(offset), '+');
   ret->dst->type = members->ptr->type;
   return ret;
}

char *arg(struct symbol *rtl)
{
   char *rg = malloc(MAXRTL);
   if (isaddr(rtl->type->base) || rtl->type->base == STRUCT)
      sprintf(rg, "&%s", rtl->id);
   else
      sprintf(rg, "%s", rtl->id);
   return rg;
}

void print_rtls()
{
   struct list *ptr;
   for (ptr = rtls; ptr; ptr = ptr->next) {
      if (ptr->type == LABEL)
         printf("%s\n", ptr->sptr->label);
      else if (ptr->type == BINST)
         printf("%s = %s %c %s;\n", ptr->dst->id,
                                    ptr->sptr->lhs->dst->id,
                                    ptr->sptr->op,
                                    ptr->sptr->rhs->dst->id);
      else if (ptr->type == JUMP) {
         if (ptr->sptr->test)
            printf("if %s goto %s\n", ptr->sptr->test->dst->id,
                                      ptr->sptr->target->sptr->label);
         else
            printf("goto %s\n", ptr->sptr->target->sptr->label);
      }
      else if (ptr->type == COPY)
         printf("%s = %s;\n", ptr->sptr->lhs->dst->id,
                              ptr->sptr->rhs->dst->id);
      else if (ptr->type == FUNC || ptr->type == ASM || ptr->type == CALL)
         printf("%s\n", ptr->sptr->label);
      else if (ptr->type == PARAM)
         printf("param(%s)\n", ptr->dst->id);
      else if (ptr->type == CVT)
         printf("%s = CVT(%s, %s);\n", ptr->dst->id,
                                       ptr->sptr->src->id,
                                       toktostr(ptr->sptr->oper));
      else if (ptr->type == RETURN)
         printf("return(%s)\n", ptr->dst ? ptr->dst->id : "");
      else if (ptr->type == LOAD)
         printf("%s = *%s\n", ptr->sptr->lhs->dst->id,
                              ptr->sptr->rhs->dst->id);
      else if (ptr->type == UNARY)
         printf("%s = %c%s\n", ptr->dst->id, ptr->sptr->oper,
                               ptr->sptr->src->id);
   }
}
