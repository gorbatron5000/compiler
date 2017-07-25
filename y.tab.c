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
#include "symboltable.h"
#include "rtls.h"
#line 7 "c.y"
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
#line 41 "y.tab.c"

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
#define INT 307
#define FLOAT 308
#define CHAR 309
#define SHORT 310
#define LONG 311
#define DOUBLE 312
#define UNSIGNED 313
#define ENUMERATOR 314
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,   33,   33,   12,   12,   12,    1,    1,    1,
    1,    1,    1,    1,   36,   36,   38,   38,   38,   37,
   20,   26,   26,   26,   26,   26,   30,   30,   30,   30,
   30,   30,   30,   30,   30,   30,   30,   30,   39,   39,
   39,   41,   40,   40,   42,   42,   42,   43,   44,   44,
   27,   28,   21,   21,   21,   22,   25,   25,   25,   24,
   24,   29,   13,   13,   31,   31,   31,   31,   31,   31,
   31,   31,   31,   31,   31,   31,   17,   17,   18,   45,
   46,   34,   35,   23,   23,   23,    9,   14,   15,   16,
   16,   32,    6,    3,    3,    4,    4,    8,    8,    8,
    7,    7,    7,   10,   10,   10,   11,   11,   11,   19,
   19,    5,    5,    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    0,    2,    1,    2,    0,    5,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    0,    0,    1,    3,    4,
    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    6,    3,
    3,    0,    1,    1,    0,    2,    2,    2,    1,    3,
    1,    1,    0,    1,    3,    3,    0,    2,    2,    0,
    4,    1,    1,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    8,   11,    0,    0,
    0,    0,    0,    0,    4,    2,    6,    8,   14,    0,
    1,    0,    1,    1,    4,    1,    4,    1,    3,    3,
    1,    3,    3,    1,    2,    2,    1,    2,    2,    0,
    4,    1,    1,    2,    1,    0,
};
static const YYINT yydefred[] = {                         0,
   34,   43,   52,   44,   27,   30,   32,   28,   29,   31,
   33,   35,   51,    0,    3,    0,   37,   38,    0,    0,
   36,    0,    4,    0,    0,    0,   21,    0,    0,    2,
   42,    0,   82,   58,   59,    0,    0,    0,   40,    0,
   55,    0,   56,    0,    0,    0,   62,    0,    0,    0,
    0,   80,    0,    0,    0,   48,   39,   46,   47,    0,
    0,   61,    0,   77,    0,   85,   50,    0,    0,    0,
    0,    0,    0,    0,  112,  113,  115,    0,   82,    0,
    0,    0,  107,   63,    0,    0,  116,    0,    0,    0,
    0,  116,  116,    0,    0,    0,  110,   91,   15,  116,
    0,    0,  108,  109,    0,    0,    0,    7,  116,  116,
    0,    0,    0,    0,   12,   69,   70,   71,   67,   68,
   72,   73,   74,   75,   76,   66,   65,    0,  105,  106,
   78,   10,   13,   14,    9,    8,   11,    0,    0,    0,
  101,   18,    0,    0,    0,    0,    0,  102,  103,    0,
    0,   64,    0,  116,  116,    0,   20,    0,   83,    0,
    0,  116,    0,    0,   19,  111,    6,    0,    0,   87,
   92,  116,   88,    0,   92,    0,  116,    0,   92,   89,
};
static const YYINT yydgoto[] = {                         14,
   80,  115,   81,   82,   83,   84,   85,   86,   87,   88,
   89,   90,   91,   92,   93,   99,   15,   24,  106,   94,
   27,   28,   45,   43,   29,    0,   17,   18,   48,   19,
  128,  173,   20,   40,  167,   95,   96,  143,   21,   22,
   38,   50,   51,   56,   60,   65,
};
static const YYINT yysindex[] = {                      -101,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -50,    0,    0,    6, -101,
    0, -107,    0,    7,    6,    6,    0,  -17, -216,    0,
    0,  -19,    0,    0,    0,    6,    5,  -10,    0, -101,
    0, -205,    0, -101,   69,    6,    0,   24,    6,    4,
  -52,    0,  101,    5,  103,    0,    0,    0,    0,   76,
 -101,    0,    6,    0,   30,    0,    0, -117, -161,  111,
  117,  119, -102, -102,    0,    0,    0,  120,    0, -117,
 -140, -137,    0,    0,  -21,   60,    0,  -48, -262,   41,
  108,    0,    0,  110,  115,  116,    0,    0,    0,    0,
 -161, -161,    0,    0,    6,   85, -117,    0,    0,    0,
 -161, -161, -161, -161,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -161,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -161,  121,  138,
    0,    0,  -26, -161,   58, -161, -161,    0,    0,  -21,
  -21,    0,  164,    0,    0,    6,    0,  122,    0, -137,
   60,    0, -161,  112,    0,    0,    0,  112,  159,    0,
    0,    0,    0, -161,    0,  181,    0,  112,    0,    0,
};
static const YYINT yyrindex[] = {                       223,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  184,    0,    0,  -29,  223,
    0,    0,    0,    0,  -80,  -80,    0,  -16,    0,    0,
    0,    0,    0,    0,    0,  -29,  -40,  -30,    0,  186,
    0,    0,    0,  105,    0,  -80,    0,    0,  -80,    0,
  105,    0,  187,  -40,   91,    0,    0,    0,    0,  123,
  186,    0,  -80,    0,    0,    0,    0,  -42,  185,    0,
    0,    0,    0,    0,    0,    0,    0,   55,    0,  -42,
   -7,   33,    0,    0,   19,  -13,    0,    8,   16,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  185,    0,    0,    0,  -39,   -5,  -42,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   25,
   28,    0,    0,    0,    0,  -80,    0,    0,    0,   35,
   31,    0,  185,  188,    0,    0,    0,  188,    0,    0,
    0,    0,    0,  204,    0,    0,    0,  188,    0,    0,
};
static const YYINT yygindex[] = {                       228,
 -133,   27,    0,  104,   49,  -37,   17,  102,    0,  316,
    0,  -66,   10,    0,    0,  -81,    0,    0,    0,    3,
  216,  -24,  192,  200,  114,    0,    0,    0,    0,   64,
    0,  -84,    0,  212,    0,    0,    0,    0,    0,    0,
    0,  213,    0,  202,    0,    0,
};
#define YYTABLESIZE 463
static const YYINT yytable[] = {                         60,
   60,   17,   16,   60,   17,   79,   58,   41,   23,   41,
   53,   41,  127,  108,  157,   32,   16,  156,   60,  139,
  111,   53,   16,   54,   55,  112,   36,   96,   41,   53,
  170,  129,  130,   93,  171,  114,  114,  114,   55,  114,
  145,  114,   54,   26,  179,   96,   33,   25,  101,  101,
  101,   93,  101,  114,  101,  114,  104,  104,  104,   98,
  104,   98,  104,   98,  140,   99,  101,   99,  100,   99,
  100,   97,  100,   94,  104,   95,  104,   98,   98,   96,
  142,  169,    5,   99,   60,   93,  100,  114,   37,   97,
  176,   94,  175,   95,  180,   42,  110,  110,   47,  110,
  153,  110,  113,   46,  114,   39,  158,   49,  104,   52,
   98,   98,   44,  110,   49,  110,   54,   99,  133,  134,
  100,  103,  104,   97,   46,   94,  138,   95,   57,  150,
  151,  165,   73,   74,   64,  146,  147,  152,   34,   35,
   75,   76,   77,   97,   61,  110,   63,   69,    1,   49,
  100,    2,   68,    3,    4,    5,  101,   70,  102,  105,
  109,   71,  110,   72,    1,  131,  132,    2,  135,    3,
    4,    5,   98,  136,  137,  144,   73,   74,  155,  154,
  163,  164,  159,   98,   75,   76,   77,   78,  168,    6,
    7,    8,    9,   10,   11,   12,   13,   31,  174,   75,
   76,   77,   97,  178,  162,    6,    7,    8,    9,   10,
   11,   12,   13,    1,  166,   49,    2,  172,    3,    4,
    5,  177,    1,   79,   57,   60,   84,   86,   60,   45,
   60,   60,   60,  116,  117,  118,  119,  120,  121,  122,
  123,  124,  125,   90,   90,   81,   16,   30,  161,  160,
  126,   41,   66,   62,    6,    7,    8,    9,   10,   11,
   12,   13,    0,   59,   67,   57,   60,   60,   60,   60,
   60,   60,   60,   60,   41,   57,  114,  114,  114,  114,
  114,  114,  114,  114,  114,  114,   96,   96,  114,  114,
  107,    0,    0,  114,  114,  114,    0,  104,  104,  104,
  104,  104,  104,  104,  104,  104,  104,  101,  101,    0,
    0,    0,    0,    0,  104,  104,  104,    0,   98,   98,
    0,    0,    0,    0,   99,   99,    0,  100,  100,    0,
   97,   97,    0,   94,    0,   95,  110,  110,  110,  110,
  110,  110,  110,  110,  110,  110,    0,    0,  110,  110,
    0,    0,    0,  110,  110,  110,   49,    0,    0,   49,
    0,   49,   49,   49,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   69,    1,    0,    0,
    2,    0,    3,    4,    5,    0,   70,    0,    0,    0,
   71,    0,   72,    0,    0,    0,    0,   49,   49,   49,
   49,   49,   49,   49,   49,   73,   74,    0,    0,    0,
    0,    0,    0,   75,   76,   77,   78,  141,    6,    7,
    8,    9,   10,   11,   12,   13,  148,  149,  141,  141,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  141,    0,    0,    0,    0,    0,  141,
    0,  141,  141,
};
static const YYINT yycheck[] = {                         40,
   41,   41,    0,   44,   44,  123,   59,   38,   59,   40,
   40,   42,   61,   80,   41,  123,   59,   44,   59,  101,
   42,   46,   20,   40,   49,   47,   44,   41,   59,   59,
  164,  294,  295,   41,  168,   41,   42,   43,   63,   45,
  107,   47,   59,   38,  178,   59,   40,   42,   41,   42,
   43,   59,   45,   59,   47,   61,   41,   42,   43,   41,
   45,   43,   47,   45,  102,   41,   59,   43,   41,   45,
   43,   41,   45,   41,   59,   41,   61,   59,   69,   93,
  105,  163,  125,   59,  125,   93,   59,   93,  305,   59,
  175,   59,  174,   59,  179,   91,   42,   43,  304,   45,
  138,   47,   43,   40,   45,  125,  144,   44,   93,   41,
  101,   93,  123,   59,   51,   61,   93,   93,   92,   93,
   93,   73,   74,   93,   61,   93,  100,   93,  125,  113,
  114,  156,  294,  295,   59,  109,  110,  128,   25,   26,
  302,  303,  304,  305,   44,   91,   44,  265,  266,   59,
   40,  269,  123,  271,  272,  273,   40,  275,   40,   40,
  301,  279,  300,  281,  266,  125,   59,  269,   59,  271,
  272,  273,  163,   59,   59,   91,  294,  295,   41,   59,
  154,  155,  125,  174,  302,  303,  304,  305,  162,  307,
  308,  309,  310,  311,  312,  313,  314,  305,  172,  302,
  303,  304,  305,  177,   41,  307,  308,  309,  310,  311,
  312,  313,  314,  266,   93,  125,  269,   59,  271,  272,
  273,   41,    0,   40,  305,  266,   41,   41,  269,  125,
  271,  272,  273,  282,  283,  284,  285,  286,  287,  288,
  289,  290,  291,   59,   41,  123,   59,   20,  147,  146,
  299,   36,   61,   54,  307,  308,  309,  310,  311,  312,
  313,  314,   -1,   51,   63,  305,  307,  308,  309,  310,
  311,  312,  313,  314,  305,  305,  282,  283,  284,  285,
  286,  287,  288,  289,  290,  291,  300,  301,  294,  295,
   79,   -1,   -1,  299,  300,  301,   -1,  282,  283,  284,
  285,  286,  287,  288,  289,  290,  291,  300,  301,   -1,
   -1,   -1,   -1,   -1,  299,  300,  301,   -1,  300,  301,
   -1,   -1,   -1,   -1,  300,  301,   -1,  300,  301,   -1,
  300,  301,   -1,  301,   -1,  301,  282,  283,  284,  285,
  286,  287,  288,  289,  290,  291,   -1,   -1,  294,  295,
   -1,   -1,   -1,  299,  300,  301,  266,   -1,   -1,  269,
   -1,  271,  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  265,  266,   -1,   -1,
  269,   -1,  271,  272,  273,   -1,  275,   -1,   -1,   -1,
  279,   -1,  281,   -1,   -1,   -1,   -1,  307,  308,  309,
  310,  311,  312,  313,  314,  294,  295,   -1,   -1,   -1,
   -1,   -1,   -1,  302,  303,  304,  305,  102,  307,  308,
  309,  310,  311,  312,  313,  314,  111,  112,  113,  114,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  138,   -1,   -1,   -1,   -1,   -1,  144,
   -1,  146,  147,
};
#define YYFINAL 14
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 314
#define YYUNDFTOKEN 363
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
"TRUE","FALSE","NUMBER","IDENTIFIER","NOT","INT","FLOAT","CHAR","SHORT","LONG",
"DOUBLE","UNSIGNED","ENUMERATOR",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : start",
"start :",
"start : global_declaration start",
"global_declaration : function",
"global_declaration : declaration ';'",
"statements :",
"statements : '{' P statements '}' Q",
"statements : statement statements",
"statement : return ';'",
"statement : declaration ';'",
"statement : assignment ';'",
"statement : call ';'",
"statement : if_statement lbl",
"statement : while_statement lbl",
"statement : for_statement lbl",
"return : RETURN opt_expression",
"return :",
"call_list :",
"call_list : var",
"call_list : call_list ',' var",
"call : IDENTIFIER '(' call_list ')'",
"declaration : type_specifier vars",
"storage_specifier : AUTO",
"storage_specifier : REGISTER",
"storage_specifier : STATIC",
"storage_specifier : EXTERN",
"storage_specifier : TYPEDEF",
"type_specifier : VOID",
"type_specifier : CHAR",
"type_specifier : SHORT",
"type_specifier : INT",
"type_specifier : LONG",
"type_specifier : FLOAT",
"type_specifier : DOUBLE",
"type_specifier : SIGNED",
"type_specifier : UNSIGNED",
"type_specifier : compoundtype",
"type_specifier : enumerator",
"type_specifier : typedefname",
"compoundtype : struct_or_union IDENTIFIER A '{' struct_declarations '}'",
"compoundtype : struct_or_union '{' '}'",
"compoundtype : struct_or_union IDENTIFIER A",
"A :",
"struct_or_union : STRUCT",
"struct_or_union : UNION",
"struct_declarations :",
"struct_declarations : struct_declaration ';'",
"struct_declarations : struct_declaration struct_declarations",
"struct_declaration : type_specifier struct_member",
"struct_member : var",
"struct_member : var ',' struct_member",
"enumerator : ENUMERATOR",
"typedefname : TYPEDEF",
"vars :",
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
"function : declaration E '(' P param_list ')' F ';'",
"function : declaration E '(' P param_list ')' F G '{' statements '}'",
"E :",
"F :",
"G :",
"P :",
"Q :",
"param_list :",
"param_list : type_specifier var ',' param_list",
"param_list : type_specifier var",
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
#line 269 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
#line 525 "y.tab.c"

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
#line 39 "c.y"
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
	{}
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
#line 51 "c.y"
	{}
