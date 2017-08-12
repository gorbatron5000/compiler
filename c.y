%{
#include "scan.h"
#include "symboltable.h"
#include "rtls.h"
#include "asm.h"
%}

%union {
   char *str;
   int num;
   struct list *rtl;
   struct type *type;
   struct symbol *decl;
   struct jumplist *jump;
};

%token AUTO BREAK CASE CONST CONTINUE DEFAULT DO REGISTER
       RETURN SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION
       VOID VOLATILE WHILE ELSE ENUM EXTERN FOR DEREF
       GOTO IF MULEQ DIVEQ MODEQ ADDEQ SUBEQ LSHIFTEQ RSHIFTEQ
       ANDEQ XOREQ OREQ LSHIFT RSHIFT INCR DECR GTEQ LTEQ EQ NEQ
       LAND LOR TRUE FALSE NUMBER IDENTIFIER NOT INT FLOAT
       CHAR SHORT LONG DOUBLE UNSIGNED TYPEDEF ENUMERATOR

%type <rtl> statement lbl logical_or logical_and terminal expression
            multiplicative_expression additive_expression if_statement
            postfix_expression prefix_expression statements assignment
            while_statement for_statement opt_expression function E
            assignments
%type <decl> declaration vars var param_list A B
%type <type> arrays addresses storage_specifier enumerator typedefname
%type <num> num type_specifier assign_oper prefix_op
%type <jump> jump
%type <str> IDENTIFIER NUMBER

%%

start:
   { print_asm(); } |
   global_declaration start {};

global_declaration:
   function {} |
   declaration ';' {};

statements:
   {} |
   '{' P statements '}' Q {} |
   statement statements {};

statement:
   return ';' {} |
   declaration ';' {} |
   assignment ';' {} |
   if_statement lbl    { backpatch($1->falselist, $2); } |
   while_statement lbl { backpatch($1->falselist, $2); } |
   for_statement lbl   { backpatch($1->falselist, $2); };

return:
   RETURN opt_expression { ret($2); } |

declaration:
   type_specifier vars { $$ = $2; };

storage_specifier:
   AUTO {} |
   REGISTER {} |
   STATIC {} |
   EXTERN {} |
   TYPEDEF {};

type_specifier:
   VOID         {} |
   CHAR         {} |
   SHORT        {} |
   INT          { identtype = INT; } |
   LONG         {} |
   FLOAT        { identtype = FLOAT;} |
   DOUBLE       {} |
   SIGNED       {} |
   UNSIGNED     {} |
   compoundtype { identtype = STRUCT; } |
   enumerator   {} |
   typedefname  {};

compoundtype:
   struct_or_union IDENTIFIER A '{' struct_declarations '}'
            { udtentry = get_udt($2);
              $3->type->width = structsize;
              structsize = 0; } |
   struct_or_union B '{' '}' {} |
   struct_or_union IDENTIFIER { udtentry = get_udt($2); };

A: { $$ = add_user_defined_type($<str>0); };
B: { $$ = add_user_defined_type("anon"); };

struct_or_union:
   STRUCT {} |
   UNION {};

struct_declarations:
   struct_declaration ';' {} |
   struct_declaration ';' struct_declarations {};

struct_declaration:
   type_specifier struct_member {};

struct_member:
   var { add_member($1); } |
   var ',' struct_member { add_member($1); };

enumerator:
   ENUMERATOR {};

typedefname:
   TYPEDEF {};

vars:
   {} |
   var { add_symbol($1); $$ = $1; } |
   var ',' vars { add_symbol($1); $$ = $1; };

var:
   addresses IDENTIFIER arrays { $$ = symbol($2, join($3, $1)); };

addresses:
   { $$ = type(NULL, 1, identtype);
     if (identtype == STRUCT)
        $$->width = udtentry->type->width;
   } |
   '*' addresses { $$ = type($2, 1, POINTER); } |
   '&' addresses { $$ = type($2, 1, ADDRESS); };

arrays:
   {} |
   '[' num ']' arrays { $$ = type($4, $2, ARRAY); };

num:
   NUMBER { $$ = atoi(yylval.str); };

assign_oper:
   '='      { $$ = '='; } |
   NEQ      { $$ = NEQ; } |
   ADDEQ    { $$ = ADDEQ; } |
   SUBEQ    { $$ = SUBEQ; } |
   MULEQ    { $$ = MULEQ; } |
   DIVEQ    { $$ = DIVEQ; } |
   MODEQ    { $$ = MODEQ; } |
   LSHIFTEQ { $$ = LSHIFTEQ; } |
   RSHIFTEQ { $$ = RSHIFTEQ; } |
   ANDEQ    { $$ = ANDEQ; } |
   XOREQ    { $$ = XOREQ; } |
   OREQ     { $$ = OREQ; };

