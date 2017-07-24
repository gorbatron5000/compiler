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
    1,   33,   33,   33,   32,   20,   27,   27,   21,   21,
   22,   25,   25,   25,   24,   24,   26,   13,   13,   28,
   28,   28,   28,   28,   28,   28,   28,   28,   28,   28,
   28,   17,   17,   18,   30,   31,   23,   23,   23,    9,
   14,   15,   16,   16,   29,    6,    3,    3,    4,    4,
    8,    8,    8,    7,    7,    7,   10,   10,   10,   11,
   11,   11,   19,   19,    5,    5,    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    1,    0,    5,    2,    2,    2,    1,    1,    2,    2,
    2,    0,    1,    3,    5,    2,    1,    1,    1,    3,
    3,    0,    2,    2,    0,    4,    1,    1,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    6,    8,    0,    0,    0,    0,    4,    2,    6,
    8,   14,    0,    1,    0,    1,    1,    4,    1,    4,
    1,    3,    3,    1,    3,    3,    1,    2,    2,    1,
    2,    2,    0,    4,    1,    1,    2,    1,    0,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,   75,   76,   78,    0,   17,
   18,   45,    0,    0,    0,    0,   70,   28,    0,    0,
   79,    0,    0,    1,    0,   79,   79,    7,    0,    0,
    8,   79,    0,    0,   73,   71,   72,    0,    0,    0,
    4,   79,   79,    0,    0,    0,    0,    9,   34,   35,
   36,   32,   33,   37,   38,   39,   40,   41,   31,   30,
    0,   68,   69,    6,   10,   11,    5,    0,    0,    0,
   16,    0,    0,    0,   54,    0,    0,   64,   13,    0,
    0,    0,    0,    0,   65,   66,    0,    0,   29,    0,
   23,   24,    0,    0,    0,   79,   79,    0,    0,    0,
   46,    0,    0,    0,    0,   20,    0,   21,   79,    0,
    0,   14,   15,   74,    3,    0,    0,   27,    0,    0,
    0,   50,    0,   42,    0,    0,   55,   79,    0,   48,
   26,   51,    0,   43,   55,    0,   79,    0,   55,   52,
};
static const YYINT yydgoto[] = {                         13,
   14,   48,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   26,   27,   76,   28,   68,   39,   29,
   71,   72,  104,  108,   73,  119,   30,   61,  132,   40,
  115,   31,   80,
};
static const YYINT yysindex[] = {                      -121,
  -30,  -22,   27, -181, -181,    0,    0,    0,   41,    0,
    0,    0,    0, -121, -245, -216,    0,    0,   56,   70,
    0,  -60, -184,    0,   32,    0,    0,    0,   42,  -26,
    0,    0, -139, -139,    0,    0,    0,  -26,   28, -121,
    0,    0,    0, -139, -139, -139, -139,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -139,    0,    0,    0,    0,    0,    0,   89,  -26,  -26,
    0,   93, -172, -139,    0,   79,  101,    0,    0,   16,
 -139,   21, -139, -139,    0,    0,   56,   56,    0, -190,
    0,    0,  -26,   57,  106,    0,    0,  -26,   90,   64,
    0, -216,   70,  109,  -26,    0, -151,    0,    0, -139,
 -103,    0,    0,    0,    0,  -45,  115,    0,   69, -103,
  102,    0, -121,    0, -190,   57,    0,    0,   44,    0,
    0,    0, -139,    0,    0,  126,    0, -103,    0,    0,
};
static const YYINT yyrindex[] = {                       168,
    0,    0,    0,    0,    0,    0,    0,    0,   29,    0,
    0,    0,    0,    5,   23,    6,    0,    0,  -10,    2,
    0,  -21,  -13,    0,    0,    0,    0,    0,  130, -130,
    0,    0,  118,    0,    0,    0,    0,  -41,  -34,   54,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -130, -130,
    0,  -36,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   -4,   -1,    0,  144,
    0,    0, -130,   68,    0,    0,    0, -130,    0,    0,
    0,    9,    4,    0, -130,    0,    0,    0,    0,  118,
    0,    0,    0,    0,    0,    0,  147,    0,    0,    0,
    0,    0,   54,    0,  144,   68,    0,    0,    0,    0,
    0,    0,  148,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -24,   43,    0,  107,  121,   19,   85,  110,    0,   60,
    0,   22,   18,    0,    0,  -56,    0,    0,    0,    0,
  100,  -32,   71,   72,   66,    0,  -73,    0, -120,    0,
    0,    0,    0,
};
#define YYTABLESIZE 330
static const YYINT yytable[] = {                         12,
   60,   12,   12,   19,    2,   79,   77,   77,   77,   32,
   77,   70,   77,  124,  136,   69,  105,   33,  140,   64,
   64,   64,   19,   64,   77,   64,   77,   67,   67,   67,
   61,   67,   61,   67,   61,   41,   62,   64,   62,   63,
   62,   63,   59,   63,   60,   67,   57,   67,   61,   58,
   75,  105,   77,  121,   62,   42,   99,   63,   77,   98,
   59,   82,   60,   56,   57,  112,   34,   58,   65,   66,
   73,   73,  117,   73,   74,   73,  135,  123,   89,   67,
   38,   56,   61,   43,   83,   84,  122,   73,   62,   73,
   64,   63,   95,   78,   59,  127,   60,   44,   57,  100,
   67,   58,   45,   85,   86,   78,   78,   25,   25,   62,
   63,   25,   46,  139,   47,   56,   10,   11,   81,   73,
    6,    7,    8,   35,   36,   37,   25,   75,   90,    2,
   87,   88,   94,   78,   91,   92,   93,   96,  110,  111,
   78,   97,   78,   78,  129,  101,  109,  107,  113,  116,
   75,  120,  118,    1,    4,    5,  114,    2,  125,    3,
  128,  126,    6,    7,    8,   35,  137,    2,  134,   44,
  133,    1,    4,    5,   22,    2,   53,    3,    2,  138,
    6,    7,    8,    9,   47,   10,   11,   49,   53,  102,
    4,    5,  106,  103,    0,  130,    0,  131,    6,    7,
    8,    9,    0,   10,   11,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   49,   50,   51,   52,   53,   54,   55,   56,   57,
   58,    0,    0,    0,    0,    0,    0,    0,   59,    0,
    0,    0,    0,    0,    0,    0,    0,   77,   77,   77,
   77,   77,   77,   77,   77,   77,   77,    0,    0,   77,
   77,    0,    0,   22,   77,   77,   77,    0,   67,   67,
   67,   67,   67,   67,   67,   67,   67,   67,   64,   64,
    0,    0,    0,    0,    0,   67,   67,   67,    0,   61,
   61,    0,    0,    0,    0,   62,   62,    0,   63,   63,
    0,   59,   59,   60,   60,    0,   57,    0,    0,   58,
   73,   73,   73,   73,   73,   73,   73,   73,   73,   73,
    0,    0,   73,   73,    0,    0,    0,   73,   73,   73,
};
static const YYINT yycheck[] = {                         41,
   61,  123,   44,   40,    0,   38,   41,   42,   43,   40,
   45,   38,   47,   59,  135,   42,   90,   40,  139,   41,
   42,   43,   59,   45,   59,   47,   61,   41,   42,   43,
   41,   45,   43,   47,   45,   14,   41,   59,   43,   41,
   45,   43,   41,   45,   41,   59,   41,   61,   59,   41,
   33,  125,   34,  110,   59,  301,   41,   59,   93,   44,
   59,   40,   59,   41,   59,   98,   40,   59,   26,   27,
   42,   43,  105,   45,   32,   47,  133,  123,   61,   93,
   40,   59,   93,  300,   42,   43,  111,   59,   93,   61,
   59,   93,   74,   34,   93,  120,   93,   42,   93,   81,
   59,   93,   47,   44,   45,   46,   47,   40,   41,  294,
  295,   44,   43,  138,   45,   93,  307,  308,   91,   91,
  302,  303,  304,  305,    4,    5,   59,  110,   40,  125,
   46,   47,  305,   74,   69,   70,   44,   59,   96,   97,
   81,   41,   83,   84,  123,  125,   41,   91,   59,   41,
  133,  109,  304,  275,  294,  295,   93,  279,   44,  281,
   59,   93,  302,  303,  304,  305,   41,    0,  125,   40,
  128,  275,  294,  295,  305,  279,   59,  281,  125,  137,
  302,  303,  304,  305,   41,  307,  308,   41,   41,   83,
  294,  295,   93,   84,   -1,  125,   -1,  126,  302,  303,
  304,  305,   -1,  307,  308,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  282,  283,  284,  285,  286,  287,  288,  289,  290,
  291,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  299,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,  284,
  285,  286,  287,  288,  289,  290,  291,   -1,   -1,  294,
  295,   -1,   -1,  305,  299,  300,  301,   -1,  282,  283,
  284,  285,  286,  287,  288,  289,  290,  291,  300,  301,
   -1,   -1,   -1,   -1,   -1,  299,  300,  301,   -1,  300,
  301,   -1,   -1,   -1,   -1,  300,  301,   -1,  300,  301,
   -1,  300,  301,  300,  301,   -1,  301,   -1,   -1,  301,
  282,  283,  284,  285,  286,  287,  288,  289,  290,  291,
   -1,   -1,  294,  295,   -1,   -1,   -1,  299,  300,  301,
};
#define YYFINAL 13
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 308
#define YYUNDFTOKEN 344
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"statement : call",
"statement : if_statement lbl",
"statement : while_statement lbl",
"statement : for_statement lbl",
"call_list :",
"call_list : var",
"call_list : call_list ',' var",
"call : IDENTIFIER '(' call_list ')' ';'",
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
"function : declaration E '(' param_list ')' ';'",
"function : declaration E '(' param_list ')' '{' statements '}'",
"E :",
"P :",
"Q :",
"param_list :",
"param_list : type var ',' param_list",
"param_list : type var",
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
#line 217 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
#line 430 "y.tab.c"

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
	{}
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
#line 50 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 12:
#line 53 "c.y"
	{}
