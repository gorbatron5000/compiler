#include "string.h"
#include "ctype.h"
#include "scan.h"
#include "y.tab.h"

char *token_strings[] = { "auto", "break", "case", "char", "const",
      "continue", "default", "do", "int", "long", "register", "return",
      "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
      "union", "unsigned", "void", "volatile", "while", "double", "else",
      "enum", "extern", "float", "for", "goto", "if", 
      "*=", "/=", "%=", "+=", "-=", "<<=", ">>=", "&=", "^=", "|=",
      "<<", ">>", "++", "--", ">=", "<=", "==", "!=", "&&", "||",
      "true", "false", "+", "-", "*", "/", "=", "!" };

int token_vals[] = { AUTO, BREAK, CASE, CHAR, CONST,
      CONTINUE, DEFAULT, DO, INT_, LONG, REGISTER, RETURN,
      SHORT, SIGNED, SIZEOF, STATIC, STRUCT, SWITCH, TYPEDEF,
      UNION, UNSIGNED, VOID, VOLATILE, WHILE, DOUBLE, ELSE,
      ENUM, EXTERN, FLOAT_, FOR, GOTO, IF, 
      MULEQ, DIVEQ, MODEQ, ADDEQ, SUBEQ, LSHIFTEQ, RSHIFTEQ,
      ANDEQ, XOREQ, OREQ, LSHIFT, RSHIFT, INCR, DECR, GTEQ, LTEQ, EQ, NEQ,
      LAND, LOR, TRUE, FALSE, '+', '-', '*', '/', '=', '!'};

char ident[MAXRTL], fname[MAXLBL], ident2[MAXRTL];
int identtype, identwidth;

int strtotok(char *str)
{
   int i;
   for (i = 0; i < TOKENS; i++)
      if (!strcmp(token_strings[i], str))
         return token_vals[i];
   yylval.str = malloc(strlen(str)+1);
   strcpy(yylval.str, str);
   return IDENTIFIER;
}

char *toktostr(int tok)
{
   int i;
   for (i = 0; i < TOKENS; i++)
      if (token_vals[i] == tok)
         return token_strings[i];
   return NULL;
}

int peek(int d)
{
   int c = getchar();
   return c == d ? TRUE : !ungetc(c, stdin);
}

int yylex() {
   char *ptr, tmp[MAXSTR];
   int c, d;

   while ((c = getchar()) != EOF) {
      switch (c) {
         case ' ': case '\n': case '\t':
            break;

         case '/': case '*': case '%': case '+': case '-': case '&':
         case '^': case '<': case '>': case '|': case '=': case '!':
            ptr = tmp;
            *ptr++ = c;

            if (strchr("<>+-&|", c) && peek(c))
               *ptr++ = c;
            
            if (peek('='))
               *ptr++ = '=';

            *ptr = 0;

            if (!(*tmp == '/' && *(tmp+1) == '\0'))
               return strtotok(tmp);
            
            if (peek('/'))
               while ((c = getchar()) != '\n');
            else if (peek('*'))
               while (!peek('*') && !peek('/'))
                  c = getchar();
            else
               return c;

            break;

         default:
            if (isalpha(c) || isdigit(c)) {
               ptr = tmp;
               d = c;

               do
                  *ptr++ = d;
               while ((d = getchar()) &&
                       isalpha(c) ? (isalnum(d) || d == '_') : isdigit(d));

               ungetc(d, stdin);
               *ptr++ = 0;

               yylval.str = malloc(sizeof(char)*(ptr-tmp+1));
               strcpy(yylval.str, tmp);

               return isalpha(c) ? strtotok(yylval.str) : NUMBER;
            }
            else
               return c;
      }
   }
   return 0;
}
