dynamic_string.o: dynamic_string.c dynamic_string.h
	gcc -c dynamic_string.c

test.o: test.c dynamic_string.h
	gcc -c test.c

string: test.o dynamic_string.o
	gcc test.o dynamic_string.o -o string