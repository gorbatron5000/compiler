parser:
	yacc -dv c.y
	gcc -g scan.c y.tab.c -o parser -lm 

clean:
	rm -f *.o parser
