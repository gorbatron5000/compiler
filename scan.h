#ifndef SCAN_H
#define SCAN_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define TOKENS 60
#define MAXSTR 1000
#define MAXRTL 30
#define MAXLBL 16

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

#define optype(x) (strchr("+-*/", x) ? BINST : COPY)

struct list;
struct jumplist;
struct symbollist;

extern int identtype, parameter;
extern struct symbollist *params;
extern struct symbol *currfunc, *calledfunc;

int strtotok(char*);
char *toktostr(int);
int yylex();

#endif
