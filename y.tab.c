/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20150711

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

extern struct list ONE;
int d;
#line 9 "c.y"
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
#line 43 "y.tab.c"

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
   20,   28,   28,   21,   21,   22,   25,   25,   25,   27,
   24,   24,   26,   13,   13,   29,   29,   29,   29,   29,
   29,   29,   29,   29,   29,   29,   29,   17,   18,   31,
   32,   23,   23,    9,   14,   15,   16,   16,   30,    6,
    3,    3,    4,    4,    8,    8,    8,    7,    7,    7,
   10,   10,   10,   11,   11,   11,   19,   19,    5,    5,
    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    1,    0,    5,    2,    2,    2,    1,    2,    2,    2,
    2,    1,    1,    1,    3,    4,    0,    2,    2,    0,
    0,    4,    1,    1,    3,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    8,    0,    0,
    0,    0,    1,    6,    8,   14,    0,    1,    0,    1,
    1,    4,    1,    4,    1,    3,    3,    1,    3,    3,
    1,    2,    2,    1,    2,    2,    0,    4,    1,    1,
    3,    2,    0,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,   69,   70,   12,   13,   40,
    0,    0,    0,    0,   64,   24,    0,    0,   73,    0,
    0,    1,    0,   73,   73,    7,    0,    0,    0,   73,
    0,    0,   65,   66,    0,    4,   73,   73,    0,    0,
    0,    0,    8,   30,   31,   32,   28,   29,   33,   34,
   35,   36,   37,   27,   26,    0,   62,   63,    6,    9,
   10,    5,    0,   72,   67,    0,    0,   11,    0,    0,
    0,   48,   58,    0,    0,    0,    0,    0,   59,   60,
    0,    0,   25,    0,    0,   18,   19,    0,   20,    0,
   73,   73,   41,    0,    0,   43,    0,    0,   15,    0,
   73,    0,    0,    3,    0,    0,    0,   16,    0,    0,
   44,    0,   68,   23,    0,   49,   73,    0,    0,   45,
    0,   38,   22,   49,    0,   73,    0,   49,   46,
};
static const YYINT yydgoto[] = {                         11,
   12,   43,   13,   14,   15,   16,   17,   18,   19,   73,
   21,   22,   23,   24,   25,   74,   26,   63,   85,   27,
   68,   69,   97,  108,   70,  115,   28,   29,   56,  120,
   35,  104,
};
static const YYINT yysindex[] = {                      -119,
  -25,   26,   51, -229, -229,    0,    0,    0,    0,    0,
    0, -119, -295, -279,    0,    0,  -37,  -29,    0,  -59,
 -219,    0,   38,    0,    0,    0,   40, -180,  -19,    0,
 -175, -175,    0,    0, -119,    0,    0,    0, -175, -175,
 -175, -175,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -175,    0,    0,    0,    0,
    0,    0,   65,    0,    0,  -19,  -19,    0,   16, -197,
 -175,    0,    0,   56,   80,   14, -175, -175,    0,    0,
  -37,  -37,    0, -178,   49,    0,    0,  -19,    0,  100,
    0,    0,    0, -279,  -29,    0,  101, -175,    0,   52,
    0, -175, -185,    0,   21,   53, -156,    0, -185,   90,
    0, -119,    0,    0,   57,    0,    0,   27,   52,    0,
 -175,    0,    0,    0,  112,    0, -185,    0,    0,
};
static const YYINT yyrindex[] = {                         3,
    0,    0,    0, -173, -173,    0,    0,    0,    0,    0,
    0,    1,  -15,    9,    0,    0,  -21,   -1,    0,   20,
  -13,    0,    0,    0,    0,    0,  115,    0, -148,    0,
  -23, -173,    0,    0, -113,    0,    0,    0, -173, -173,
 -173, -173,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -173,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -148, -148,    0,   45,    0,
 -173,    0,    0,    0,    0,    0, -173, -173,    0,    0,
  -10,   -4,    0,  117,  -34,    0,    0, -148,    0,    0,
    0,    0,    0,   10,    2,    0,    0, -173,    0,   12,
    0,  -23, -173,    0,    0,    0,    0,    0, -173,    0,
    0, -113,    0,    0,    0,    0,    0,    0,   12,    0,
  -41,    0,    0,    0,    0,    0, -173,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -16,   76,    0,   82,  129,  -14,   94,   83,    0,   42,
    0,   35,  107,    0,    0,  -57,    0,    0,    0,   81,
   78,    0,    0,   54,   71,    0,   75,    0,    0,  -12,
    0,    0,
};
#define YYTABLESIZE 321
static const YYINT yytable[] = {                         47,
    2,   55,    2,   10,   39,   37,   71,   71,   71,   40,
   71,    2,   71,   41,   30,   42,   72,   75,   67,   55,
   38,   55,   66,   55,   71,   50,   71,   61,   61,   61,
   56,   61,   56,   61,   56,   47,   57,   55,   57,   53,
   57,   20,   54,   50,  110,   61,   36,   61,   56,   51,
   52,   21,   21,   20,   57,   21,   90,   53,   71,   88,
   54,   58,   58,  124,   58,   31,   58,   51,   52,   76,
   21,   55,    6,    7,   57,   58,   20,   50,   58,   61,
   79,   80,   56,  106,   14,   14,  111,   72,   57,    1,
   32,   53,  116,    2,   54,    3,   59,   20,   62,   60,
   61,   51,   52,   14,   84,   71,   72,   89,    4,    5,
  128,  125,   77,   78,   91,  129,    6,    7,    4,    5,
   92,    8,    9,   64,   65,    2,    6,    7,    8,    9,
   20,   20,   33,   34,   81,   82,   86,   87,   93,   98,
  101,  105,  107,  112,   20,  113,  118,  114,  117,  119,
   20,  122,  126,   20,   39,    1,   17,   42,   94,    2,
   95,    3,   83,  100,   96,   99,  102,  103,   20,    0,
    0,    0,  123,    0,    4,    5,  109,    0,    0,    0,
    0,    0,    6,    7,    0,    0,    0,    8,    9,    0,
   20,   20,  121,    0,    0,    0,    0,    0,    0,    0,
    0,  127,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   44,   45,   46,   47,   48,   49,   50,   51,
   52,   53,    0,    0,    0,    0,    0,    0,    0,   54,
    0,    0,    0,    0,    0,    0,    0,   71,   71,   71,
   71,   71,   71,   71,   71,   71,   71,    0,    0,   71,
   71,    0,   20,   20,   71,   71,   71,    0,   61,   61,
   61,   61,   61,   61,   61,   61,   61,   61,   55,   55,
   20,   20,    0,    0,    0,   61,   61,   61,    0,   56,
   56,    0,    0,    0,    0,   57,   57,    0,   53,   53,
    0,   54,   54,    0,   20,   20,   20,   20,    0,   51,
   52,    0,    0,    0,    0,    0,    0,    0,    0,   58,
   58,
};
static const YYINT yycheck[] = {                         41,
    0,   61,    0,  123,   42,  301,   41,   42,   43,   47,
   45,  125,   47,   43,   40,   45,   31,   32,   38,   41,
  300,   43,   42,   45,   59,   41,   61,   41,   42,   43,
   41,   45,   43,   47,   45,   59,   41,   59,   43,   41,
   45,    0,   41,   59,  102,   59,   12,   61,   59,   41,
   41,   40,   41,   12,   59,   44,   71,   59,   93,   44,
   59,   42,   43,  121,   45,   40,   47,   59,   59,   35,
   59,   93,  302,  303,  294,  295,   35,   93,   59,   93,
   39,   40,   93,   98,   40,   41,  103,  102,   93,  275,
   40,   93,  109,  279,   93,  281,   59,   56,   59,   24,
   25,   93,   93,   59,   40,   30,  121,  305,  294,  295,
  127,  124,   37,   38,   59,  128,  302,  303,  294,  295,
   41,  307,  308,  304,  305,  125,  302,  303,  307,  308,
  304,  305,    4,    5,   41,   42,   66,   67,  125,   91,
   41,   41,   91,  123,  103,   93,  112,  304,   59,   93,
  109,  125,   41,  112,   40,  275,  305,   41,   77,  279,
   78,  281,   56,   89,   84,   88,   91,   92,  127,   -1,
   -1,   -1,  119,   -1,  294,  295,  101,   -1,   -1,   -1,
   -1,   -1,  302,  303,   -1,   -1,   -1,  307,  308,   -1,
  304,  305,  117,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  126,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  282,  283,  284,  285,  286,  287,  288,  289,
  290,  291,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  299,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,  284,
  285,  286,  287,  288,  289,  290,  291,   -1,   -1,  294,
  295,   -1,  304,  305,  299,  300,  301,   -1,  282,  283,
  284,  285,  286,  287,  288,  289,  290,  291,  300,  301,
  304,  305,   -1,   -1,   -1,  299,  300,  301,   -1,  300,
  301,   -1,   -1,   -1,   -1,  300,  301,   -1,  300,  301,
   -1,  300,  301,   -1,  304,  305,  304,  305,   -1,  301,
  301,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  300,
  301,
};
#define YYFINAL 11
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
"var : addresses IDENTIFIER M arrays",
"addresses :",
"addresses : '*' addresses",
"addresses : '&' addresses",
"M :",
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
"function : declaration R '(' opt_declaration ')' '{' statements '}'",
"R :",
"P :",
"Q :",
"opt_declaration :",
"opt_declaration : declaration",
"if_statement : IF '(' expression ')' lbl statement",
"while_statement : WHILE '(' lbl expression ')' lbl statement jump",
"for_statement : FOR '(' opt_expression ';' lbl opt_expression ';' lbl opt_expression jump ')' lbl statement jump",
"opt_expression :",
"opt_expression : expression",
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
"terminal : M IDENTIFIER arrayref",
"terminal : M NUMBER",
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
#line 209 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse\n");
}
#line 424 "y.tab.c"

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
#line 38 "c.y"
	{ print_rtls(); }
