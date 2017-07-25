#include "y.tab.h"
#include "scan.h"
#include "compoundtypes.h"

#define REGSTRING 10
#define NUMRELOPS 2

#define makejumplist() (malloc(sizeof(struct jumplist)))
#define makelist() (malloc(sizeof(struct list)))
#define makesemrec() (malloc(sizeof(union semrec)))
#define maketype() (malloc(sizeof(struct type)))

#define DECLTYPES 9

struct symboltable *symtbltop;
struct list *rtls, *rtlend;
struct symbol *currfunc, *calledfunc, *currstruct;
int parameter;

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

struct type *type(struct type *t, int sz, int base)
{
   struct type *tt = malloc(sizeof(struct type));
   tt->type = t;
   tt->width = t ? sz * t->width : sz * widthof(base);
   tt->base = base;
   return tt;
}

struct type *join(struct type *t1, struct type *t2)
{
   struct type *tptr;
   for (tptr = t1; tptr && tptr->type; tptr = tptr->type);
   tptr ? (tptr->type = t2) : (t1 = t2);
   return t1;
}

void increase_scope()
{
   struct symboltable *t;

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

void show_symbols(struct symbollist *f)
{
   struct symbollist *ptr;
   for (ptr = f; ptr; ptr = ptr->next)
      printf("P: %s\n", ptr->ptr->id);
}

void insert_param(struct symbol *s)
{
   struct symbollist *ptr;
   if (!calledfunc->params) {
      ptr = calledfunc->params = malloc(sizeof(struct symbollist));
      ptr->ptr = calledfunc->params->ptr = s;
      calledfunc->params->next = NULL;
   }
   else {
      for (ptr = calledfunc->params; ptr && ptr->next; ptr = ptr->next);
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

struct symbol *temp(int t)
{
   static int rnum;
   struct symbol *s = malloc(sizeof(struct symbol));
   s->type = type(NULL, 1, t);
   s->id = malloc(REGSTRING);
   sprintf(s->id, "t%d", rnum++);
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

int comparetypes(struct type *t1, struct type *t2)
{
   
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

void add_member(struct symbol *member)
{
   struct symbollist *ptr;
   for (ptr = currstruct->members; ptr && ptr->next; ptr = ptr->next);
   ptr = ptr ? (ptr->next = malloc(sizeof(struct symbollist))) :
               malloc(sizeof(struct symbollist));
   ptr->ptr = member;
}

void add_user_defined_type(char *name)
{
   struct symbol *s = malloc(sizeof(struct symbol));
   s->id = malloc(strlen(name)+1);
   strcpy(s->id, name);
   currstruct = add_udt(s);
}

struct symbol *symbol(char *ident, struct type *t)
{
   struct symbol *s = malloc(sizeof(struct symbol));
   s->type = t;
   s->id = malloc(strlen(ident)+1);
   strcpy(s->id, ident);
   return s;
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