break;
case 13:
#line 54 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 14:
#line 55 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 15:
#line 58 "c.y"
	{ call(yystack.l_mark[-4].str); }
break;
case 16:
#line 61 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 17:
#line 64 "c.y"
	{ identtype = INT;   identwidth = 4; }
break;
case 18:
#line 65 "c.y"
	{ identtype = FLOAT; identwidth = 8; }
break;
case 19:
#line 68 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 20:
#line 69 "c.y"
	{ yyval.decl = yystack.l_mark[-2].decl; }
break;
case 21:
#line 72 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-1].str, join(yystack.l_mark[0].type, yystack.l_mark[-2].type)); }
break;
case 22:
#line 75 "c.y"
	{ yyval.type = type(NULL, 1, identtype); }
break;
case 23:
#line 76 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, POINTER); }
break;
case 24:
#line 77 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, ADDRESS); }
break;
case 25:
#line 80 "c.y"
	{}
break;
case 26:
#line 81 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num, ARRAY); }
break;
case 27:
#line 84 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 28:
#line 87 "c.y"
	{}
break;
case 29:
#line 88 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 30:
#line 91 "c.y"
	{ yyval.num = '='; }
break;
case 31:
#line 92 "c.y"
	{ yyval.num = NEQ; }
break;
case 32:
#line 93 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 33:
#line 94 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 34:
#line 95 "c.y"
	{ yyval.num = MULEQ; }
