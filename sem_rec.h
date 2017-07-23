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
struct symbol _ONE = { NULL, "1" };
struct list ONE = { 0,0,0, &_ONE,0,0 };

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

struct symbol *add_symbol(struct symbol *s)
{
   struct symbollist *sl = malloc(sizeof(struct symbollist));;

   if (!symtbltop)
      increase_scope();
   
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

   printf("error in lookup\n");
   exit(1);
}

struct list *insert_rtl(struct list *rtl, union semrec *s, int type)
{
   struct list *newrtl = makelist();

   newrtl->sptr = s;
   newrtl->type = type;

   if (newrtl->type == BINST)
      newrtl->dst = temp(INT);
   else if (newrtl->type == SYMBOL)
      newrtl->dst = s->entry;
   else if (newrtl->type == INCR || newrtl->type == DECR) {
      newrtl->type = BINST;
      newrtl->dst = s->lhs->dst;
   }
   else if (newrtl->type == UNARY) {
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

struct list *func(struct symbol *fdecl, struct symbol *fparams)
{
   union semrec *s = makesemrec();
   fdecl->type = makebasetype(FUNC);
   decrease_scope();
   sprintf(s->label, ".exit %s", fname);
   return new_rtl(s, FUNC);
}

struct list *func_init()
{
   union semrec *s1 = makesemrec(), *s2 = makesemrec();
   strcpy(fname, ident);
   sprintf(s1->label, ".ent %s", fname);
   new_rtl(s1, ASM);
   increase_scope();
   sprintf(s2->label, "%s:", fname);
   return new_rtl(s2, FUNC);
}

struct list *binst(struct list *lhs, struct list *rhs, int oper)
{
   union semrec *s = makesemrec();
   s->lhs = lhs;
   s->rhs = rhs;
   s->op = oper > 256 ? toktostr(oper)[0] : oper;
   return new_rtl(s, oper == INCR || oper == DECR ? oper : optype(oper));
}

struct list *postfix(struct list *rtl, int oper)
{
   union semrec *s1 = makesemrec(), *s2 = makesemrec(), *s3 = makesemrec();
   s1->rhs = s2->lhs = s3->lhs = rtl;
   s2->rhs = &ONE;
   s3->rhs = new_rtl(s1, UNARY);
   s2->op = toktostr(oper)[0];
   new_rtl(s2, oper);
   return new_rtl(s3, UNARY);
}

struct symbol *symbol(struct type *t)
{
   struct symbol *s = malloc(sizeof(struct symbol));
   s->type = t;
   s->id = malloc(strlen(ident)+1);
   strcpy(s->id, ident);
   return add_symbol(s);
}

struct type *type(struct type *t, int sz)
{
   struct type *tt = malloc(sizeof(struct type));
   tt->type = t;
   tt->width = t ? sz * t->width : sz * identwidth;
   printf("width is %d\n", tt->width);
   return tt;
}

struct list *terminal(int type)
{
   union semrec *s = makesemrec();
   if (type == IDENTIFIER)
      s->entry = lookup(ident);
   else if (type == NUMBER)
      s->entry = symbol(makebasetype(INT));
   return new_rtl(s, SYMBOL);
}

struct list *makeimmediate(int d)
{
   union semrec *s = makesemrec();
   char tmp[MAXRTL];
   s->entry = malloc(sizeof(struct symbol));
   s->entry->type = NULL;
   sprintf(tmp, "%d", d);
   s->entry->id = malloc(strlen(tmp)+1);
   strcpy(s->entry->id, tmp);
   return new_rtl(s, NUMBER);
}

struct type *arrayref(int reset)
{
   static struct type *tptr;
   printf("1tptr is %p ident is %s\n", tptr, ident);
   tptr = reset == 1 ? NULL : tptr ? tptr->type : lookup(ident)->type;
   printf("2tptr is %p ident is %s\n", tptr, ident);
   if (!reset)
   tptr->width = 1;
   if (!tptr)
      printf("lookup returns: %p %p %p\n", lookup(ident), lookup(ident)->type, tptr);
   if (!tptr)
      printf("tptr is null %s %d %p\n", ident, reset, tptr);
   else
      printf("tptr is not null\n");
   return tptr;
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
      else if (ptr->type == UNARY)
         printf("%s = %s;\n", ptr->sptr->lhs->dst->id,
                             ptr->sptr->rhs->dst->id);
      else if (ptr->type == FUNC || ptr->type == ASM)
         printf("%s\n", ptr->sptr->label);
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
