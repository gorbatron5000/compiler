#include "scan.h"
#include "string.h"
#include "y.tab.h"

#define REGSTRING 10
#define NUMRELOPS 2

#define makejumplist() (malloc(sizeof(struct jumplist)))
#define makelist() (malloc(sizeof(struct list)))
#define makesemrec() (malloc(sizeof(union semrec)))
#define maketype() (malloc(sizeof(struct type)))

#define DECLTYPES 9

struct symboltable *symtbltop;
struct list *rtls, *rtlend;
struct symbollist *params;
int parameter, numparams;

int widthof(int token)
{
   int i, tokentypes[] = { CHAR, SHORT, INT, FLOAT, DOUBLE, LONG,
                           LONGLONG, POINTER, ARRAY },
          tokenwidths[] = { 1, 2, 4, 4, 8, 4, 8, 4, 4 };

   for (i = 0; i < DECLTYPES; i++)
      if (token == tokentypes[i])
         return tokenwidths[i];

   return 0;
}

struct type *join(struct type *t1, struct type *t2)
{
   struct type *tptr;
   for (tptr = t1; tptr && tptr->type; tptr = tptr->type);
   tptr ? (tptr->type = t2) : (t1 = t2);
   return t1;
}

struct type *makebasetype(int type)
{
   struct type *t = maketype();
   t->base = type;
   t->width = widthof(type);
   return t;
}

char *gtrg()
{
   static int rnum;
   static char reg[REGSTRING];
   sprintf(reg, "t%d", rnum++);
   return reg;
}

void increase_scope()
{
   struct symboltable *s, *t;

   if (!symtbltop) {
      symtbltop = malloc(sizeof(struct symboltable));
      symtbltop->prev = NULL;
   }
   else {
      t = symtbltop;
      symtbltop = malloc(sizeof(struct symboltable));
      symtbltop->prev = t;
   }

   symtbltop->slist = NULL;
}

void decrease_scope()
{
   symtbltop = symtbltop->prev;
}

void add_parameters(struct symbol *func)
{
   func->params = params;
   params = NULL;
}

void insert_param(struct symbol *s)
{
   struct symbollist *ptr;
   if (!params) {
      params = malloc(sizeof(struct symbollist));
      params->ptr = s;
   }
   else {
      for (ptr = params; ptr && ptr->next; ptr = ptr->next);
      ptr = ptr->next = malloc(sizeof(struct symbollist));
      ptr->ptr = s;
      ptr->next = NULL;
   }
}

struct symbol *add_symbol(struct symbol *s)
{
   struct symbollist *sl = malloc(sizeof(struct symbollist));

   if (!symtbltop)
      increase_scope();

   if (parameter)
      insert_param(s);
   
   sl->ptr = s;
   sl->next = symtbltop->slist;
   symtbltop->slist = sl;

   return sl->ptr;
}

struct symbol *temp(int type)
{
   struct symbol *s = malloc(sizeof(struct symbol));
   s->type = makebasetype(INT);
   s->id = malloc(REGSTRING);
   strcpy(s->id, gtrg());
   return add_symbol(s);
}

struct symbol *lookup(char *id)
{
   struct symboltable *symtblptr;   
   struct symbollist *symptr;

   for (symtblptr = symtbltop; symtblptr; symtblptr = symtblptr->prev)
      for (symptr = symtblptr->slist; symptr; symptr = symptr->next)
         if (!strcmp(id, symptr->ptr->id))
            return symptr->ptr;

   printf("error in lookup: %s\n", id);
   exit(1);
}

struct list *insert_rtl(struct list *rtl, union semrec *s, int type)
{
   struct list *newrtl = makelist();

   newrtl->sptr = s;
   newrtl->type = type;

   if (newrtl->type == BINST)
      newrtl->dst = temp(INT);
   else if (newrtl->type == SYMBOL || newrtl->type == PARAM)
      newrtl->dst = s->entry;
   else if (newrtl->type == ACC) {
      newrtl->type = BINST;
      newrtl->dst = s->lhs->dst;
   }
   else if (newrtl->type == TEMPORARY)
      newrtl->dst = temp(INT);
   else if (newrtl->type == COPY) {
      if (!s->lhs) {
         newrtl->dst = temp(INT);
         s->lhs = newrtl;
      }
      else
         newrtl->dst = s->lhs->dst;
   }

   if (rtls) {
      newrtl->next = rtl->next;
      rtl->next = newrtl;
      if (rtl == rtlend)
         rtlend = newrtl;
   }
   else {
      newrtl->next = NULL;
      rtlend = rtls = newrtl;
   }

   newrtl->truelist = newrtl->falselist = NULL;
   return newrtl;
}

struct list *new_rtl(union semrec *s, int type)
{
   return (rtlend = insert_rtl(rtlend, s, type));
}

void check_params(struct symbol *func)
{
   struct symbollist *fptr = func->params, *pptr = params;
   struct type *ftptr, *ptptr;
   int i = 0;
   printf("numparams is %d\n", numparams);
   for (; fptr && pptr; fptr = fptr->next, pptr = pptr->next) {
      printf("i is %d\n", ++i);
      for (ftptr = fptr->ptr->type, ptptr = pptr->ptr->type; 
           ftptr && ptptr; ftptr = ftptr->type, ptptr = ptptr->type)
         if (ftptr->base != ptptr->base)
            break;
   }
   if (ftptr || ptptr) {
      printf("function parameters don't match\n");
      exit(1);
   }
}

