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
    0,    0,   34,   34,   12,   12,   12,    1,    1,    1,
    1,    1,    1,    1,   37,   37,   39,   39,   39,   38,
   19,   27,   27,   27,   27,   27,   31,   31,   31,   31,
   31,   31,   31,   31,   31,   31,   31,   31,   40,   40,
   40,   23,   24,   41,   41,   42,   42,   43,   44,   44,
   28,   29,   20,   20,   20,   21,   26,   26,   26,   25,
   25,   30,   13,   13,   32,   32,   32,   32,   32,   32,
   32,   32,   32,   32,   32,   32,   17,   17,   18,   45,
   46,   35,   36,   22,   22,   22,    9,   14,   15,   16,
   16,   33,    6,    3,    3,    4,    4,    8,    8,    8,
    7,    7,    7,   11,   11,   11,   10,   10,   10,   10,
   10,   10,    5,    5,    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    0,    2,    1,    2,    0,    5,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    0,    0,    1,    3,    4,
    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    6,    4,
    2,    0,    0,    1,    1,    2,    3,    2,    1,    3,
    1,    1,    0,    1,    3,    3,    0,    2,    2,    0,
    4,    1,    1,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    8,   11,    0,    0,
    0,    0,    0,    0,    4,    2,    6,    8,   14,    0,
    1,    0,    1,    1,    4,    1,    4,    1,    3,    3,
    1,    3,    3,    1,    2,    2,    1,    4,    2,    2,
    3,    3,    1,    1,    1,    1,    0,
};
static const YYINT yydefred[] = {                         0,
   34,   44,   52,   45,   27,   30,   32,   28,   29,   31,
   33,   35,   51,    0,    3,    0,   37,   38,    0,    0,
   36,    0,    4,    0,    0,    0,   21,    0,    0,    2,
    0,    0,   82,   58,   59,    0,    0,    0,    0,    0,
   55,    0,   56,    0,   40,    0,    0,   62,    0,    0,
    0,    0,   80,    0,    0,    0,   48,   39,    0,    0,
    0,   61,    0,   47,   77,    0,   85,   50,    0,    0,
    0,    0,    0,    0,    0,  113,  114,  116,    0,   82,
    0,    0,    0,  107,   63,    0,    0,  117,    0,  101,
    0,    0,  117,  117,    0,    0,    0,  115,   91,   15,
  117,    0,    0,    0,    0,    0,    0,    7,  117,  117,
    0,    0,    0,    0,   12,    0,   69,   70,   71,   67,
   68,   72,   73,   74,   75,   76,  109,  110,   66,    0,
   65,    0,    0,   78,   10,   13,   14,    9,    8,   11,
    0,    0,    0,    0,   18,    0,    0,    0,    0,    0,
    0,    0,    0,  112,    0,  111,   64,    0,  117,  117,
    0,   20,   83,    0,    0,  108,  117,    0,    0,   19,
    6,    0,    0,   87,   92,  117,   88,    0,   92,    0,
  117,    0,   92,   89,
};
static const YYINT yydgoto[] = {                         14,
   81,  115,   82,   83,   84,   85,   86,   87,   88,   89,
   90,   91,   92,   93,   94,  100,   15,   24,   95,   27,
   28,   46,   38,   32,   43,   29,    0,   17,   18,   49,
   19,  133,  177,   20,   40,  171,   96,   97,  146,   21,
   22,   51,   52,   57,   60,   66,
};
static const YYINT yysindex[] = {                       132,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -41,    0,    0,  -35,  132,
    0, -259,    0,   21,  -35,  -35,    0,   27, -213,    0,
    0,  -26,    0,    0,    0,  -35,   38,   10,   14,  132,
    0, -158,    0,  132,    0,  107,  -35,    0,   60,  -35,
   29,  101,    0,  122,   38,  123,    0,    0,  132,  116,
  132,    0,  -35,    0,    0,   55,    0,    0, -114, -132,
  140,  143,  144, -162, -162,    0,    0,    0,  147,    0,
 -114, -109, -113,    0,    0,    2,   78,    0,   88,    0,
   79,  146,    0,    0,  148,  149,  150,    0,    0,    0,
    0, -132, -132,  -21,  -21,  -35, -114,    0,    0,    0,
 -162, -162, -132, -132,    0, -100,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -132,
    0,  -96, -132,    0,    0,    0,    0,    0,    0,    0,
 -132,  153,  172,  -21,    0,   51,   89, -132, -132,  -21,
  -21,    2,    2,    0,  125,    0,    0,  174,    0,    0,
  -35,    0,    0, -113,   78,    0,    0, -132,  120,    0,
    0,  120,  157,    0,    0,    0,    0, -132,    0,  178,
    0,  120,    0,    0,
};
static const YYINT yyrindex[] = {                       220,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  182,    0,    0,  -39,  220,
    0,  100,    0,    0,  -82,  -82,    0,   41,    0,    0,
  -38,    0,    0,    0,    0,  -39,   87,    0,    0,  184,
    0,    0,    0,    0,    0,    0,  -82,    0,    0,  -82,
    0,    0,    0,  185,   87,  168,    0,    0,  103,  106,
  184,    0,  -82,    0,    0,    0,    0,    0,  -53,  171,
    0,    0,    0,    0,    0,    0,    0,    0,   65,    0,
  -53,   39,   25,    0,    0,   24,  -14,    0,   17,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  171,    0,  -30,  -19,  -36,  -53,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -11,    0,    0,    0,    0,    0,   -4,
    9,   32,   45,    0,    0,    0,    0,    0,    0,    0,
  -82,    0,    0,   37,   -6,    0,    0,  171,  173,    0,
    0,  173,    0,    0,    0,    0,    0,  192,    0,    0,
    0,  173,    0,    0,
};
static const YYINT yygindex[] = {                       214,
  -32,   76,    0,   96,    0,  -84,   22,   97,    0,  128,
    0,  -65,   43,    0,    0,  -69,    0,    0,   94,  201,
   56,  177,    0,    0,  190,   90,    0,    0,    0,    0,
   61,    0, -169,    0,  167,    0,    0,    0,    0,    0,
    0,  189,    0,  186,    0,    0,
};
#define YYTABLESIZE 447
static const YYINT yytable[] = {                         41,
   53,   41,   26,   41,   17,   16,   25,   17,   80,  180,
  105,  105,  105,  184,  105,  108,  105,   23,  143,   53,
   41,  106,  106,  106,  132,  106,   96,  106,  105,  104,
  104,  104,  142,  104,   97,  104,  102,  102,  102,  106,
  102,  147,  102,  111,   96,  155,   31,  104,  112,  103,
  103,  103,   97,  103,  102,  103,  158,  104,  104,  104,
   33,  104,  105,  104,   98,   94,   98,  103,   98,  130,
   36,    5,   99,  106,   99,  104,   99,   95,   96,   93,
   54,  104,   98,   94,   42,  100,   97,  100,  102,  100,
   99,  162,   37,   16,  161,   95,   39,   93,  173,   54,
   47,  103,   54,  100,   50,   56,  115,  115,  179,  115,
  115,  115,   99,   16,   34,   35,   98,   94,   56,   50,
  113,   47,  114,  115,   99,  115,   60,   60,   42,   95,
   60,   93,   44,  132,  152,  153,  174,  100,   45,  175,
   76,   77,   78,   98,   99,   60,   48,   53,  131,  183,
   70,    1,   55,   58,    2,  115,    3,    4,    5,   59,
   71,  145,   74,   75,   72,   61,   63,   73,  136,  137,
   76,   77,   78,   98,   65,  157,  141,   69,  130,  101,
   74,   75,  102,  103,  148,  149,  106,  110,   76,   77,
   78,   79,  109,    6,    7,    8,    9,   10,   11,   12,
   13,  104,  105,  134,  135,  154,  138,  139,  140,  156,
   99,  159,  160,  163,  167,  176,  170,  166,  181,    1,
   99,   79,   43,   57,   84,   86,   49,   46,   81,   90,
  144,   16,   90,   30,  168,  169,   41,   67,  150,  151,
  144,  144,  172,  164,   62,  165,  107,   64,   68,    0,
    0,  178,    0,    0,    0,    0,  182,  144,  116,    0,
    0,    0,    0,    0,    0,    0,   57,   41,  144,   57,
  105,  105,    0,  127,  128,  144,  144,    0,    0,    0,
    0,  106,  106,    0,    0,    0,   96,   96,    0,  104,
  104,    0,    0,    0,   97,   97,  102,  102,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  103,
  103,    0,    0,    0,    0,    0,    0,  104,  104,    0,
    0,    0,    0,    0,   98,   98,   94,    0,    0,    0,
    0,    0,   99,   99,    0,    0,    0,    0,   95,    0,
    0,    0,    0,    0,  115,  100,  100,  115,  115,  115,
  115,  115,  115,  115,  115,  115,  115,    0,    0,  115,
  115,    0,    0,    0,  115,  115,  115,  116,    0,    0,
  117,  118,  119,  120,  121,  122,  123,  124,  125,  126,
    0,    0,  127,  128,   70,    1,    0,  129,    2,    0,
    3,    4,    5,    0,   71,    0,    0,    1,   72,    0,
    2,   73,    3,    4,    5,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   74,   75,    0,    0,    0,    0,
    0,    0,   76,   77,   78,   79,    0,    6,    7,    8,
    9,   10,   11,   12,   13,    0,    0,    0,    0,    6,
    7,    8,    9,   10,   11,   12,   13,
};
static const YYINT yycheck[] = {                         38,
   40,   40,   38,   42,   41,   59,   42,   44,  123,  179,
   41,   42,   43,  183,   45,   81,   47,   59,  103,   59,
   59,   41,   42,   43,   46,   45,   41,   47,   59,   41,
   42,   43,  102,   45,   41,   47,   41,   42,   43,   59,
   45,  107,   47,   42,   59,  130,  306,   59,   47,   41,
   42,   43,   59,   45,   59,   47,  141,   41,   42,   43,
   40,   45,   93,   47,   41,   41,   43,   59,   45,   91,
   44,  125,   41,   93,   43,   59,   45,   41,   93,   41,
   40,   93,   59,   59,  123,   41,   93,   43,   93,   45,
   59,   41,  306,    0,   44,   59,  123,   59,  168,   59,
   40,   93,   47,   59,   44,   50,   42,   43,  178,   45,
   46,   47,   70,   20,   25,   26,   93,   93,   63,   59,
   43,   61,   45,   59,   93,   61,   40,   41,   91,   93,
   44,   93,  123,   46,  113,  114,  169,   93,  125,  172,
  303,  304,  305,  306,  102,   59,  305,   41,   61,  182,
  265,  266,   93,  125,  269,   91,  271,  272,  273,   59,
  275,  106,  295,  296,  279,   44,   44,  282,   93,   94,
  303,  304,  305,  306,   59,  133,  101,  123,   91,   40,
  295,  296,   40,   40,  109,  110,   40,  301,  303,  304,
  305,  306,  302,  308,  309,  310,  311,  312,  313,  314,
  315,   74,   75,  125,   59,  306,   59,   59,   59,  306,
  168,   59,   41,  125,   41,   59,  161,   93,   41,    0,
  178,   40,  123,  306,   41,   41,   59,  125,  123,   59,
  103,   59,   41,   20,  159,  160,   36,   61,  111,  112,
  113,  114,  167,  148,   55,  149,   80,   59,   63,   -1,
   -1,  176,   -1,   -1,   -1,   -1,  181,  130,  280,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  306,  306,  141,  306,
  301,  302,   -1,  295,  296,  148,  149,   -1,   -1,   -1,
   -1,  301,  302,   -1,   -1,   -1,  301,  302,   -1,  301,
  302,   -1,   -1,   -1,  301,  302,  301,  302,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  301,
  302,   -1,   -1,   -1,   -1,   -1,   -1,  301,  302,   -1,
   -1,   -1,   -1,   -1,  301,  302,  302,   -1,   -1,   -1,
   -1,   -1,  301,  302,   -1,   -1,   -1,   -1,  302,   -1,
   -1,   -1,   -1,   -1,  280,  301,  302,  283,  284,  285,
  286,  287,  288,  289,  290,  291,  292,   -1,   -1,  295,
  296,   -1,   -1,   -1,  300,  301,  302,  280,   -1,   -1,
  283,  284,  285,  286,  287,  288,  289,  290,  291,  292,
   -1,   -1,  295,  296,  265,  266,   -1,  300,  269,   -1,
  271,  272,  273,   -1,  275,   -1,   -1,  266,  279,   -1,
  269,  282,  271,  272,  273,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  295,  296,   -1,   -1,   -1,   -1,
   -1,   -1,  303,  304,  305,  306,   -1,  308,  309,  310,
  311,  312,  313,  314,  315,   -1,   -1,   -1,   -1,  308,
  309,  310,  311,  312,  313,  314,  315,
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

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"'&'",0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,
0,0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"AUTO","BREAK","CASE","CONST","CONTINUE","DEFAULT",
"DO","REGISTER","RETURN","SIGNED","SIZEOF","STATIC","STRUCT","SWITCH","TYPEDEF",
"UNION","VOID","VOLATILE","WHILE","ELSE","ENUM","EXTERN","FOR","DEREF","GOTO",
"IF","MULEQ","DIVEQ","MODEQ","ADDEQ","SUBEQ","LSHIFTEQ","RSHIFTEQ","ANDEQ",
"XOREQ","OREQ","LSHIFT","RSHIFT","INCR","DECR","GTEQ","LTEQ","EQ","NEQ","LAND",
"LOR","TRUE","FALSE","NUMBER","IDENTIFIER","NOT","INT","FLOAT","CHAR","SHORT",
"LONG","DOUBLE","UNSIGNED","ENUMERATOR",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"multiplicative_expression : prefix_expression",
"multiplicative_expression : multiplicative_expression '*' postfix_expression",
"multiplicative_expression : multiplicative_expression '/' postfix_expression",
"prefix_expression : postfix_expression",
"prefix_expression : INCR postfix_expression",
"prefix_expression : DECR postfix_expression",
"postfix_expression : terminal",
"postfix_expression : postfix_expression '[' expression ']'",
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
#line 272 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
#line 526 "y.tab.c"

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
#line 38 "c.y"
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
#line 50 "c.y"
	{}
break;
case 9:
#line 51 "c.y"
	{}
break;
case 10:
#line 52 "c.y"
	{}
break;
case 11:
#line 53 "c.y"
	{}
break;
case 12:
#line 54 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 13:
#line 55 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 14:
#line 56 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 15:
#line 59 "c.y"
	{ ret(yystack.l_mark[0].rtl); }
break;
case 17:
#line 62 "c.y"
	{}
break;
case 18:
#line 63 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 19:
#line 64 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 20:
#line 67 "c.y"
	{ call(yystack.l_mark[-3].str); }
break;
case 21:
#line 70 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
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
	{}
break;
case 26:
#line 77 "c.y"
	{}
break;
case 27:
#line 80 "c.y"
	{}
break;
case 28:
#line 81 "c.y"
	{}
break;
case 29:
#line 82 "c.y"
	{}
break;
case 30:
#line 83 "c.y"
	{ identtype = INT; }
break;
case 31:
#line 84 "c.y"
	{}
break;
case 32:
#line 85 "c.y"
	{ identtype = FLOAT;}
break;
case 33:
#line 86 "c.y"
	{}
break;
case 34:
#line 87 "c.y"
	{}
break;
case 35:
#line 88 "c.y"
	{}
break;
case 36:
#line 89 "c.y"
	{ identtype = STRUCT; }
break;
case 37:
#line 90 "c.y"
	{}
break;
case 38:
#line 91 "c.y"
	{}
break;
case 39:
#line 95 "c.y"
	{ udtentry = get_udt(yystack.l_mark[-4].str);
              yystack.l_mark[-3].decl->type->width = structsize;
              structsize = 0; }
break;
case 40:
#line 98 "c.y"
	{}
break;
case 41:
#line 99 "c.y"
	{ udtentry = get_udt(yystack.l_mark[0].str); }
break;
case 42:
#line 101 "c.y"
	{ yyval.decl = add_user_defined_type(yystack.l_mark[0].str); }
break;
case 43:
#line 102 "c.y"
	{ yyval.decl = add_user_defined_type("anon"); }
break;
case 44:
#line 105 "c.y"
	{}
break;
case 45:
#line 106 "c.y"
	{}
break;
case 46:
#line 109 "c.y"
	{}
break;
case 47:
#line 110 "c.y"
	{}
break;
case 48:
#line 113 "c.y"
	{}
break;
case 49:
#line 116 "c.y"
	{ add_member(yystack.l_mark[0].decl); }
break;
case 50:
#line 117 "c.y"
	{ add_member(yystack.l_mark[-2].decl); }
break;
case 51:
#line 120 "c.y"
	{}
break;
case 52:
#line 123 "c.y"
	{}
break;
case 53:
#line 126 "c.y"
	{}
break;
case 54:
#line 127 "c.y"
	{ add_symbol(yystack.l_mark[0].decl); yyval.decl = yystack.l_mark[0].decl; }
break;
case 55:
#line 128 "c.y"
	{ add_symbol(yystack.l_mark[-2].decl); yyval.decl = yystack.l_mark[-2].decl; }
break;
case 56:
#line 131 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-1].str, join(yystack.l_mark[0].type, yystack.l_mark[-2].type)); }
break;
case 57:
#line 134 "c.y"
	{ yyval.type = type(NULL, 1, identtype);
     if (identtype == STRUCT)
        yyval.type->width = udtentry->type->width;
   }
break;
case 58:
#line 138 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, POINTER); }
break;
case 59:
#line 139 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, ADDRESS); }
break;
case 60:
#line 142 "c.y"
	{}
break;
case 61:
#line 143 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num, ARRAY); }
break;
case 62:
#line 146 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 63:
#line 149 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 64:
#line 150 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 65:
#line 153 "c.y"
	{ yyval.num = '='; }
break;
case 66:
#line 154 "c.y"
	{ yyval.num = NEQ; }
break;
case 67:
#line 155 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 68:
#line 156 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 69:
#line 157 "c.y"
	{ yyval.num = MULEQ; }
break;
case 70:
#line 158 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 71:
#line 159 "c.y"
	{ yyval.num = MODEQ; }
break;
case 72:
#line 160 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 73:
#line 161 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 74:
#line 162 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 75:
#line 163 "c.y"
	{ yyval.num = XOREQ; }
break;
case 76:
#line 164 "c.y"
	{ yyval.num = OREQ; }
break;
case 77:
#line 167 "c.y"
	{}
break;
case 78:
#line 169 "c.y"
	{ func(yystack.l_mark[-10].decl, yystack.l_mark[-6].decl, yystack.l_mark[-9].rtl); }
break;
case 79:
#line 171 "c.y"
	{ calledfunc = yystack.l_mark[0].decl; parameter = 1; yyval.rtl = empty(); }
break;
case 80:
#line 172 "c.y"
	{ parameter = 0; }
break;
case 81:
#line 173 "c.y"
	{ currfunc = calledfunc; }
break;
case 82:
#line 174 "c.y"
	{ increase_scope(); }
break;
case 83:
#line 175 "c.y"
	{ decrease_scope(); }
break;
case 84:
#line 178 "c.y"
	{ parameter = 0; }
break;
case 85:
#line 179 "c.y"
	{ add_symbol(yystack.l_mark[-2].decl); }
break;
case 86:
#line 180 "c.y"
	{ add_symbol(yystack.l_mark[0].decl); }
break;
case 87:
#line 184 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 88:
#line 191 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 89:
#line 200 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 90:
#line 208 "c.y"
	{}
break;
case 91:
#line 209 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 92:
#line 212 "c.y"
	{ yyval.jump = jump(); }
break;
case 93:
#line 215 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 94:
#line 218 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 95:
#line 220 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 96:
#line 227 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 97:
#line 229 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 98:
#line 236 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 99:
#line 238 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 100:
#line 240 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 101:
#line 243 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 102:
#line 245 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 103:
#line 247 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 104:
#line 250 "c.y"
	{ }
break;
case 105:
#line 251 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), INCR); }
break;
case 106:
#line 252 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), DECR); }
break;
case 107:
#line 255 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 108:
#line 256 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-3].rtl, yystack.l_mark[-1].rtl); }
break;
case 109:
#line 257 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 110:
#line 258 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 111:
#line 259 "c.y"
	{ yyval.rtl = access_member(yystack.l_mark[-2].rtl, yystack.l_mark[0].str); }
break;
case 112:
#line 260 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-2].rtl, DECR); }
break;
case 113:
#line 263 "c.y"
	{ yyval.rtl = terminal(TRUE, NULL); }
break;
case 114:
#line 264 "c.y"
	{ yyval.rtl = terminal(FALSE, NULL); }
break;
case 115:
#line 265 "c.y"
	{ yyval.rtl = terminal(IDENTIFIER, yystack.l_mark[0].str); }
break;
case 116:
#line 266 "c.y"
	{ yyval.rtl = terminal(NUMBER, yystack.l_mark[0].str); }
break;
case 117:
#line 269 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 1217 "y.tab.c"
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
