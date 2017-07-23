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

extern struct list ONE;
#line 8 "c.y"
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
#line 42 "y.tab.c"

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
   10,   10,   10,   11,   11,   11,   11,   19,   19,   19,
    5,    5,    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    1,    0,    5,    2,    2,    2,    1,    2,    2,    2,
    2,    1,    1,    1,    3,    4,    0,    2,    2,    0,
    0,    4,    1,    1,    3,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    8,    0,    0,
    0,    0,    1,    6,    8,   14,    0,    1,    0,    1,
    1,    4,    1,    4,    1,    3,    3,    1,    3,    3,
    1,    2,    2,    1,    3,    2,    2,    0,    2,    3,
    1,    1,    2,    2,    0,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,   71,   72,   12,   13,   40,
    0,    0,    0,    0,    0,   24,    0,    0,   75,    0,
    0,    1,    0,   75,   75,    7,    0,    0,    0,   75,
    0,    0,   66,   67,    0,    4,   75,   75,    0,    0,
    0,    0,    0,    8,   30,   31,   32,   28,   29,   33,
   34,   35,   36,   37,   27,   26,    0,   62,   63,    6,
    9,   10,    5,    0,   74,   73,    0,    0,   11,    0,
    0,    0,   48,   58,    0,    0,    0,    0,    0,   23,
    0,   65,    0,   59,   60,    0,    0,   25,    0,   18,
   19,    0,   20,    0,   75,   75,   41,    0,    0,   69,
    0,   43,    0,   15,    0,   75,    0,    0,    3,   70,
    0,    0,   16,    0,    0,   44,    0,    0,   49,   75,
    0,    0,   45,    0,   38,   22,   49,    0,   75,    0,
   49,   46,
};
static const YYINT yydgoto[] = {                         11,
   12,   44,   13,   14,   15,   16,   17,   18,   19,   74,
   21,   22,   23,   24,   25,   75,   26,   64,   82,   27,
   69,   70,  103,  113,   71,   83,   28,   29,   57,  123,
   35,  109,
};
static const YYINT yysindex[] = {                      -118,
  -30,  -24,   35, -205, -205,    0,    0,    0,    0,    0,
    0, -118, -251, -214,   19,    0,  -28,   -1,    0,  -59,
 -192,    0,   31,    0,    0,    0,   57, -196,   26,    0,
 -175, -175,    0,    0, -118,    0,    0,    0,  -87, -175,
 -175, -175, -175,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -175,    0,    0,    0,
    0,    0,    0,   54,    0,    0,   26,   26,    0,   77,
 -172, -175,    0,    0,   75,   97,   14, -175, -175,    0,
  -87,    0,   47,    0,    0,  -28,  -28,    0, -193,    0,
    0,   26,    0,  100,    0,    0,    0, -214,   -1,    0,
  -87,    0,  101,    0,   53,    0, -175, -190,    0,    0,
   22, -161,    0, -190,   87,    0, -118,   55,    0,    0,
   24,   53,    0, -175,    0,    0,    0,  106,    0, -190,
    0,    0,
};
static const YYINT yyrindex[] = {                         3,
    0,    0,    0, -180, -180,    0,    0,    0,    0,    0,
    0,    1,  -23,  -18,  -34,    0,  -21,   13,    0,   20,
   10,    0,    0,    0,    0,    0,  110,    0, -154,    0,
  -20, -180,    0,    0, -113,    0,    0,    0,  -13, -180,
 -180, -180, -180,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -180,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -154, -154,    0,   52,
    0, -180,    0,    0,    0,    0,    0, -180, -180,    0,
  -13,    0,    0,    0,    0,  -10,    2,    0,  114,    0,
    0, -154,    0,    0,    0,    0,    0,   17,   15,    0,
  -13,    0,    0,    0,   40,    0,  -20, -180,    0,    0,
    0,    0,    0, -180,    0,    0, -113,    0,    0,    0,
    0,   40,    0,  -41,    0,    0,    0,    0,    0, -180,
    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -93,   58,    0,   78,  125,   28,   89,   79,    0,   66,
    0,    5,  102,    0,    0,  -37,    0,    0,  -75,   71,
   70,    0,    0,   43,   69,   56,   73,    0,    0,  -54,
    0,    0,
};
#define YYTABLESIZE 321
static const YYINT yytable[] = {                         47,
    2,   56,    2,   81,   10,  100,   64,   64,   64,   30,
   64,    2,   64,   40,  116,   31,   36,   50,   41,   55,
  119,   55,   51,   55,   64,  110,   64,   68,   68,   68,
   56,   68,   56,   68,   56,   50,  131,   55,   47,   77,
   51,   42,   57,   43,   57,   68,   57,   68,   56,   37,
   61,   61,   61,   53,   61,   54,   61,   52,   73,   76,
   57,   58,   58,   68,   58,   20,   58,   67,   61,  115,
   61,   53,  128,   54,   32,   52,  132,   20,   58,   21,
   21,   61,   62,   21,    1,   38,  127,   72,    2,   60,
    3,   14,   14,   89,   78,   79,    6,    7,   21,   94,
   20,   58,   59,    4,    5,   84,   85,   65,   66,   39,
   14,    6,    7,    8,    9,   63,    8,    9,    4,    5,
   92,  121,   20,   20,   20,    2,    6,    7,   33,   34,
   86,   87,   93,   95,   73,   90,   91,   96,   97,  101,
  106,  111,   80,  112,  117,  120,  129,  122,  125,   39,
   17,   73,  107,  108,   42,   98,    1,   99,   88,  102,
    2,  104,    3,  114,  126,  105,    0,  118,    0,    0,
    0,    0,    0,   20,    0,    4,    5,  124,    0,   20,
    0,    0,   20,    6,    7,    0,  130,    0,    8,    9,
   20,   20,    0,    0,    0,   20,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   80,    0,    0,    0,
    0,    0,   45,   46,   47,   48,   49,   50,   51,   52,
   53,   54,    0,    0,    0,    0,    0,    0,    0,   55,
    0,    0,    0,    0,    0,    0,    0,   64,   64,   64,
   64,   64,   64,   64,   64,   64,   64,    0,    0,   64,
   64,    0,   20,   20,   64,   64,   64,    0,   68,   68,
   68,   68,   68,   68,   68,   68,   68,   68,   55,   55,
   68,   68,   51,   20,   20,   68,   68,   68,    0,   56,
   56,   61,   61,   61,   61,   61,   61,   61,   61,   61,
   61,   57,   57,    0,   20,   20,   20,   20,   61,   61,
   61,    0,   53,   53,   54,   54,    0,   52,    0,   58,
   58,
};
static const YYINT yycheck[] = {                         41,
    0,   61,    0,   91,  123,   81,   41,   42,   43,   40,
   45,  125,   47,   42,  108,   40,   12,   41,   47,   41,
  114,   43,   41,   45,   59,  101,   61,   41,   42,   43,
   41,   45,   43,   47,   45,   59,  130,   59,   59,   35,
   59,   43,   41,   45,   43,   59,   45,   61,   59,  301,
   41,   42,   43,   41,   45,   41,   47,   41,   31,   32,
   59,   42,   43,   38,   45,    0,   47,   42,   59,  107,
   61,   59,  127,   59,   40,   59,  131,   12,   59,   40,
   41,   24,   25,   44,  275,  300,  124,   30,  279,   59,
  281,   40,   41,   40,   37,   38,  302,  303,   59,   72,
   35,  294,  295,  294,  295,   40,   41,  304,  305,   91,
   59,  302,  303,  307,  308,   59,  307,  308,  294,  295,
   44,  117,   57,  304,  305,  125,  302,  303,    4,    5,
   42,   43,  305,   59,  107,   67,   68,   41,  125,   93,
   41,   41,  304,   91,  123,   59,   41,   93,  125,   40,
  305,  124,   95,   96,   41,   78,  275,   79,   57,   89,
  279,   92,  281,  106,  122,   93,   -1,  112,   -1,   -1,
   -1,   -1,   -1,  108,   -1,  294,  295,  120,   -1,  114,
   -1,   -1,  117,  302,  303,   -1,  129,   -1,  307,  308,
  304,  305,   -1,   -1,   -1,  130,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  304,   -1,   -1,   -1,
   -1,   -1,  282,  283,  284,  285,  286,  287,  288,  289,
  290,  291,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  299,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,  284,
  285,  286,  287,  288,  289,  290,  291,   -1,   -1,  294,
  295,   -1,  304,  305,  299,  300,  301,   -1,  282,  283,
  284,  285,  286,  287,  288,  289,  290,  291,  300,  301,
  294,  295,  301,  304,  305,  299,  300,  301,   -1,  300,
  301,  282,  283,  284,  285,  286,  287,  288,  289,  290,
  291,  300,  301,   -1,  304,  305,  304,  305,  299,  300,
  301,   -1,  300,  301,  300,  301,   -1,  301,   -1,  300,
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
"prefix_expression : terminal '[' arrayref",
"prefix_expression : INCR terminal",
"prefix_expression : DECR terminal",
"arrayref :",
"arrayref : '[' arrayref",
"arrayref : num ']' arrayref",
"terminal : TRUE",
"terminal : FALSE",
"terminal : M IDENTIFIER",
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
#line 428 "y.tab.c"

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
#line 37 "c.y"
	{ print_rtls(); }
break;
case 2:
#line 40 "c.y"
	{}
break;
case 3:
#line 41 "c.y"
	{}
break;
case 4:
#line 42 "c.y"
	{}
break;
case 5:
#line 45 "c.y"
	{}
break;
case 6:
#line 46 "c.y"
	{}
break;
case 7:
#line 47 "c.y"
	{}
break;
case 8:
#line 48 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 9:
#line 49 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 10:
#line 50 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 11:
#line 53 "c.y"
	{}
break;
case 12:
#line 56 "c.y"
	{ identtype = INT;   identwidth = 4; }
break;
case 13:
#line 57 "c.y"
	{ identtype = FLOAT; identwidth = 8; }
break;
case 14:
#line 60 "c.y"
	{}
break;
case 15:
#line 61 "c.y"
	{}
break;
case 16:
#line 64 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-3].type, yystack.l_mark[0].type); }
break;
case 17:
#line 67 "c.y"
	{ yyval.type = makebasetype(identtype); }
break;
case 18:
#line 68 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1); }
break;
case 19:
#line 69 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1); }
break;
case 20:
#line 72 "c.y"
	{ strcpy(ident, yylval.str); }
break;
case 21:
#line 75 "c.y"
	{}
break;
case 22:
#line 76 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num); }
break;
case 23:
#line 79 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 24:
#line 82 "c.y"
	{}
break;
case 25:
#line 83 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 26:
#line 86 "c.y"
	{ yyval.num = '='; }
break;
case 27:
#line 87 "c.y"
	{ yyval.num = NEQ; }
break;
case 28:
#line 88 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 29:
#line 89 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 30:
#line 90 "c.y"
	{ yyval.num = MULEQ; }
break;
case 31:
#line 91 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 32:
#line 92 "c.y"
	{ yyval.num = MODEQ; }
break;
case 33:
#line 93 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 34:
#line 94 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 35:
#line 95 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 36:
#line 96 "c.y"
	{ yyval.num = XOREQ; }
break;
case 37:
#line 97 "c.y"
	{ yyval.num = OREQ; }
break;
case 38:
#line 101 "c.y"
	{ func(yystack.l_mark[-7].decl, yystack.l_mark[-4].decl); }
break;
case 39:
#line 104 "c.y"
	{ yyval.rtl = func_init(); }
break;
case 40:
#line 107 "c.y"
	{ increase_scope(); }
break;
case 41:
#line 110 "c.y"
	{ decrease_scope(); }
break;
case 42:
#line 113 "c.y"
	{}
break;
case 43:
#line 114 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 44:
#line 118 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 45:
#line 125 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 46:
#line 134 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 47:
#line 142 "c.y"
	{}
break;
case 48:
#line 143 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 49:
#line 146 "c.y"
	{ yyval.jump = jump(); }
break;
case 50:
#line 149 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 51:
#line 152 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 52:
#line 154 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 53:
#line 161 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 54:
#line 163 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 55:
#line 170 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 56:
#line 172 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 57:
#line 174 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 58:
#line 177 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 59:
#line 179 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 60:
#line 181 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 61:
#line 184 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 62:
#line 185 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 63:
#line 186 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 64:
#line 189 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 65:
#line 190 "c.y"
	{ }
break;
case 66:
#line 191 "c.y"
	{ binst(yystack.l_mark[0].rtl, &ONE, INCR); }
break;
case 67:
#line 192 "c.y"
	{ binst(yystack.l_mark[0].rtl, &ONE, DECR); }
break;
case 68:
#line 195 "c.y"
	{}
break;
case 69:
#line 196 "c.y"
	{}
break;
case 70:
#line 197 "c.y"
	{}
break;
case 71:
#line 200 "c.y"
	{ yyval.rtl = terminal(TRUE); }
break;
case 72:
#line 201 "c.y"
	{ yyval.rtl = terminal(FALSE); }
break;
case 73:
#line 202 "c.y"
	{ yyval.rtl = terminal(IDENTIFIER); }
break;
case 74:
#line 203 "c.y"
	{ yyval.rtl = terminal(NUMBER); }
break;
case 75:
#line 206 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 950 "y.tab.c"
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
