#include "scan.h"
#include "string.h"
#include "y.tab.h"

#define REGSTRING 10
#define NUMRELOPS 2

#define label_pos(rtl) (strstr(rtl->val, "___"))
#define makejumplist() (malloc(sizeof(struct jumplist)))
#define makelist() (malloc(sizeof(struct list)))

struct list;
struct jumplist;

struct list {
   char *val, *dst;
   struct list *next;
   struct jumplist *truelist, *falselist;
};

struct jumplist {
   struct list *ptr;
   struct jumplist *next;
};

struct type {
   struct type *type;
   int width;
};

struct decl {
   struct type *type;
   char *id;
   int inittype;
};

struct symbollist {
   struct decl *ptr;
   struct symbollist *next;
};

struct symboltable {
   struct symbollist *slist;
   struct symboltable *next;
};

struct symboltable *symtbl, *symtbltop;
struct list *rtls, *rtlend;

char ident[MAXRTL];

struct list *insert_rtl(struct list *rtl, char *val, char *dst)
{
   struct list *newrtl = makelist();

   if (val) {
      newrtl->val = malloc(strlen(val)+1);
      strcpy(newrtl->val, val);
   }
   if (dst) {
      newrtl->dst = malloc(strlen(dst)+1);
      strcpy(newrtl->dst, dst);
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

struct list *new_rtl(char *val, char *dst)
{
   return (rtlend = insert_rtl(rtlend, val, dst));
}

void make_jumps(struct list *rtl)
{
   char val[MAXRTL];

   if (!rtl->truelist) {
      rtl->truelist = makejumplist();
      sprintf(val, "if %s goto ___", rtl->dst);
      rtl->truelist->ptr = insert_rtl(rtl, val, NULL);
      rtl->truelist->next = NULL;
   }
   if (!rtl->falselist) {
      rtl->falselist = makejumplist();
      sprintf(val, "goto ___");
      rtl->falselist->ptr = insert_rtl(rtl->truelist->ptr, val, NULL);
      rtl->falselist->next = NULL;
   }
}

void backpatch(struct jumplist *jmps, struct list *lbl)
{
   struct jumplist *ptr;
   char *c;
   for (ptr = jmps; ptr; ptr = ptr->next)
      if ((c = label_pos(ptr->ptr)))
         strcpy(c, lbl->val);
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
   char val[MAXRTL];
   struct jumplist *j = malloc(sizeof(struct jumplist));
   sprintf(val, "goto ___");
   j->ptr = new_rtl(val, NULL);
   j->next = NULL;
   return j;
}

char *gtrg()
{
   static int rnum;
   static char reg[REGSTRING];
   sprintf(reg, "t%d", rnum++);
   return reg;
}

struct list *gtlabel()
{
   char val[MAXRTL];
   static int lnum;
   sprintf(val, "L%d", lnum++);
   return new_rtl(val, NULL);
}

struct list *func(struct decl *fdecl, struct decl *fparams)
{
   struct symboltable *s = malloc(sizeof(struct symboltable));

   if (!symtbl)
      symtbltop = symtbl = malloc(sizeof(struct symboltable));
   else
      symtbltop = symtbltop->next = malloc(sizeof(struct symboltable));

   symtbl->next = NULL;
   symtbl->slist = NULL;

   fdecl->inittype |= FUNC;
   return NULL;

}

struct list *unary(struct list *lhs, struct list *rhs, int oper)
{
   char val[MAXRTL];
   sprintf(val, "%s %c %s", lhs->dst, oper, rhs->dst);
   return new_rtl(val, lhs->dst);
}

struct list *binst(struct list *lhs, struct list *rhs, int oper)
{
   char val[MAXRTL], *dst = gtrg();
   sprintf(val, "%s = %s %c %s", dst, lhs->dst, oper, rhs->dst);
   return new_rtl(val, dst);
}

struct list *assign(struct list *lhs, struct list *rhs, int oper)
{
   return unary(lhs, oper == '=' ? rhs :
          binst(lhs, rhs, toktostr(oper)[0]), '=');
}

struct list *postfix(struct list *rtl, int oper)
{
   char val[MAXRTL], *dst = gtrg();
   struct list *tmp;
   sprintf(val, "%s = %s", dst, rtl->dst);
   new_rtl(val, dst);
   sprintf(val, "%s = %s %c 1", rtl->dst, rtl->dst, toktostr(oper)[0]);
   return new_rtl(val, dst);
}

struct list *terminal()
{
   return new_rtl(NULL, yylval.str);
}

struct decl *add_decl(struct decl *d)
{
   struct symbollist *s;

   if (!symtbl) {
      symtbltop = symtbl = malloc(sizeof(struct symboltable));
      symtbl->next = NULL;
      symtbl->slist = NULL;
   }
   
   for (s = symtbltop->slist; s; s = s->next);
   s = malloc(sizeof(struct symbollist));
   s->ptr = d;
   
   return s->ptr;
}

struct type *type(struct type *t, int sz)
{
   struct type *tt = malloc(sizeof(struct type));
   tt->type = t;
   tt->width = t ? sz * t->width : sz * identwidth;
   return tt;
}

struct decl *decl(struct type *type)
{
   struct decl *d = malloc(sizeof(struct decl));

   if (type)
      d->type = type;
   else {
      d->type = malloc(sizeof(struct type));
      d->type->type = NULL;
      d->type->width = identwidth;
   }
   
   d->inittype = identtype;
   d->id = malloc(strlen(ident)+1);
   strcpy(d->id, ident);
   return add_decl(d);
}

void print_rtls()
{
   struct list *ptr;
   for (ptr = rtls; ptr; ptr = ptr->next)
      if (ptr->val)
         printf("%s\n", ptr->val);
}

/*
void print_decls()
{
   struct symbol *sptr;
   struct type *tptr;
   for (sptr = symboltable; sptr; sptr = sptr->next) {
      printf("id: %s ", sptr->ptr->id);
      for (tptr = sptr->ptr->type; tptr; tptr = tptr->type)
         printf("width: %d ", tptr->width);
      printf("\n");
   }
}
*/
