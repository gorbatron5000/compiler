#ifndef SCAN_H
#define SCAN_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define TOKENS 61
#define MAXSTR 1000

#define ADDRESS   (1 << 6)
#define POINTER   (1 << 7)
#define ARRAY     (1 << 8)
#define FUNC      (1 << 10)
#define SYMBOL    (1 << 11)
#define JUMP      (1 << 12)
#define EMPTY     (1 << 22)
#define PARAM     (1 << 23)
#define CALL      (1 << 24)
#define CVT       (1 << 25)
#define ACC       (1 << 21)
#define EMPTY     (1 << 22)
#define PARAM     (1 << 23)
#define CALL      (1 << 24)
#define LONGLONG  (1 << 20)
#define ACC       (1 << 21)
#define EMPTY     (1 << 22)
#define PARAM     (1 << 23)

extern int identtype, parameter;
extern struct symbollist *params;
extern struct symbol *currfunc, *calledfunc;

int strtotok(char*);
char *toktostr(int);
int yylex();

#endif
