/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "c.y"
#include "scan.h"
#include "sem_rec.h"
#line 6 "c.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
   char *str;
   int num;
   struct list *rtl;
   struct type *type;
   struct symbol *decl;
   struct jumplist *jump;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 40 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define AUTO 257
#define BREAK 258
#define CASE 259
#define CONST 260
#define CONTINUE 261
#define DEFAULT 262
#define DO 263
#define REGISTER 264
#define RETURN 265
#define SIGNED 266
#define SIZEOF 267
#define STATIC 268
#define STRUCT 269
#define SWITCH 270
#define TYPEDEF 271
#define UNION 272
#define VOID 273
#define VOLATILE 274
#define WHILE 275
#define ELSE 276
#define ENUM 277
#define EXTERN 278
#define FOR 279
#define GOTO 280
#define IF 281
#define MULEQ 282
#define DIVEQ 283
#define MODEQ 284
#define ADDEQ 285
#define SUBEQ 286
#define LSHIFTEQ 287
#define RSHIFTEQ 288
#define ANDEQ 289
#define XOREQ 290
#define OREQ 291
#define LSHIFT 292
#define RSHIFT 293
#define INCR 294
#define DECR 295
#define GTEQ 296
#define LTEQ 297
#define EQ 298
#define NEQ 299
#define LAND 300
#define LOR 301
#define TRUE 302
#define FALSE 303
#define NUMBER 304
#define IDENTIFIER 305
#define NOT 306
#define INT_ 307
#define FLOAT_ 308
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,   12,   12,   12,    1,    1,    1,    1,    1,    1,
   21,   28,   28,   22,   22,   23,   26,   26,   26,   25,
   25,   27,   13,   13,   29,   29,   29,   29,   29,   29,
   29,   29,   29,   29,   29,   29,   17,   18,   31,   32,
   24,   24,    9,   14,   15,   16,   16,   30,    6,    3,
    3,    4,    4,    8,    8,    8,    7,    7,    7,   10,
   10,   10,   11,   11,   11,   19,   19,    5,    5,    5,
    5,   20,    2,
};
static const YYINT yylen[] = {                            2,
    1,    0,    5,    2,    2,    2,    1,    2,    2,    2,
    2,    1,    1,    1,    3,    3,    0,    2,    2,    0,
    4,    1,    1,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    8,    0,    0,    0,
    0,    1,    6,    8,   14,    0,    1,    0,    1,    1,
    4,    1,    4,    1,    3,    3,    1,    3,    3,    1,
    2,    2,    1,    2,    2,    0,    4,    1,    1,    2,
    1,    0,    0,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,   68,   69,   71,   66,   12,
   13,   39,    0,    0,    0,    0,   63,   23,    0,    0,
   73,    0,    0,    1,    0,   73,   73,    7,    0,    0,
   73,    0,    0,   64,   65,    0,    0,    4,   73,   73,
    0,    0,    0,    0,    8,   29,   30,   31,   27,   28,
   32,   33,   34,   35,   36,   26,   25,    0,   61,   62,
    6,    9,   10,    5,    0,    0,    0,   11,    0,    0,
    0,   47,    0,    0,   57,    0,    0,    0,    0,   58,
   59,    0,    0,   24,    0,   18,   19,    0,    0,    0,
   73,   73,    0,   40,    0,    0,   42,    0,   15,    0,
   16,   73,    0,    0,   67,    3,    0,   22,    0,    0,
    0,   43,    0,    0,   48,   73,    0,   21,   44,    0,
   37,   48,    0,   73,    0,   48,   45,
};
static const YYINT yydgoto[] = {                         13,
   14,   45,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   26,   27,   73,   28,   65,   36,    0,
   29,   68,   69,   98,  101,   70,  109,   30,   58,  119,
   37,  106,
};
static const YYINT yysindex[] = {                      -120,
  -24,    6,    9, -295, -295,    0,    0,    0,    0,    0,
    0,    0,    0, -120, -239, -236,    0,    0,   28,   51,
    0,   22, -215,    0,   27,    0,    0,    0,   34,   39,
    0, -132, -132,    0,    0,  -19, -120,    0,    0,    0,
 -132, -132, -132, -132,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -132,    0,    0,
    0,    0,    0,    0,   49,   39,   39,    0,   60, -199,
 -132,    0,   56,   76,    0, -132,   -7, -132, -132,    0,
    0,   28,   28,    0, -210,    0,    0,   39,   31,   83,
    0,    0,   33,    0, -236,   51,    0,   86,    0, -176,
    0,    0, -132, -156,    0,    0,    8,    0,   36, -156,
   73,    0, -120,   31,    0,    0,   10,    0,    0, -132,
    0,    0,   93,    0, -156,    0,    0,
};
static const YYINT yyrindex[] = {                       136,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    5,  -30,   -1,    0,    0,  -17,   -5,
    0,  -28,  -20,    0,    0,    0,    0,    0,  100, -164,
    0,   91,    0,    0,    0,  -41,   29,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -164, -164,    0,   19,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -11,   -8,    0,  112,    0,    0, -164,   25,    0,
    0,    0,    0,    0,    2,   -3,    0,    0,    0,    0,
    0,    0,   91,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   29,   25,    0,    0,    0,    0,    0,  115,
    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -57,   74,    0,   79,   98,  -21,   68,   81,    0,   66,
    0,   30,   13,    0,    0,  -46,    0,    0,    0,    0,
   82,   70,    0,    0,   50,   54,    0,    0,    0,  -35,
    0,    0,
};
#define YYTABLESIZE 321
static const YYINT yytable[] = {                         70,
   70,   70,   12,   70,    2,   70,    6,    7,    8,    9,
   49,   74,   57,   57,   57,   31,   57,   70,   57,   70,
   60,   60,   60,   54,   60,   54,   60,   54,   49,   55,
   57,   55,   56,   55,   56,   52,   56,   53,   60,   50,
   60,   54,   51,   38,   72,   32,  112,   55,   33,   90,
   56,   70,  115,   52,   93,   53,  111,   50,   14,   14,
   51,   39,   49,   40,   20,   20,   77,  126,   20,   41,
   84,   76,   60,  122,   42,   54,   67,   14,   59,   60,
   66,   55,   57,   20,   56,   61,  123,   52,   85,   53,
  127,   50,   64,   43,   51,   44,   10,   11,   75,   62,
   63,   34,   35,   88,   71,   89,   80,   81,   75,   75,
   82,   83,   78,   79,   91,   72,   92,   94,    1,   86,
   87,  100,    2,  102,    3,  105,  107,  108,  114,    2,
  113,  116,   72,  124,  121,    2,   75,    4,    5,   38,
   17,   75,  117,   75,   75,    6,    7,    8,    9,   46,
   10,   11,   41,    2,    1,   46,   95,   99,    2,   96,
    3,    4,    5,  118,  103,  104,   97,    0,    0,    6,
    7,    8,    9,    4,    5,  110,    0,    0,    0,    0,
    0,    6,    7,    8,    9,    0,   10,   11,    0,  120,
    0,    0,    0,    0,    0,    0,    0,  125,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   70,   70,   70,   70,   70,   70,   70,   70,   70,   70,
    0,    0,   70,   70,    0,    0,    0,   70,   70,   70,
    0,   60,   60,   60,   60,   60,   60,   60,   60,   60,
   60,   57,   57,    0,    0,    0,    0,    0,   60,   60,
   60,    0,   54,   54,    0,    0,    0,    0,   55,   55,
    0,   56,   56,    0,   52,   52,   53,   53,    0,   50,
    0,    0,   51,   46,   47,   48,   49,   50,   51,   52,
   53,   54,   55,    0,    0,    0,    0,    0,    0,    0,
   56,
};
static const YYINT yycheck[] = {                         41,
   42,   43,  123,   45,    0,   47,  302,  303,  304,  305,
   41,   33,   41,   42,   43,   40,   45,   59,   47,   61,
   41,   42,   43,   41,   45,   43,   47,   45,   59,   41,
   59,   43,   41,   45,   43,   41,   45,   41,   59,   41,
   61,   59,   41,   14,   32,   40,  104,   59,   40,   71,
   59,   93,  110,   59,   76,   59,  103,   59,   40,   41,
   59,  301,   93,  300,   40,   41,   37,  125,   44,   42,
   58,   91,   93,  120,   47,   93,   38,   59,  294,  295,
   42,   93,   61,   59,   93,   59,  122,   93,   40,   93,
  126,   93,   59,   43,   93,   45,  307,  308,   33,   26,
   27,    4,    5,   44,   31,  305,   41,   42,   43,   44,
   43,   44,   39,   40,   59,  103,   41,  125,  275,   66,
   67,   91,  279,   41,  281,   93,   41,  304,   93,  125,
  123,   59,  120,   41,  125,    0,   71,  294,  295,   40,
  305,   76,  113,   78,   79,  302,  303,  304,  305,   59,
  307,  308,   41,  125,  275,   41,   78,   88,  279,   79,
  281,  294,  295,  114,   91,   92,   85,   -1,   -1,  302,
  303,  304,  305,  294,  295,  102,   -1,   -1,   -1,   -1,
   -1,  302,  303,  304,  305,   -1,  307,  308,   -1,  116,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  124,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  282,  283,  284,  285,  286,  287,  288,  289,  290,  291,
   -1,   -1,  294,  295,   -1,   -1,   -1,  299,  300,  301,
   -1,  282,  283,  284,  285,  286,  287,  288,  289,  290,
  291,  300,  301,   -1,   -1,   -1,   -1,   -1,  299,  300,
  301,   -1,  300,  301,   -1,   -1,   -1,   -1,  300,  301,
   -1,  300,  301,   -1,  300,  301,  300,  301,   -1,  301,
   -1,   -1,  301,  282,  283,  284,  285,  286,  287,  288,
  289,  290,  291,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  299,
};
#define YYFINAL 13
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 308
#define YYUNDFTOKEN 343
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",
0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"AUTO","BREAK","CASE","CONST","CONTINUE","DEFAULT","DO",
"REGISTER","RETURN","SIGNED","SIZEOF","STATIC","STRUCT","SWITCH","TYPEDEF",
"UNION","VOID","VOLATILE","WHILE","ELSE","ENUM","EXTERN","FOR","GOTO","IF",
"MULEQ","DIVEQ","MODEQ","ADDEQ","SUBEQ","LSHIFTEQ","RSHIFTEQ","ANDEQ","XOREQ",
"OREQ","LSHIFT","RSHIFT","INCR","DECR","GTEQ","LTEQ","EQ","NEQ","LAND","LOR",
"TRUE","FALSE","NUMBER","IDENTIFIER","NOT","INT_","FLOAT_",0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : start",
"start : statements",
"statements :",
"statements : '{' P statements '}' Q",
"statements : statement statements",
"statement : declaration ';'",
"statement : assignment ';'",
"statement : function",
"statement : if_statement lbl",
"statement : while_statement lbl",
"statement : for_statement lbl",
"declaration : type vars",
"type : INT_",
"type : FLOAT_",
"vars : var",
"vars : var ',' vars",
"var : addresses IDENTIFIER arrays",
"addresses :",
"addresses : '*' addresses",
"addresses : '&' addresses",
"arrays :",
"arrays : '[' num ']' arrays",
"num : NUMBER",
"assignment : expression",
"assignment : postfix_expression assign_oper assignment",
"assign_oper : '='",
"assign_oper : NEQ",
"assign_oper : ADDEQ",
"assign_oper : SUBEQ",
"assign_oper : MULEQ",
"assign_oper : DIVEQ",
"assign_oper : MODEQ",
"assign_oper : LSHIFTEQ",
"assign_oper : RSHIFTEQ",
"assign_oper : ANDEQ",
"assign_oper : XOREQ",
"assign_oper : OREQ",
"function : declaration E '(' opt_declaration ')' '{' statements '}'",
"E :",
"P :",
"Q :",
"opt_declaration :",
"opt_declaration : declaration",
"if_statement : IF '(' expression ')' lbl statement",
"while_statement : WHILE '(' lbl expression ')' lbl statement jump",
"for_statement : FOR '(' opt_expression ';' lbl opt_expression ';' lbl opt_expression jump ')' lbl statement jump",
"opt_expression :",
"opt_expression : assignment",
"jump :",
"expression : logical_or",
"logical_or : logical_and",
"logical_or : logical_or LOR lbl logical_and",
"logical_and : additive_expression",
"logical_and : logical_and LAND lbl additive_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression '+' multiplicative_expression",
"additive_expression : additive_expression '-' multiplicative_expression",
"multiplicative_expression : postfix_expression",
"multiplicative_expression : multiplicative_expression '*' postfix_expression",
"multiplicative_expression : multiplicative_expression '/' postfix_expression",
"postfix_expression : prefix_expression",
"postfix_expression : prefix_expression INCR",
"postfix_expression : prefix_expression DECR",
"prefix_expression : terminal",
"prefix_expression : INCR terminal",
"prefix_expression : DECR terminal",
"arrayref :",
"arrayref : arrayref '[' expression ']'",
"terminal : TRUE",
"terminal : FALSE",
"terminal : IDENTIFIER arrayref",
"terminal : NUMBER",
"N :",
"lbl :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 207 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
#line 421 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 36 "c.y"
	{ print_rtls(); }
