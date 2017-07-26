#include "y.tab.h"
#include "scan.h"
#include "symboltable.h"
#include "rtls.h"

#define REGSTRING 10
#define NUMRELOPS 2
#define DECLTYPES 9

struct symboltable *symtbltop;
struct symbol *currfunc, *calledfunc, *currstruct, **udttable;
int udtmax, udts, parameter;

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

struct symbol *get_udt(char *udt)
{
   int i;
   for (i = 0; i < udts; i++)
      if (!strcmp(udt, udttable[i]->id))
         return udttable[i];

   fprintf(stderr, "error in get_udt: %s\n", udt);
   exit(1);
}

struct symbol *add_udt(struct symbol *ent)
{
   struct symbol **tmp;
   
   if (!udttable)
      udttable = malloc(sizeof(struct symbol*) * (udtmax = 100));

   if (udts + 1 >= udtmax) {
      tmp = udttable;
      udttable = malloc(sizeof(struct symbol*) * (udtmax *= 2));
      memcpy(udttable, tmp, sizeof(struct symbol*) * udts);
   }

   return (udttable[udts++] = ent);
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
printf("adding %s %d\n", s->id, s->type->base); 
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
