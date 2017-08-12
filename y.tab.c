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
#include "asm.h"
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
#define DEREF 280
#define GOTO 281
#define IF 282
#define MULEQ 283
#define DIVEQ 284
#define MODEQ 285
#define ADDEQ 286
#define SUBEQ 287
#define LSHIFTEQ 288
#define RSHIFTEQ 289
#define ANDEQ 290
#define XOREQ 291
#define OREQ 292
#define LSHIFT 293
#define RSHIFT 294
#define INCR 295
#define DECR 296
#define GTEQ 297
#define LTEQ 298
#define EQ 299
#define NEQ 300
#define LAND 301
#define LOR 302
#define TRUE 303
#define FALSE 304
#define NUMBER 305
#define IDENTIFIER 306
#define NOT 307
#define INT 308
#define FLOAT 309
#define CHAR 310
#define SHORT 311
#define LONG 312
#define DOUBLE 313
#define UNSIGNED 314
#define ENUMERATOR 315
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,   36,   36,   12,   12,   12,    1,    1,    1,
    1,    1,    1,   39,   39,   20,   28,   28,   28,   28,
   28,   32,   32,   32,   32,   32,   32,   32,   32,   32,
   32,   32,   32,   40,   40,   40,   24,   25,   41,   41,
   42,   42,   43,   44,   44,   29,   30,   21,   21,   21,
   22,   27,   27,   27,   26,   26,   31,   33,   33,   33,
   33,   33,   33,   33,   33,   33,   33,   33,   33,   17,
   17,   18,   45,   46,   37,   38,   23,   23,   23,    9,
   14,   15,   16,   16,   35,   13,   13,    6,    3,    3,
    4,    4,    8,    8,    8,    7,    7,    7,   11,   11,
   11,   11,   34,   34,   34,   34,   34,   34,   19,   19,
   19,   10,   10,   10,   10,   10,   10,   10,    5,    5,
    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    0,    2,    1,    2,    0,    5,    2,    2,    2,    2,
    2,    2,    2,    2,    0,    2,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    6,    4,    2,    0,    0,    1,    1,
    2,    3,    2,    1,    3,    1,    1,    0,    1,    3,
    3,    0,    2,    2,    0,    4,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    8,
   11,    0,    0,    0,    0,    0,    0,    4,    2,    6,
    8,   14,    0,    1,    0,    1,    3,    1,    1,    4,
    1,    4,    1,    3,    3,    1,    3,    3,    1,    2,
    2,    2,    1,    1,    1,    1,    1,    1,    0,    1,
    3,    1,    4,    4,    2,    2,    3,    3,    1,    1,
    1,    1,    0,
};
static const YYINT yydefred[] = {                         0,
   29,   39,   47,   40,   22,   25,   27,   23,   24,   26,
   28,   30,   46,    0,    3,    0,   32,   33,    0,    0,
   31,    0,    4,    0,    0,    0,   16,    0,    0,    2,
    0,    0,   75,   53,   54,    0,    0,    0,    0,    0,
   50,    0,   51,    0,   35,    0,    0,   57,    0,    0,
    0,    0,   73,    0,    0,    0,   43,   34,    0,    0,
    0,   56,    0,   42,   70,    0,   78,   45,    0,    0,
    0,    0,    0,    0,    0,  119,  120,  122,  121,   75,
  103,  105,  106,  104,  107,  108,    0,    0,    0,  112,
   86,    0,    0,  123,    0,   96,    0,    0,  123,  123,
    0,    0,    0,   84,   14,  123,    0,    0,    0,    0,
    0,    7,  123,  123,    0,    0,    0,    0,   11,    0,
   62,   63,   64,   60,   61,   65,   66,   67,   68,   69,
  115,  116,   59,    0,   58,    0,    0,    0,   71,   10,
   12,   13,    9,    0,    8,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  118,    0,    0,    0,
  117,   87,    0,  123,  123,   76,    0,    0,  113,    0,
  114,  123,    0,    0,    6,  111,    0,    0,   80,   85,
  123,   81,    0,   85,    0,  123,    0,   85,   82,
};
static const YYINT yydgoto[] = {                         14,
   87,  119,   88,   89,   90,   91,   92,   93,   94,   95,
   96,   97,   98,   99,  100,  105,   15,   24,  160,  101,
   27,   28,   46,   38,   32,   43,   29,    0,   17,   18,
   49,   19,  138,  102,  182,   20,   40,  175,  103,   21,
   22,   51,   52,   57,   60,   66,
};
static const YYINT yysindex[] = {                        46,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -36,    0,    0,   -2,   46,
    0, -277,    0,   19,   -2,   -2,    0,   -5, -248,    0,
    0,  -52,    0,    0,    0,   -2,  -25,  -29,  -24,   46,
    0, -219,    0,   46,    0,   48,   -2,    0,   24,   -2,
  -17,   61,    0,   78,  -25,   83,    0,    0,   46,   71,
   46,    0,   -2,    0,    0,    9,    0,    0,  -33,   -1,
   99,  101,  103, -106, -106,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -33, -152, -148,    0,
    0,   15,   52,    0,  161,    0,   44,  106,    0,    0,
  111, -106,  118,    0,    0,    0,   -1,   -1,  -37,  -37,
  -33,    0,    0,    0, -106, -106,   -1,   -1,    0, -126,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   -1,    0,   -1, -123,   -1,    0,    0,
    0,    0,    0,  -37,    0,   -1,  125,  144,  -37,   63,
   -1,   -1,  -37,  -37,   15,   15,    0,   94,  147,  152,
    0,    0,  154,    0,    0,    0, -148,   52,    0,   -1,
    0,    0,   -1,   18,    0,    0,   18,  143,    0,    0,
    0,    0,   -1,    0,  162,    0,   18,    0,    0,
};
static const YYINT yyrindex[] = {                       204,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  165,    0,    0,  -39,  204,
    0,   85,    0,    0,  -97,  -97,    0,  -34,    0,    0,
  -21,    0,    0,    0,    0,  -39,   29,    0,    0,  169,
    0,    0,    0,    0,    0,    0,  -97,    0,    0,  -97,
    0,    0,    0,  170,   29,  153,    0,    0,   88,   91,
  169,    0,  -97,    0,    0,    0,    0,    0,  -57,  156,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -57,  -26,  -28,    0,
    0,  113,  135,    0,  104,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  156,    0,    5,   33,
  -57,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  176,    0,    0,    0,    0,
    0,    0,    0,   40,    0,    0,    0,    0,   62,    0,
    0,    0,   69,   93,  123,  130,    0,    0,  177,    0,
    0,    0,    0,    0,    0,    0,  -14,  137,    0,  176,
    0,    0,  156,  160,    0,    0,  160,    0,    0,    0,
    0,    0,  179,    0,    0,    0,  160,    0,    0,
};
static const YYINT yygindex[] = {                       201,
 -163,  237,    0,   74,    0,  -74, -110,   77,    0,  265,
    0,  -83,   54,    0,    0,  -54,    0,    0,   56,   35,
  195,   68,  173,    0,    0,  180,  134,    0,    0,    0,
    0,  -18,    0,    0,  -88,    0,  164,    0,    0,    0,
    0,  182,    0,  184,    0,    0,
};
#define YYTABLESIZE 461
static const YYINT yytable[] = {                         86,
   48,   15,  136,  112,   81,   49,  155,  156,  137,   82,
  179,   83,   89,  180,   88,   89,   36,   88,   36,   48,
   36,   47,   23,  188,   49,   50,   90,  150,   31,   90,
   89,   86,   88,  148,   16,   26,   81,   36,   36,   25,
   50,   82,   47,   83,   90,  101,  101,  101,  101,  101,
   86,  101,  147,  134,   16,   81,  115,   37,   33,  158,
   82,  116,   83,  101,   89,   42,   88,    5,   55,   55,
   39,  163,   55,  102,  102,  102,  102,  102,   90,  102,
  100,  100,  100,  100,  100,   48,  100,   55,   53,   80,
   84,  102,   85,   44,  117,  185,  118,  101,  100,  189,
   45,   37,   99,   99,   99,   99,   99,   58,   99,   97,
   97,   97,   97,   97,   54,   97,   55,   56,  178,   59,
   99,   61,   84,  104,   85,  102,   63,   97,  184,   65,
   56,   69,  100,   98,   98,   98,   98,   98,  106,   98,
  107,   84,  108,   85,   99,   99,   99,   99,   99,  113,
   99,   98,  114,   93,   99,   93,   93,   93,   34,   35,
  104,   97,   99,   94,  140,   94,   94,   94,  139,  143,
   95,   93,   95,   95,   95,   91,  145,   92,   91,  157,
   92,   94,  161,  164,  165,   98,  169,  166,   95,  159,
  170,  162,  171,   91,  172,   92,   76,   77,   78,   79,
  136,  181,  186,    1,   72,   93,  137,   38,   52,   77,
   79,   44,   41,   74,   83,   94,  109,  110,   15,   83,
   30,  135,   95,  159,  167,  176,  104,   91,  168,   92,
   41,   70,    1,   67,   62,    2,  104,    3,    4,    5,
   64,   71,  120,  111,    0,   72,   68,    0,   73,    0,
    0,  134,    0,    0,    0,    0,    0,  131,  132,    0,
    0,   74,   75,    0,    0,    0,   52,    0,    0,   76,
   77,   78,   79,   89,    6,    7,    8,    9,   10,   11,
   12,   13,   70,    1,   36,    0,    2,   90,    3,    4,
    5,    0,   71,   74,   75,    0,   72,    0,    0,   73,
    0,   76,   77,   78,   79,  101,  101,    0,    0,    0,
    0,    1,   74,   75,    2,    0,    3,    4,    5,    0,
   76,   77,   78,   79,    0,    6,    7,    8,    9,   10,
   11,   12,   13,  102,  102,  141,  142,    0,  109,  110,
  100,  100,  146,    0,    0,    0,    0,    0,    0,  151,
  152,    0,    0,    6,    7,    8,    9,   10,   11,   12,
   13,    0,   99,   99,    0,    0,  144,    0,    0,   97,
   97,    0,  149,    0,    0,    0,    0,    0,    0,  153,
  154,  149,  149,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   98,   98,    0,    0,    0,  149,    0,
  173,  174,    0,    0,   99,   99,    0,    0,  177,    0,
  149,    0,    0,   93,   93,  149,  149,  183,    0,    0,
    0,    0,  187,   94,   94,    0,    0,    0,    0,    0,
   95,   95,    0,    0,    0,   91,   91,   92,   92,    0,
  120,    0,    0,  121,  122,  123,  124,  125,  126,  127,
  128,  129,  130,    0,    0,  131,  132,    0,    0,    0,
  133,
};
static const YYINT yycheck[] = {                         33,
   40,   59,   40,   87,   38,   40,  117,  118,   46,   43,
  174,   45,   41,  177,   41,   44,   38,   44,   40,   59,
   42,   40,   59,  187,   59,   44,   41,  111,  306,   44,
   59,   33,   59,  108,    0,   38,   38,   59,   44,   42,
   59,   43,   61,   45,   59,   41,   42,   43,   44,   45,
   33,   47,  107,   91,   20,   38,   42,  306,   40,  134,
   43,   47,   45,   59,   93,   91,   93,  125,   40,   41,
  123,  146,   44,   41,   42,   43,   44,   45,   93,   47,
   41,   42,   43,   44,   45,  305,   47,   59,   41,  123,
  124,   59,  126,  123,   43,  184,   45,   93,   59,  188,
  125,  123,   41,   42,   43,   44,   45,  125,   47,   41,
   42,   43,   44,   45,   47,   47,   93,   50,  173,   59,
   59,   44,  124,   70,  126,   93,   44,   59,  183,   59,
   63,  123,   93,   41,   42,   43,   44,   45,   40,   47,
   40,  124,   40,  126,   41,   42,   43,   44,   45,  302,
   47,   59,  301,   41,   93,   43,   44,   45,   25,   26,
  107,   93,   59,   41,   59,   43,   44,   45,  125,   59,
   41,   59,   43,   44,   45,   41,   59,   41,   44,  306,
   44,   59,  306,   59,   41,   93,   93,  125,   59,  136,
   44,  138,   41,   59,   41,   59,  303,  304,  305,  306,
   40,   59,   41,    0,   40,   93,   46,  123,  306,   41,
   41,   59,  125,  123,   59,   93,   41,   41,   59,   41,
   20,   61,   93,  170,  151,  170,  173,   93,  152,   93,
   36,  265,  266,   61,   55,  269,  183,  271,  272,  273,
   59,  275,  280,   80,   -1,  279,   63,   -1,  282,   -1,
   -1,   91,   -1,   -1,   -1,   -1,   -1,  295,  296,   -1,
   -1,  295,  296,   -1,   -1,   -1,  306,   -1,   -1,  303,
  304,  305,  306,  302,  308,  309,  310,  311,  312,  313,
  314,  315,  265,  266,  306,   -1,  269,  302,  271,  272,
  273,   -1,  275,  295,  296,   -1,  279,   -1,   -1,  282,
   -1,  303,  304,  305,  306,  301,  302,   -1,   -1,   -1,
   -1,  266,  295,  296,  269,   -1,  271,  272,  273,   -1,
  303,  304,  305,  306,   -1,  308,  309,  310,  311,  312,
  313,  314,  315,  301,  302,   99,  100,   -1,   74,   75,
  301,  302,  106,   -1,   -1,   -1,   -1,   -1,   -1,  113,
  114,   -1,   -1,  308,  309,  310,  311,  312,  313,  314,
  315,   -1,  301,  302,   -1,   -1,  102,   -1,   -1,  301,
  302,   -1,  108,   -1,   -1,   -1,   -1,   -1,   -1,  115,
  116,  117,  118,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  301,  302,   -1,   -1,   -1,  134,   -1,
  164,  165,   -1,   -1,  301,  302,   -1,   -1,  172,   -1,
  146,   -1,   -1,  301,  302,  151,  152,  181,   -1,   -1,
   -1,   -1,  186,  301,  302,   -1,   -1,   -1,   -1,   -1,
  301,  302,   -1,   -1,   -1,  301,  302,  301,  302,   -1,
  280,   -1,   -1,  283,  284,  285,  286,  287,  288,  289,
  290,  291,  292,   -1,   -1,  295,  296,   -1,   -1,   -1,
  300,
};
#define YYFINAL 14
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYUNDFTOKEN 364
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,"'&'",0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,
0,0,0,0,0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'","'|'","'}'","'~'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"AUTO","BREAK","CASE","CONST",
"CONTINUE","DEFAULT","DO","REGISTER","RETURN","SIGNED","SIZEOF","STATIC",
"STRUCT","SWITCH","TYPEDEF","UNION","VOID","VOLATILE","WHILE","ELSE","ENUM",
"EXTERN","FOR","DEREF","GOTO","IF","MULEQ","DIVEQ","MODEQ","ADDEQ","SUBEQ",
"LSHIFTEQ","RSHIFTEQ","ANDEQ","XOREQ","OREQ","LSHIFT","RSHIFT","INCR","DECR",
"GTEQ","LTEQ","EQ","NEQ","LAND","LOR","TRUE","FALSE","NUMBER","IDENTIFIER",
"NOT","INT","FLOAT","CHAR","SHORT","LONG","DOUBLE","UNSIGNED","ENUMERATOR",0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"illegal-symbol",
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
"statement : if_statement lbl",
"statement : while_statement lbl",
"statement : for_statement lbl",
"return : RETURN opt_expression",
"return :",
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
"compoundtype : struct_or_union B '{' '}'",
"compoundtype : struct_or_union IDENTIFIER",
"A :",
"B :",
"struct_or_union : STRUCT",
"struct_or_union : UNION",
"struct_declarations : struct_declaration ';'",
"struct_declarations : struct_declaration ';' struct_declarations",
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
"assignment : expression",
"assignment : postfix_expression assign_oper assignment",
"expression : logical_or",
"logical_or : logical_and",
"logical_or : logical_or LOR lbl logical_and",
"logical_and : additive_expression",
"logical_and : logical_and LAND lbl additive_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression '+' multiplicative_expression",
"additive_expression : additive_expression '-' multiplicative_expression",
"multiplicative_expression : prefix_expression",
"multiplicative_expression : multiplicative_expression '*' postfix_expression",
"multiplicative_expression : multiplicative_expression '/' postfix_expression",
"prefix_expression : postfix_expression",
"prefix_expression : prefix_op postfix_expression",
"prefix_expression : INCR postfix_expression",
"prefix_expression : DECR postfix_expression",
"prefix_op : '&'",
"prefix_op : '|'",
"prefix_op : '+'",
"prefix_op : '-'",
"prefix_op : '~'",
"prefix_op : '!'",
"assignments :",
"assignments : assignment",
"assignments : assignment ',' assignments",
"postfix_expression : terminal",
"postfix_expression : postfix_expression '[' expression ']'",
"postfix_expression : postfix_expression '(' assignments ')'",
"postfix_expression : postfix_expression INCR",
"postfix_expression : postfix_expression DECR",
"postfix_expression : postfix_expression '.' IDENTIFIER",
"postfix_expression : postfix_expression DEREF IDENTIFIER",
"terminal : TRUE",
"terminal : FALSE",
"terminal : IDENTIFIER",
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
#line 280 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
#line 540 "y.tab.c"

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
#line 39 "c.y"
	{ print_asm(); }
