CFILES=symboltable.c rtls.c y.tab.c scan.c asm.c
HEADERS=symboltable.h rtls.h y.tab.h scan.h asm.h

parser: c.y $(CFILES) $(HEADERS)
	yacc -dv c.y
	gcc -g $(CFILES) -o parser -lm 

clean:
	rm -f *.o parser