break;
case 9:
#line 52 "c.y"
	{}
break;
case 10:
#line 53 "c.y"
	{}
break;
case 11:
#line 54 "c.y"
	{}
break;
case 12:
#line 55 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 13:
#line 56 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 14:
#line 57 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 15:
#line 60 "c.y"
	{ ret(yystack.l_mark[0].rtl); }
break;
case 17:
#line 63 "c.y"
	{}
break;
case 18:
#line 64 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 19:
#line 65 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 20:
#line 68 "c.y"
	{ call(yystack.l_mark[-3].str); }
break;
case 21:
#line 71 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 22:
#line 74 "c.y"
	{}
break;
case 23:
#line 75 "c.y"
	{}
break;
case 24:
#line 76 "c.y"
	{}
break;
case 25:
#line 77 "c.y"
	{}
break;
case 26:
#line 78 "c.y"
	{}
break;
case 27:
#line 81 "c.y"
	{}
break;
case 28:
#line 82 "c.y"
	{}
break;
case 29:
#line 83 "c.y"
	{}
break;
case 30:
#line 84 "c.y"
	{ identtype = INT; }
break;
case 31:
#line 85 "c.y"
	{}
break;
case 32:
#line 86 "c.y"
	{ identtype = FLOAT;}
break;
case 33:
#line 87 "c.y"
	{}