break;
case 2:
#line 40 "c.y"
	{}
break;
case 3:
#line 43 "c.y"
	{}
break;
case 4:
#line 44 "c.y"
	{}
break;
case 5:
#line 47 "c.y"
	{}
break;
case 6:
#line 48 "c.y"
	{}
break;
case 7:
#line 49 "c.y"
	{}
break;
case 8:
#line 52 "c.y"
	{}
break;
case 9:
#line 53 "c.y"
	{}
break;
case 10:
#line 54 "c.y"
	{}
break;
case 11:
#line 55 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 12:
#line 56 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 13:
#line 57 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 14:
#line 60 "c.y"
	{ ret(yystack.l_mark[0].rtl); }
break;
case 16:
#line 63 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 17:
#line 66 "c.y"
	{}
break;
case 18:
#line 67 "c.y"
	{}
break;
case 19:
#line 68 "c.y"
	{}
break;
case 20:
#line 69 "c.y"
	{}
break;
case 21:
#line 70 "c.y"
	{}
break;
case 22:
#line 73 "c.y"
	{}
break;
case 23:
#line 74 "c.y"
	{}
break;
case 24:
#line 75 "c.y"
	{}
break;
case 25:
#line 76 "c.y"
	{ identtype = INT; }
break;
case 26:
#line 77 "c.y"
	{}
