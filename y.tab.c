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
   18,   25,   25,   19,   19,   20,   24,   22,   22,   23,
   13,   13,   26,   26,   26,   26,   26,   26,   26,   26,
   26,   26,   26,   26,   17,   21,   21,    9,   14,   15,
   16,   16,   27,    6,    3,    3,    4,    4,    8,    8,
    8,    7,    7,    7,   10,   10,   10,   11,   11,   11,
    5,    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    1,    0,    3,    2,    2,    2,    1,    2,    2,    2,
    2,    1,    1,    1,    3,    3,    0,    0,    4,    1,
    1,    3,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    7,    0,    1,    6,    8,   14,
    0,    1,    0,    1,    1,    4,    1,    4,    1,    3,
    3,    1,    3,    3,    1,    2,    2,    1,    2,    2,
    1,    1,    1,    0,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,   61,   62,   63,   12,   13,
    0,    0,    0,    0,    0,   58,   21,    0,    0,   64,
    0,    0,    1,    0,   64,   64,    7,    0,    0,   64,
    0,    0,   59,   60,    0,    4,   64,   64,    0,    0,
    0,    0,    8,   27,   28,   29,   25,   26,   30,   31,
   32,   33,   34,   24,   23,    0,   56,   57,    6,    9,
   10,    5,    0,   17,   11,    0,    0,   42,   52,    0,
    0,    3,    0,    0,   53,   54,    0,    0,   22,   37,
    0,    0,    0,    0,   64,   64,    0,    0,    0,    0,
   16,   15,   64,    0,    0,    0,   20,    0,    0,    0,
   38,    0,    0,   43,   64,   35,   19,   39,    0,   43,
    0,   64,    0,   43,   40,
};
static const YYINT yydgoto[] = {                         12,
   13,   43,   14,   15,   16,   17,   18,   19,   20,   69,
   22,   23,   24,   25,   26,   70,   27,   28,   65,   66,
   81,   91,   98,   82,   29,   56,  108,
};
static const YYINT yysindex[] = {                      -104,
  -10,   36,   39, -228, -228,    0,    0,    0,    0,    0,
 -104,    0, -104, -249, -214,    0,    0,  -14,   -5,    0,
   -3, -210,    0,   35,    0,    0,    0,  -16, -224,    0,
 -191, -191,    0,    0,  -23,    0,    0,    0, -191, -191,
 -191, -191,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -191,    0,    0,    0,    0,
    0,    0, -219,    0,    0,   57, -191,    0,    0,   46,
   65,    0, -191, -191,    0,    0,  -14,  -14,    0,    0,
   66,   27, -224,   72,    0,    0, -214,   -5,   -8, -188,
    0,    0,    0, -191, -212, -104,    0,   28, -212,   61,
    0,   -2,   27,    0,    0,    0,    0,    0, -191,    0,
   81,    0, -212,    0,    0,
};
static const YYINT yyrindex[] = {                       124,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    3,    0,   22,   19,  -32,    0,    0,  -38,  -27,    0,
   -6,  -41,    0,    0,    0,    0,    0,    0,    0,    0,
   73,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   84,    0,    0,    5,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -33,  -30,    0,    0,
    0,    7,    0,    0,    0,    0,  -24,  -25,    0,    0,
    0,    0,    0,   73,    0,    3,    0,    0,    0,    0,
    0,    0,    7,    0,    0,    0,    0,    0,   90,    0,
    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -40,   24,    0,   60,   93,   25,   58,   63,    0,   31,
    0,   12,   79,    0,    0,  -29,    0,   75,   56,    0,
    0,   37,    0,    0,    0,    0,  -42,
};
#define YYTABLESIZE 296
static const YYINT yytable[] = {                         55,
   55,   55,   49,   55,   49,   55,   49,   50,   45,   50,
   51,   50,   51,   47,   51,   48,   46,   55,   11,   55,
   49,    2,   35,   63,   36,   50,   45,   39,   51,   30,
   21,   47,   40,   48,   46,   52,   52,   41,   52,   42,
   52,   21,   62,   21,   14,   14,   18,   18,   60,   61,
   18,   37,   52,   67,  101,   68,   71,   55,  104,   44,
   73,   74,    1,   14,  100,   18,    2,  111,    3,   75,
   76,  115,  114,    6,    7,   31,    8,   44,   32,  110,
   64,    4,    5,   57,   58,   38,   21,    9,   10,    6,
    7,   84,    8,   59,    9,   10,   33,   34,   77,   78,
   83,   72,    4,    5,   85,   86,   89,  102,   94,   95,
    6,    7,   93,    8,   96,   97,   99,   90,   68,  105,
  103,  112,  106,    2,   36,   21,   21,    2,  109,   21,
   41,   41,   87,   68,   79,  113,   88,   80,   92,  107,
    0,    0,    0,   21,    0,    0,    2,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    1,    0,    0,    0,    2,    0,    3,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    4,
    5,    0,    0,    0,    0,    0,    0,    6,    7,    0,
    8,    0,    9,   10,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   55,   55,   55,   55,   55,   55,   55,   55,   55,   55,
    0,    0,    0,    0,    0,    0,    0,   55,   55,   55,
    0,   49,   49,    0,    0,    0,   50,   50,   45,   51,
   51,    0,   47,   47,   48,   48,   46,    0,   44,   45,
   46,   47,   48,   49,   50,   51,   52,   53,    0,    0,
    0,    0,    0,   52,   52,   54,
};
static const YYINT yycheck[] = {                         41,
   42,   43,   41,   45,   43,   47,   45,   41,   41,   43,
   41,   45,   43,   41,   45,   41,   41,   59,  123,   61,
   59,    0,   11,   40,   13,   59,   59,   42,   59,   40,
    0,   59,   47,   59,   59,   42,   43,   43,   45,   45,
   47,   11,   59,   13,   40,   41,   40,   41,   25,   26,
   44,  301,   59,   30,   95,   31,   32,   61,   99,   41,
   37,   38,  275,   59,   94,   59,  279,  110,  281,   39,
   40,  114,  113,  302,  303,   40,  305,   59,   40,  109,
  305,  294,  295,  294,  295,  300,   56,  307,  308,  302,
  303,   67,  305,   59,  307,  308,    4,    5,   41,   42,
   44,  125,  294,  295,   59,   41,   41,   96,   85,   86,
  302,  303,   41,  305,  123,  304,   93,   91,   94,   59,
   93,   41,  125,    0,   41,   95,   96,  125,  105,   99,
   41,   59,   73,  109,   56,  112,   74,   63,   83,  103,
   -1,   -1,   -1,  113,   -1,   -1,  125,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  275,   -1,   -1,   -1,  279,   -1,  281,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  294,
  295,   -1,   -1,   -1,   -1,   -1,   -1,  302,  303,   -1,
  305,   -1,  307,  308,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  282,  283,  284,  285,  286,  287,  288,  289,  290,  291,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  299,  300,  301,
   -1,  300,  301,   -1,   -1,   -1,  300,  301,  301,  300,
  301,   -1,  300,  301,  300,  301,  301,   -1,  282,  283,
  284,  285,  286,  287,  288,  289,  290,  291,   -1,   -1,
   -1,   -1,   -1,  300,  301,  299,
};
#define YYFINAL 12
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 308
#define YYUNDFTOKEN 338
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,
"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"AUTO","BREAK","CASE","CONST","CONTINUE","DEFAULT","DO",
"REGISTER","RETURN","SIGNED","SIZEOF","STATIC","STRUCT","SWITCH","TYPEDEF",
"UNION","VOID","VOLATILE","WHILE","ELSE","ENUM","EXTERN","FOR","GOTO","IF",
"MULEQ","DIVEQ","MODEQ","ADDEQ","SUBEQ","LSHIFTEQ","RSHIFTEQ","ANDEQ","XOREQ",
"OREQ","LSHIFT","RSHIFT","INCR","DECR","GTEQ","LTEQ","EQ","NEQ","LAND","LOR",
"TRUE","FALSE","NUMBER","IDENTIFIER","NOT","INT_","FLOAT_",0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : start",
"start : statements",
"statements :",
"statements : '{' statements '}'",
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
"var : IDENTIFIER M arrays",
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
"function : declaration '(' opt_declaration ')' '{' statements '}'",
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
"terminal : TRUE",
"terminal : FALSE",
"terminal : IDENTIFIER",
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
#line 183 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse\n");
}
#line 399 "y.tab.c"

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
#line 34 "c.y"
	{ print_rtls(); }