function:
   declaration E '(' P param_list ')' F ';' {} |
   declaration E '(' P param_list ')' F G '{' statements '}'
            { func($1, $5, $2); };

E: { calledfunc = $<decl>0; parameter = 1; $$ = empty(); };
F: { parameter = 0; };
G: { currfunc = calledfunc; };
P: { increase_scope(); };
Q: { decrease_scope(); };

param_list:
   { parameter = 0; } |
   type_specifier var ',' param_list { add_symbol($2); } |
   type_specifier var { add_symbol($2); };

if_statement:
   IF '(' expression ')' lbl statement
               { make_jumps($3);
                 backpatch($3->truelist, $5);
                 $$ = makelist();
                 $$->falselist = $3->falselist; };

while_statement:
   WHILE '(' lbl expression ')' lbl statement jump
               { make_jumps($4);
                 backpatch($4->truelist, $6);
                 backpatch($8, $3);
                 $$ = makelist();
                 $$->falselist = $4->falselist; };

for_statement:
   FOR '(' opt_expression ';' lbl opt_expression ';' lbl
           opt_expression jump ')' lbl statement jump
               { make_jumps($6);
                 backpatch($6->truelist, $12);
                 backpatch($10, $5);
                 backpatch($14, $8);
                 $$ = makelist();
                 $$->falselist = $6->falselist; };

opt_expression:
   {} |
   assignment { $$ = $1; };

jump:
   { $$ = jump(); };

assignment:
   expression { $$ = $1; } |
   postfix_expression assign_oper assignment { binst($1, $3, $2); };

expression:
   logical_or { $$ = $1; };

logical_or:
   logical_and { $$ = $1; } |
   logical_or LOR lbl logical_and
               { make_jumps($1);
                 make_jumps($4);
                 backpatch($1->falselist, $3); 
                 $$->truelist = merge($1->truelist, $4->truelist);
                 $$->falselist = $4->falselist; };

logical_and:
   additive_expression { $$ = $1; } |
   logical_and LAND lbl additive_expression
               { make_jumps($1);
                 make_jumps($4);
                 backpatch($1->truelist, $3);
                 $$->falselist = merge($1->falselist, $4->falselist);
                 $$->truelist = $4->truelist; };

additive_expression:
	multiplicative_expression { $$ = $1; } |
   additive_expression '+' multiplicative_expression
               { $$ = binst($1, $3, '+'); } |
   additive_expression '-' multiplicative_expression
               { $$ = binst($1, $3, '-'); };

multiplicative_expression:
   prefix_expression { $$ = $1; } |
   multiplicative_expression '*' postfix_expression
               { $$ = binst($1, $3, '*'); } |
   multiplicative_expression '/' postfix_expression
               { $$ = binst($1, $3, '/'); };

prefix_expression:
   postfix_expression { $$ = $1; } |
   prefix_op postfix_expression { $$ = unary($2, $1); } |
   INCR postfix_expression { binst($2, makeimmediate(1), INCR); } |
   DECR postfix_expression { binst($2, makeimmediate(1), DECR); };

prefix_op:
   '&' { $$ = '&'; } |
   '|' { $$ = '|'; } |
   '+' { $$ = '+'; } |
   '-' { $$ = '-'; } |
   '~' { $$ = '~'; } |
   '!' { $$ = '!'; };

assignments:
   {} |
   assignment { $$ = $1; } |
   assignment ',' assignments { $$ = $1; };

postfix_expression:
   terminal { $$ = $1; } |
   postfix_expression '[' expression ']' { $$ = arrayref($1, $3); } |
   postfix_expression '(' assignments ')' { $$ = call($1, $3); } |
   postfix_expression INCR { $$ = postfix($1, INCR); } |
   postfix_expression DECR { $$ = postfix($1, DECR); } |
   postfix_expression '.' IDENTIFIER { $$ = access_member($1, $3); } |
   postfix_expression DEREF IDENTIFIER { $$ = postfix($1, DECR); };

terminal:
   TRUE       { $$ = terminal(TRUE, NULL); } |
   FALSE      { $$ = terminal(FALSE, NULL); } |
   IDENTIFIER { $$ = terminal(IDENTIFIER, $1); } |
   NUMBER     { $$ = terminal(NUMBER, $1); };

lbl:
   { $$ = gtlabel(); };

%%

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