break;
case 27:
#line 78 "c.y"
	{ identtype = FLOAT;}
break;
case 28:
#line 79 "c.y"
	{}
break;
case 29:
#line 80 "c.y"
	{}
break;
case 30:
#line 81 "c.y"
	{}
break;
case 31:
#line 82 "c.y"
	{ identtype = STRUCT; }
break;
case 32:
#line 83 "c.y"
	{}
break;
case 33:
#line 84 "c.y"
	{}
break;
case 34:
#line 88 "c.y"
	{ udtentry = get_udt(yystack.l_mark[-4].str);
              yystack.l_mark[-3].decl->type->width = structsize;
              structsize = 0; }
break;
case 35:
#line 91 "c.y"
	{}
break;
case 36:
#line 92 "c.y"
	{ udtentry = get_udt(yystack.l_mark[0].str); }
break;
case 37:
#line 94 "c.y"
	{ yyval.decl = add_user_defined_type(yystack.l_mark[0].str); }
break;
case 38:
#line 95 "c.y"
	{ yyval.decl = add_user_defined_type("anon"); }
break;
case 39:
#line 98 "c.y"
	{}
break;
case 40:
#line 99 "c.y"
	{}
break;
case 41:
#line 102 "c.y"
	{}
break;
case 42:
#line 103 "c.y"
	{}