break;
case 2:
#line 39 "c.y"
	{}
break;
case 3:
#line 40 "c.y"
	{}
break;
case 4:
#line 41 "c.y"
	{}
break;
case 5:
#line 44 "c.y"
	{}
break;
case 6:
#line 45 "c.y"
	{}
break;
case 7:
#line 46 "c.y"
	{}
break;
case 8:
#line 47 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 9:
#line 48 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 10:
#line 49 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 11:
#line 52 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 12:
#line 55 "c.y"
	{ identtype = INT;   identwidth = 4; }
break;
case 13:
#line 56 "c.y"
	{ identtype = FLOAT; identwidth = 8; }
break;
case 14:
#line 59 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 15:
#line 60 "c.y"
	{ yyval.decl = yystack.l_mark[-2].decl; }
break;
case 16:
#line 63 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-1].str, join(yystack.l_mark[0].type, yystack.l_mark[-2].type)); }
break;
case 17:
#line 66 "c.y"
	{ yyval.type = makebasetype(identtype); }
break;
case 18:
#line 67 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1); }
break;
case 19:
#line 68 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1); }
break;
case 20:
#line 71 "c.y"
	{}
break;
case 21:
#line 72 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num); }
break;
case 22:
#line 75 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 23:
#line 78 "c.y"
	{}