break;
case 2:
#line 37 "c.y"
	{}
break;
case 3:
#line 38 "c.y"
	{}
break;
case 4:
#line 39 "c.y"
	{}
break;
case 5:
#line 42 "c.y"
	{}
break;
case 6:
#line 43 "c.y"
	{}
break;
case 7:
#line 44 "c.y"
	{ }
break;
case 8:
#line 45 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 9:
#line 46 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 10:
#line 47 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 11:
#line 50 "c.y"
	{}
break;
case 12:
#line 53 "c.y"
	{ identtype = INT;   identwidth = 4; }
break;
case 13:
#line 54 "c.y"
	{ identtype = FLOAT; identwidth = 8; }
break;
case 14:
#line 57 "c.y"
	{}
break;
case 15:
#line 58 "c.y"
	{}
break;
case 16:
#line 61 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[0].type); }
break;
case 17:
#line 64 "c.y"
	{ strcpy(ident, yylval.str); }
break;
case 18:
#line 67 "c.y"
	{}
break;
case 19:
#line 68 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num); }
break;
case 20:
#line 71 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 21:
#line 74 "c.y"
	{}
break;
case 22:
#line 75 "c.y"
	{ assign(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 23:
#line 78 "c.y"
	{ yyval.num = '='; }
break;
case 24:
#line 79 "c.y"
	{ yyval.num = NEQ; }
break;
case 25:
#line 80 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 26:
#line 81 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 27:
#line 82 "c.y"
	{ yyval.num = MULEQ; }
break;
case 28:
#line 83 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 29:
#line 84 "c.y"
	{ yyval.num = MODEQ; }
break;
case 30:
#line 85 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 31:
#line 86 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 32:
#line 87 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 33:
#line 88 "c.y"
	{ yyval.num = XOREQ; }
break;
case 34:
#line 89 "c.y"
	{ yyval.num = OREQ; }
break;
case 35:
#line 92 "c.y"
	{ func(yystack.l_mark[-6].decl, yystack.l_mark[-4].decl); }
break;
case 36:
#line 95 "c.y"
	{}
break;
case 37:
#line 96 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 38:
#line 100 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 39:
#line 107 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 40:
#line 115 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 41:
#line 123 "c.y"
	{}
break;
case 42:
#line 124 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 43:
#line 127 "c.y"
	{ yyval.jump = jump(); }
break;
case 44:
#line 130 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 45:
#line 133 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 46:
#line 135 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 47:
#line 142 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 48:
#line 144 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 49:
#line 151 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 50:
#line 153 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 51:
#line 155 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 52:
#line 158 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 53:
#line 160 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 54:
#line 162 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 55:
#line 165 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 56:
#line 166 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 57:
#line 167 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 58:
#line 170 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 59:
#line 171 "c.y"
	{}
break;
case 60:
#line 172 "c.y"
	{}
break;
case 61:
#line 175 "c.y"
	{ yyval.rtl = terminal(); }
break;
case 62:
#line 176 "c.y"
	{ yyval.rtl = terminal(); }
break;
case 63:
#line 177 "c.y"
	{ yyval.rtl = terminal(); }
break;
case 64:
#line 180 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 877 "y.tab.c"
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