break;
case 34:
#line 88 "c.y"
	{}
break;
case 35:
#line 89 "c.y"
	{}
break;
case 36:
#line 90 "c.y"
	{}
break;
case 37:
#line 91 "c.y"
	{}
break;
case 38:
#line 92 "c.y"
	{}
break;
case 39:
#line 95 "c.y"
	{}
break;
case 40:
#line 96 "c.y"
	{}
break;
case 41:
#line 96 "c.y"
	{}
break;
case 42:
#line 99 "c.y"
	{ add_user_defined_type(yystack.l_mark[0].str); }
break;
case 43:
#line 102 "c.y"
	{}
break;
case 44:
#line 103 "c.y"
	{}
break;
case 45:
#line 106 "c.y"
	{}
break;
case 46:
#line 107 "c.y"
	{}
break;
case 47:
#line 108 "c.y"
	{}
break;
case 48:
#line 111 "c.y"
	{}
break;
case 49:
#line 114 "c.y"
	{ add_member(yystack.l_mark[0].decl); }
break;
case 50:
#line 115 "c.y"
	{}
break;
case 51:
#line 118 "c.y"
	{}
break;
case 52:
#line 121 "c.y"
	{}
break;
case 53:
#line 124 "c.y"
	{}
break;
case 54:
#line 125 "c.y"
	{ add_symbol(yystack.l_mark[0].decl); yyval.decl = yystack.l_mark[0].decl; }