break;
case 2:
#line 41 "c.y"
	{}
break;
case 3:
#line 42 "c.y"
	{}
break;
case 4:
#line 43 "c.y"
	{}
break;
case 5:
#line 46 "c.y"
	{ print_decls();}
break;
case 6:
#line 47 "c.y"
	{}
break;
case 7:
#line 48 "c.y"
	{}
break;
case 8:
#line 49 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 9:
#line 50 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 10:
#line 51 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 11:
#line 54 "c.y"
	{}
break;
case 12:
#line 57 "c.y"
	{ identtype = INT;   identwidth = 4; }
break;
case 13:
#line 58 "c.y"
	{ identtype = FLOAT; identwidth = 8; }
break;
case 14:
#line 61 "c.y"
	{}
break;
case 15:
#line 62 "c.y"
	{}
break;
case 16:
#line 65 "c.y"
	{ yyval.decl = symbol(join(yystack.l_mark[0].type, yystack.l_mark[-3].type)); }
break;
case 17:
#line 68 "c.y"
	{ yyval.type = makebasetype(identtype); }
break;
case 18:
#line 69 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1); }
break;
case 19:
#line 70 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1); }
break;
case 20:
#line 73 "c.y"
	{ strcpy(ident, yylval.str); }
break;
case 21:
#line 76 "c.y"
	{}