break;
case 24:
#line 79 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 25:
#line 82 "c.y"
	{ yyval.num = '='; }
break;
case 26:
#line 83 "c.y"
	{ yyval.num = NEQ; }
break;
case 27:
#line 84 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 28:
#line 85 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 29:
#line 86 "c.y"
	{ yyval.num = MULEQ; }
break;
case 30:
#line 87 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 31:
#line 88 "c.y"
	{ yyval.num = MODEQ; }
break;
case 32:
#line 89 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 33:
#line 90 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 34:
#line 91 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 35:
#line 92 "c.y"
	{ yyval.num = XOREQ; }
break;
case 36:
#line 93 "c.y"
	{ yyval.num = OREQ; }
break;
case 37:
#line 97 "c.y"
	{ func(yystack.l_mark[-7].decl, yystack.l_mark[-4].decl, yystack.l_mark[-6].rtl); }
break;
case 38:
#line 100 "c.y"
	{ yyval.rtl = empty(); }
break;
case 39:
#line 103 "c.y"
	{ increase_scope(); }
break;
case 40:
#line 106 "c.y"
	{ decrease_scope(); }
break;
case 41:
#line 109 "c.y"
	{}
break;
case 42:
#line 110 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 43:
#line 114 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 44:
#line 121 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 45:
#line 130 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 46:
#line 138 "c.y"
	{}