void call(char *f)
{
   union semrec *s = makesemrec();
   sprintf(s->label, "call %s %d", f, numparams);
   check_params(lookup(f));
   numparams = 0;
   params = NULL;
   new_rtl(s, CALL);
}

void param(struct symbol *p)
{
   union semrec *s = makesemrec();
   numparams++;
   insert_param(p);
   s->entry = p;
   new_rtl(s, PARAM);
}

struct jumplist *make_jump(struct list *rtl, struct jumplist **jlist,
   int test)
{
   union semrec *j = makesemrec();
   *jlist = makejumplist();
   j->target = NULL;
   j->test = test == TRUE ? rtl : NULL;
   (*jlist)->next = NULL;
   (*jlist)->ptr = insert_rtl(rtl, j, JUMP);
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

struct list *gtlabel()
{
   static int lnum;
   union semrec *s = makesemrec();
   sprintf(s->label, "L%d", lnum++);
   return new_rtl(s, LABEL);
}

struct list *func(struct symbol *fdecl, struct symbol *fparams,
   struct list *funcinit)
{
   union semrec *s = makesemrec();
   add_parameters(fdecl);
   sprintf(funcinit->sptr->label, "%s():", fdecl->id);
   funcinit->type = FUNC;
   fdecl->type = makebasetype(FUNC);
   decrease_scope();
   sprintf(s->label, ".exit %s", fdecl->id);
   return new_rtl(s, FUNC);
}

struct list *empty()
{
   union semrec *s = makesemrec();
   return new_rtl(s, EMPTY);
}

struct list *binst(struct list *lhs, struct list *rhs, int oper)
{
   union semrec *s = makesemrec();
   s->lhs = lhs;
   s->rhs = rhs;
   s->op = oper > 256 ? toktostr(oper)[0] : oper;
   return new_rtl(s, oper == INCR || oper == DECR ? ACC : optype(oper));
}

struct list *maketemporary()
{
   struct list *newrtl;
   return new_rtl(makesemrec(), TEMPORARY);
}

struct list *copy(struct list *dst, struct list *src)
{
   union semrec *s = makesemrec();
   s->lhs = dst ? dst : maketemporary();
   s->rhs = src;
   s->op = '=';
   return new_rtl(s, COPY);
}

struct list *makeimmediate(int d)
{
   union semrec *s = makesemrec();
   char tmp[MAXRTL];
   s->entry = malloc(sizeof(struct symbol));
   s->entry->type = makebasetype(INT);
   sprintf(tmp, "%d", d);
   s->entry->id = malloc(strlen(tmp)+1);
   strcpy(s->entry->id, tmp);
   return new_rtl(s, SYMBOL);
}

struct list *postfix(struct list *rtl, int oper)
{
   union semrec *s1 = makesemrec(), *s2 = makesemrec(), *s3 = makesemrec();
   s1->rhs = s2->lhs = s3->lhs = rtl;
   s2->rhs = makeimmediate(1);
   s3->rhs = new_rtl(s1, COPY);
   s2->op = toktostr(oper)[0];
   new_rtl(s2, ACC);
   return new_rtl(s3, COPY);
}

struct symbol *symbol(char *ident, struct type *t)
{
   struct symbol *s = malloc(sizeof(struct symbol));
   s->type = t;
   s->id = malloc(strlen(ident)+1);
   strcpy(s->id, ident);
   return add_symbol(s);
}

struct type *type(struct type *t, int sz, int base)
{
   struct type *tt = malloc(sizeof(struct type));
   tt->type = t;
   tt->width = t ? sz * t->width : sz * identwidth;
   tt->base = base;
   return tt;
}

struct list *identifier(char *ident)
{
   union semrec *s = makesemrec();
   s->entry = lookup(ident);
   return new_rtl(s, SYMBOL);
}

struct list *terminal(int type, char *str)
{
   union semrec *s = makesemrec();
   if (type == IDENTIFIER)
      s->entry = lookup(str);
   else if (type == NUMBER)
      return makeimmediate(atoi(str));
   return new_rtl(s, SYMBOL);
}

struct list *accumulator(struct list *r1, struct list *r2, int op)
{
   union semrec *s = makesemrec();
   s->lhs = r1;
   s->rhs = r2;
   s->op = op;
   return new_rtl(s, ACC);
}

struct list *arrayref(char *ident, struct list *rtl)
{
   static struct type *tptr;
   static struct list *acc;
   struct list *rhs;
    
   if (!rtl)
      return (acc = (struct list*) (tptr = NULL));

   tptr = tptr ? tptr->type : lookup(ident)->type->type;
   acc = acc ? acc : copy(maketemporary(), makeimmediate(0));
   rhs = binst(rtl, makeimmediate(tptr->width), '*');
   return accumulator(acc, rhs, '+');
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
   }
}

void print_decls()
{
   struct symboltable *sptr;
   struct symbollist *slptr;
   struct type *tptr;
   for (sptr = symtbltop; sptr; sptr = sptr->prev)
      for (slptr = sptr->slist; slptr; slptr = slptr->next) {
         printf("id: %s ", slptr->ptr->id);
         for (tptr = slptr->ptr->type; tptr; tptr = tptr->type)
            printf("width: %d ", tptr->width);
         printf("\n");
      }
}
