test:test.o My_string.o
	gcc -o test test.o My_string.o
My_string.o:My_string.c 
	gcc -c My_string.c
test.o:test.c 
	gcc -c test.c

