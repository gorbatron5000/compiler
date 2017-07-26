#ifndef RTLS_H
#define RTLS_H

#include "string.h"
#include "symboltable.h"

#define POINTER   (1 << 7)
#define ARRAY     (1 << 8)
#define FUNC      (1 << 10)
#define SYMBOL    (1 << 11)
#define JUMP      (1 << 12)
#define LABEL     (1 << 13)
#define TEMPORARY (1 << 14)
#define BINST     (1 << 15)
#define UNARY     (1 << 16)
#define COPY      (1 << 17)
#define ASM       (1 << 18)
#define ADDRESS   (1 << 19)
#define LONGLONG  (1 << 20)
#define ACC       (1 << 21)
#define EMPTY     (1 << 22)
#define PARAM     (1 << 23)
#define CALL      (1 << 24)
#define CVT       (1 << 25)

#define MAXRTL 30
#define MAXLBL 16

#define optype(x) (strchr("+-*/", x) ? BINST : COPY)
#define makejumplist() (malloc(sizeof(struct jumplist)))
#define makelist() (malloc(sizeof(struct list)))
#define makesemrec() (malloc(sizeof(union semrec)))

union semrec {
   struct {
      struct list *target, *test;
   };
   struct {
      int op;
      struct list *lhs, *rhs;
   };
   struct {
      struct symbol *src, *dst;
      int oper;
   };
   struct symbol *entry;
   char label[MAXLBL];
};

struct list {
   int type;
   union semrec *sptr;
   struct list *next;
   struct symbol *dst;
   struct jumplist *truelist, *falselist;
};

struct jumplist {
   struct list *ptr;
   struct jumplist *next;
};

struct type;

extern struct list *rtls, *rtlend;
extern struct symbol *udtentry;
extern int identtype;

struct list *insert_rtl(struct list *rtl, union semrec *s, int type);
struct list *new_rtl(union semrec *s, int type);
struct list *cvt(struct symbol *dst, struct type *type);
struct list *makeparam(struct symbol *param);
struct list *call(char *f);
struct list *gtlabel();
struct list *func(struct symbol *fdecl, struct symbol *fparams,
   struct list *funcinit);
struct list *empty();
struct list *binst(struct list *lhs, struct list *rhs, int oper);
struct list *maketemporary();
struct list *copy(struct list *dst, struct list *src);
struct list *ret(struct list *ret);
struct list *makeimmediate(int d);
struct list *postfix(struct list *rtl, int oper);
struct list *identifier(char *ident);
struct list *terminal(int type, char *str);
struct list *accumulator(struct list *r1, struct list *r2, int op);
struct list *arrayref(char *ident, struct list *rtl);
struct jumplist *make_jump(struct list *rtl, struct jumplist **jlist,
   int test);
void make_jumps(struct list *rtl);
void backpatch(struct jumplist *jmps, struct list *lbl);
struct jumplist *merge(struct jumplist *l1, struct jumplist *l2);
struct jumplist *jump();
void print_rtls();
void emit_params(struct symbol *func);
int numparams(struct symbol *func);
void param(struct symbol *p);
struct list *access_member(struct list*, char*);

#endif