break;
case 55:
#line 126 "c.y"
	{ add_symbol(yystack.l_mark[-2].decl); yyval.decl = yystack.l_mark[-2].decl; }
break;
case 56:
#line 129 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-1].str, join(yystack.l_mark[0].type, yystack.l_mark[-2].type)); }
break;
case 57:
#line 132 "c.y"
	{ yyval.type = type(NULL, 1, identtype); }
break;
case 58:
#line 133 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, POINTER); }
break;
case 59:
#line 134 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, ADDRESS); }
break;
case 60:
#line 137 "c.y"
	{}
break;
case 61:
#line 138 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num, ARRAY); }
break;
case 62:
#line 141 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 63:
#line 144 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 64:
#line 145 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 65:
#line 148 "c.y"
	{ yyval.num = '='; }
break;
case 66:
#line 149 "c.y"
	{ yyval.num = NEQ; }
break;
case 67:
#line 150 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 68:
#line 151 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 69:
#line 152 "c.y"
	{ yyval.num = MULEQ; }
break;
case 70:
#line 153 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 71:
#line 154 "c.y"
	{ yyval.num = MODEQ; }
break;
case 72:
#line 155 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 73:
#line 156 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 74:
#line 157 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 75:
#line 158 "c.y"
	{ yyval.num = XOREQ; }
