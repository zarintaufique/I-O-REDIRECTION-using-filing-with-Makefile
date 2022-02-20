output:	main.o code.o  
	gcc main.o code.o  -o output

main.o:	main.c
	gcc -c main.c

code.o:	code.c  header.h
	gcc -c code.o

clean: rm *.o output
