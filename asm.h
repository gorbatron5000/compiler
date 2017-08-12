#ifndef ASM_H
#define ASM_H

#define NUMREGS 32
#define RETREG  2
#define SPREG   29
#define TAKEN   1
#define FREE    0
#define MAXOP   6
#define NUMOPS  5

struct {
   int offset;
   char *symbol;
} stack[100];

struct op {
   int val;
   char str[MAXOP];
};

void print_asm();

#endif
