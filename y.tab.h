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
   struct decl *decl;
   struct jumplist *jump;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