break;
case 22:
#line 77 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num); }
break;
case 23:
#line 80 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 24:
#line 83 "c.y"
	{}
break;
case 25:
#line 84 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 26:
#line 87 "c.y"
	{ yyval.num = '='; }
break;
case 27:
#line 88 "c.y"
	{ yyval.num = NEQ; }
break;
case 28:
#line 89 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 29:
#line 90 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 30:
#line 91 "c.y"
	{ yyval.num = MULEQ; }
break;
case 31:
#line 92 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 32:
#line 93 "c.y"
	{ yyval.num = MODEQ; }
break;
case 33:
#line 94 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 34:
#line 95 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 35:
#line 96 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 36:
#line 97 "c.y"
	{ yyval.num = XOREQ; }
break;
case 37:
#line 98 "c.y"
	{ yyval.num = OREQ; }
break;
case 38:
#line 102 "c.y"
	{ func(yystack.l_mark[-7].decl, yystack.l_mark[-4].decl); }
break;
case 39:
#line 105 "c.y"
	{ yyval.rtl = func_init(); }
break;
case 40:
#line 108 "c.y"
	{ increase_scope(); }
break;
case 41:
#line 111 "c.y"
	{ decrease_scope(); }
break;
case 42:
#line 114 "c.y"
	{}
break;
case 43:
#line 115 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 44:
#line 119 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 45:
#line 126 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 46:
#line 135 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 47:
#line 143 "c.y"
	{}
break;
case 48:
#line 144 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 49:
#line 147 "c.y"
	{ yyval.jump = jump(); }
break;
case 50:
#line 150 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 51:
#line 153 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 52:
#line 155 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 53:
#line 162 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 54:
#line 164 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 55:
#line 171 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 56:
#line 173 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 57:
#line 175 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 58:
#line 178 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 59:
#line 180 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 60:
#line 182 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 61:
#line 185 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 62:
#line 186 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 63:
#line 187 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 64:
#line 190 "c.y"
	{ }
break;
case 65:
#line 191 "c.y"
	{ binst(yystack.l_mark[0].rtl, &ONE, INCR); }
break;
case 66:
#line 192 "c.y"
	{ binst(yystack.l_mark[0].rtl, &ONE, DECR); }
break;
case 67:
#line 195 "c.y"
	{ arrayref(1); }
break;
case 68:
#line 196 "c.y"
	{ printf("imm is %s\n", yystack.l_mark[-1].rtl->sptr->entry->id);
               binst(yystack.l_mark[-1].rtl, makeimmediate(arrayref(0)->width), '*'); }
break;
case 69:
#line 200 "c.y"
	{ yyval.rtl = terminal(TRUE); }
break;
case 70:
#line 201 "c.y"
	{ yyval.rtl = terminal(FALSE); }
break;
case 71:
#line 202 "c.y"
	{ yyval.rtl = terminal(IDENTIFIER); }
break;
case 72:
#line 203 "c.y"
	{ yyval.rtl = terminal(NUMBER); }
break;
case 73:
#line 206 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 939 "y.tab.c"
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
