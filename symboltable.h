#ifndef SYMBOLTABLE_H
#define SYMBOLTALBE_H

struct type {
   struct type *type;
   int width;
   int base;
};

struct symbol {
   struct type *type;
   char *id;
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

int widthof(int token);
struct type *type(struct type *t, int sz, int base);
struct type *join(struct type *t1, struct type *t2);
void increase_scope();
void decrease_scope();
void show_symbols(struct symbollist *f);
void insert_param(struct symbol *s);
struct symbol *add_symbol(struct symbol *s);
struct symbol *temp(int t);
struct symbol *lookup(char *id);
int comparetypes(struct type *t1, struct type *t2);
void emit_params(struct symbol *func);
int numparams(struct symbol *func);
void param(struct symbol *p);
struct jumplist *make_jump(struct list *rtl, struct jumplist **jlist,
   int test);
void make_jumps(struct list *rtl);
void backpatch(struct jumplist *jmps, struct list *lbl);
struct jumplist *merge(struct jumplist *l1, struct jumplist *l2);
struct jumplist *jump();
void add_member(struct symbol *member);
void add_user_defined_type(char *name);
struct symbol *symbol(char *ident, struct type *t);
void print_decls();

#endif
