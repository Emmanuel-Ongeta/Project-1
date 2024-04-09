myProgram:main.o functions.o
	gcc -o myProgram main.o functions.o

main.o:main.c
	gcc -c main.c

functions.o:functions.c
	gcc -c functions.c

clean:
	rm *.o myProgram
