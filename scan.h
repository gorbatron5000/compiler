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

#define optype(x) (strchr("+-*/", x) ? BINST : UNARY)

extern char ident[], fname[];
extern int identtype, identwidth;

int strtotok(char*);
char *toktostr(int);
int yylex();

#endif
