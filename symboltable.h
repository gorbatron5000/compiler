#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include "rtls.h"

#define maketype() (malloc(sizeof(struct type)))

struct type {
   union {
      struct type *type;
      struct symbol *udttype;
   };
   int width, base, sz;
};

struct symbol {
   struct type *type;
   char *id;
   int storage;
   union {
      struct symbollist *params;
      struct symbollist *members;
   };
};

struct symbollist {
   struct symbol *ptr;
   struct symbollist *next;
};

struct symboltable {
   struct symbollist *slist;
   struct symboltable *prev;
};

extern struct symbol **udttable, *currstruct;
extern int udtmax, udts, structsize;

struct symbol *get_udt(char*);
struct symbol *add_udt(struct symbol*);
int widthof(int token);
struct type *type(struct type *t, int sz, int base);
struct type *join(struct type *t1, struct type *t2);
void increase_scope();
void decrease_scope();
void show_symbols(struct symbollist *f);
void insert_param(struct symbol *s);
struct symbol *add_symbol(struct symbol *s);
struct symbol *temp(struct type*);
struct symbol *lookup(char *id);
int comparetypes(struct type *t1, struct type *t2);
void add_member(struct symbol *member);
struct symbol *add_user_defined_type(char *name);
struct symbol *symbol(char *ident, struct type *t);
void print_decls();
void show_members(struct symbol*);

#endif