break;
case 43:
#line 106 "c.y"
	{}
break;
case 44:
#line 109 "c.y"
	{ add_member(yystack.l_mark[0].decl); }
break;
case 45:
#line 110 "c.y"
	{ add_member(yystack.l_mark[-2].decl); }
break;
case 46:
#line 113 "c.y"
	{}
break;
case 47:
#line 116 "c.y"
	{}
break;
case 48:
#line 119 "c.y"
	{}
break;
case 49:
#line 120 "c.y"
	{ add_symbol(yystack.l_mark[0].decl); yyval.decl = yystack.l_mark[0].decl; }
break;
case 50:
#line 121 "c.y"
	{ add_symbol(yystack.l_mark[-2].decl); yyval.decl = yystack.l_mark[-2].decl; }
break;
case 51:
#line 124 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-1].str, join(yystack.l_mark[0].type, yystack.l_mark[-2].type)); }
break;
case 52:
#line 127 "c.y"
	{ yyval.type = type(NULL, 1, identtype);
     if (identtype == STRUCT)
        yyval.type->width = udtentry->type->width;
   }
break;
case 53:
#line 131 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, POINTER); }
break;
case 54:
#line 132 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, ADDRESS); }
break;
case 55:
#line 135 "c.y"
	{}
break;
case 56:
#line 136 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num, ARRAY); }
break;
case 57:
#line 139 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 58:
#line 142 "c.y"
	{ yyval.num = '='; }
