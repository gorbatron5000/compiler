#ifndef SCAN_H
#define SCAN_H

#include "stdio.h"
#include "stdlib.h"

#define TOKENS 60
#define MAXSTR 1000
#define MAXRTL 30
#define MAXLBL 16

#define CHAR      (1 << 1)
#define SHORT     (1 << 2)
#define INT       (1 << 3)
#define FLOAT     (1 << 4)  
#define DOUBLE    (1 << 5)
#define LONG      (1 << 6)
#define POINTER   (1 << 7)
#define ARRAY     (1 << 8)
#define UNSIGNED  (1 << 9)
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

#define optype(x) (strchr("+-*/", x) ? BINST : COPY)

struct list;
struct jumplist;

union semrec {
   struct {
      struct list *target, *test;
   };
   struct {
      int op;
      struct list *lhs, *rhs;
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

struct type {
   struct type *type;
   int width;
   int base;
};

struct symbol {
   struct type *type;
   char *id;
};

struct symbollist {
   struct symbol *ptr;
   struct symbollist *next;
};

struct symboltable {
   struct symbollist *slist;
   struct symboltable *prev;
};

extern char ident[], ident2[], fname[];
extern int identtype, identwidth;

int strtotok(char*);
char *toktostr(int);
int yylex();

#endif