break;
case 76:
#line 159 "c.y"
	{ yyval.num = OREQ; }
break;
case 77:
#line 162 "c.y"
	{}
break;
case 78:
#line 164 "c.y"
	{ func(yystack.l_mark[-10].decl, yystack.l_mark[-6].decl, yystack.l_mark[-9].rtl); }
break;
case 79:
#line 166 "c.y"
	{ calledfunc = yystack.l_mark[0].decl; parameter = 1; yyval.rtl = empty(); }
break;
case 80:
#line 167 "c.y"
	{ parameter = 0; }
break;
case 81:
#line 168 "c.y"
	{ currfunc = calledfunc; }
break;
case 82:
#line 169 "c.y"
	{ increase_scope(); }
break;
case 83:
#line 170 "c.y"
	{ decrease_scope(); }
break;
case 84:
#line 173 "c.y"
	{ parameter = 0; }
break;
case 85:
#line 174 "c.y"
	{}
break;
case 86:
#line 175 "c.y"
	{}
break;
case 87:
#line 179 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 88:
#line 186 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 89:
#line 195 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 90:
#line 203 "c.y"
	{}
break;
case 91:
#line 204 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 92:
#line 207 "c.y"
	{ yyval.jump = jump(); }
break;
case 93:
#line 210 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 94:
#line 213 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 95:
#line 215 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 96:
#line 222 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 97:
#line 224 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 98:
#line 231 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 99:
#line 233 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 100:
#line 235 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 101:
#line 238 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 102:
#line 240 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 103:
#line 242 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 104:
#line 245 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 105:
#line 246 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 106:
#line 247 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 107:
#line 250 "c.y"
	{ }
break;
case 108:
#line 251 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), INCR); }
break;
case 109:
#line 252 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), DECR); }
break;
case 110:
#line 255 "c.y"
	{ yyval.rtl = arrayref(NULL, NULL); }
break;
case 111:
#line 256 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-4].str, yystack.l_mark[-1].rtl); }
break;
case 112:
#line 259 "c.y"
	{ yyval.rtl = terminal(TRUE, NULL); }
break;
case 113:
#line 260 "c.y"
	{ yyval.rtl = terminal(FALSE, NULL); }
break;
case 114:
#line 261 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl ? binst(terminal(IDENTIFIER,yystack.l_mark[-1].str), yystack.l_mark[0].rtl, '+')
                                   : terminal(IDENTIFIER, yystack.l_mark[-1].str); }
break;
case 115:
#line 263 "c.y"
	{ yyval.rtl = terminal(NUMBER, yystack.l_mark[0].str); }
break;
case 116:
#line 266 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 1208 "y.tab.c"
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