break;
case 47:
#line 139 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 48:
#line 142 "c.y"
	{ yyval.jump = jump(); }
break;
case 49:
#line 145 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 50:
#line 148 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 51:
#line 150 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 52:
#line 157 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 53:
#line 159 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 54:
#line 166 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 55:
#line 168 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 56:
#line 170 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 57:
#line 173 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 58:
#line 175 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 59:
#line 177 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 60:
#line 180 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 61:
#line 181 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 62:
#line 182 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 63:
#line 185 "c.y"
	{ }
break;
case 64:
#line 186 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), INCR); }
break;
case 65:
#line 187 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), DECR); }
break;
case 66:
#line 190 "c.y"
	{ yyval.rtl = arrayref(NULL, NULL); }
break;
case 67:
#line 191 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-4].str, yystack.l_mark[-1].rtl); }
break;
case 68:
#line 194 "c.y"
	{ yyval.rtl = terminal(TRUE, NULL); }
break;
case 69:
#line 195 "c.y"
	{ yyval.rtl = terminal(FALSE, NULL); }
break;
case 70:
#line 196 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl ? binst(terminal(IDENTIFIER,yystack.l_mark[-1].str), yystack.l_mark[0].rtl, '+')
                                   : terminal(IDENTIFIER, yystack.l_mark[-1].str); }
break;
case 71:
#line 198 "c.y"
	{ yyval.rtl = terminal(NUMBER, yystack.l_mark[0].str); }
break;
case 72:
#line 201 "c.y"
	{ strcpy(ident2, yylval.str); }
break;
case 73:
#line 204 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 936 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
