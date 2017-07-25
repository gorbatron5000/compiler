CFILES=scan.c compoundtypes.c y.tab.c
HEADERS=sem_rec.h compoundtypes.h

parser: c.y $(CFILES) $(HEADERS)
	yacc -dv c.y
	gcc -g $(CFILES) -o parser -lm 

clean:
	rm -f *.o parser
