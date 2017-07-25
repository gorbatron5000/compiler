#ifndef RTLS_H
#define RTLS_G

struct list *insert_rtl(struct list *rtl, union semrec *s, int type)
struct list *new_rtl(union semrec *s, int type)
struct list *cvt(struct symbol *dst, struct type *type)
struct list *makeparam(struct symbol *param)
struct list *call(char *f)
struct list *gtlabel()
   struct list *funcinit)
struct list *empty()
struct list *binst(struct list *lhs, struct list *rhs, int oper)
struct list *maketemporary()
struct list *copy(struct list *dst, struct list *src)
struct list *ret(struct list *ret)
struct list *makeimmediate(int d)
struct list *postfix(struct list *rtl, int oper)
struct list *identifier(char *ident)
struct list *terminal(int type, char *str)
struct list *accumulator(struct list *r1, struct list *r2, int op)
struct list *arrayref(char *ident, struct list *rtl)
   int test)
void make_jumps(struct list *rtl)
void backpatch(struct jumplist *jmps, struct list *lbl)
struct jumplist *merge(struct jumplist *l1, struct jumplist *l2)
struct jumplist *jump()
void print_rtls()

#endif