break;
case 59:
#line 143 "c.y"
	{ yyval.num = NEQ; }
break;
case 60:
#line 144 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 61:
#line 145 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 62:
#line 146 "c.y"
	{ yyval.num = MULEQ; }
break;
case 63:
#line 147 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 64:
#line 148 "c.y"
	{ yyval.num = MODEQ; }
break;
case 65:
#line 149 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 66:
#line 150 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 67:
#line 151 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 68:
#line 152 "c.y"
	{ yyval.num = XOREQ; }
break;
case 69:
#line 153 "c.y"
	{ yyval.num = OREQ; }
break;
case 70:
#line 156 "c.y"
	{}
break;
case 71:
#line 158 "c.y"
	{ func(yystack.l_mark[-10].decl, yystack.l_mark[-6].decl, yystack.l_mark[-9].rtl); }
break;
case 72:
#line 160 "c.y"
	{ calledfunc = yystack.l_mark[0].decl; parameter = 1; yyval.rtl = empty(); }
break;
case 73:
#line 161 "c.y"
	{ parameter = 0; }
break;
case 74:
#line 162 "c.y"
	{ currfunc = calledfunc; }
break;
case 75:
#line 163 "c.y"
	{ increase_scope(); }
break;
case 76:
#line 164 "c.y"
	{ decrease_scope(); }