break;
case 35:
#line 96 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 36:
#line 97 "c.y"
	{ yyval.num = MODEQ; }
break;
case 37:
#line 98 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 38:
#line 99 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 39:
#line 100 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 40:
#line 101 "c.y"
	{ yyval.num = XOREQ; }
break;
case 41:
#line 102 "c.y"
	{ yyval.num = OREQ; }
break;
case 42:
#line 105 "c.y"
	{ add_parameters(yystack.l_mark[-5].decl); }
break;
case 43:
#line 107 "c.y"
	{ func(yystack.l_mark[-7].decl, yystack.l_mark[-4].decl, yystack.l_mark[-6].rtl); }
break;
case 44:
#line 110 "c.y"
	{ params = malloc(sizeof(struct symbollist));
     parameter = 1;
     yyval.rtl = empty(); }
break;
case 45:
#line 115 "c.y"
	{ increase_scope(); }
break;
case 46:
#line 118 "c.y"
	{ decrease_scope(); }
break;
case 47:
#line 121 "c.y"
	{ parameter = 0; }
break;
case 48:
#line 122 "c.y"
	{}
break;
case 49:
#line 123 "c.y"
	{}
break;
case 50:
#line 127 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 51:
#line 134 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 52:
#line 143 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 53:
#line 151 "c.y"
	{}
break;
case 54:
#line 152 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 55:
#line 155 "c.y"
	{ yyval.jump = jump(); }
break;
case 56:
#line 158 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 57:
#line 161 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 58:
#line 163 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 59:
#line 170 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 60:
#line 172 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 61:
#line 179 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 62:
#line 181 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 63:
#line 183 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 64:
#line 186 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 65:
#line 188 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 66:
#line 190 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 67:
#line 193 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 68:
#line 194 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 69:
#line 195 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 70:
#line 198 "c.y"
	{ }
break;
case 71:
#line 199 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), INCR); }
break;
case 72:
#line 200 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), DECR); }
break;
case 73:
#line 203 "c.y"
	{ yyval.rtl = arrayref(NULL, NULL); }
break;
case 74:
#line 204 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-4].str, yystack.l_mark[-1].rtl); }
break;
case 75:
#line 207 "c.y"
	{ yyval.rtl = terminal(TRUE, NULL); }
break;
case 76:
#line 208 "c.y"
	{ yyval.rtl = terminal(FALSE, NULL); }
break;
case 77:
#line 209 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl ? binst(terminal(IDENTIFIER,yystack.l_mark[-1].str), yystack.l_mark[0].rtl, '+')
                                   : terminal(IDENTIFIER, yystack.l_mark[-1].str); }
break;
case 78:
#line 211 "c.y"
	{ yyval.rtl = terminal(NUMBER, yystack.l_mark[0].str); }
break;
case 79:
#line 214 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 971 "y.tab.c"
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
