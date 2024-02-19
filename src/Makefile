program: main.o event.o
	gcc main.o event.o -o program

main.o: main.c
	gcc -c main.c

event.o: event.h event.c
	gcc -c event.c

clean:
	rm -f *.o program