break;
case 77:
#line 167 "c.y"
	{ parameter = 0; }
break;
case 78:
#line 168 "c.y"
	{ add_symbol(yystack.l_mark[-2].decl); }
break;
case 79:
#line 169 "c.y"
	{ add_symbol(yystack.l_mark[0].decl); }
break;
case 80:
#line 173 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 81:
#line 180 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 82:
#line 189 "c.y"
	{ make_jumps(yystack.l_mark[-8].rtl);
                 backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 83:
#line 197 "c.y"
	{}
break;
case 84:
#line 198 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 85:
#line 201 "c.y"
	{ yyval.jump = jump(); }
break;
case 86:
#line 204 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 87:
#line 205 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 88:
#line 208 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 89:
#line 211 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 90:
#line 213 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 91:
#line 220 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 92:
#line 222 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 93:
#line 229 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 94:
#line 231 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 95:
#line 233 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 96:
#line 236 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 97:
#line 238 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 98:
#line 240 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 99:
#line 243 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 100:
#line 244 "c.y"
	{ yyval.rtl = unary(yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 101:
#line 245 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), INCR); }
break;
case 102:
#line 246 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), DECR); }
break;
case 103:
#line 249 "c.y"
	{ yyval.num = '&'; }
break;
case 104:
#line 250 "c.y"
	{ yyval.num = '|'; }
break;
case 105:
#line 251 "c.y"
	{ yyval.num = '+'; }
break;
case 106:
#line 252 "c.y"
	{ yyval.num = '-'; }
break;
case 107:
#line 253 "c.y"
	{ yyval.num = '~'; }
break;
case 108:
#line 254 "c.y"
	{ yyval.num = '!'; }
break;
case 109:
#line 257 "c.y"
	{}
break;
case 110:
#line 258 "c.y"
	{}
break;
case 111:
#line 259 "c.y"
	{}
break;
case 112:
#line 262 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 113:
#line 263 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-3].rtl, yystack.l_mark[-1].rtl); }
break;
case 114:
#line 264 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-3].rtl, yystack.l_mark[-1].rtl); }
break;
case 115:
#line 265 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 116:
#line 266 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 117:
#line 267 "c.y"
	{ yyval.rtl = access_member(yystack.l_mark[-2].rtl, yystack.l_mark[0].str); }
break;
case 118:
#line 268 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-2].rtl, DECR); }
break;
case 119:
#line 271 "c.y"
	{ yyval.rtl = terminal(TRUE, NULL); }
break;
case 120:
#line 272 "c.y"
	{ yyval.rtl = terminal(FALSE, NULL); }
break;
case 121:
#line 273 "c.y"
	{ yyval.rtl = terminal(IDENTIFIER, yystack.l_mark[0].str); }
break;
case 122:
#line 274 "c.y"
	{ yyval.rtl = terminal(NUMBER, yystack.l_mark[0].str); }
break;
case 123:
#line 277 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 1255 "y.tab.c"
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
