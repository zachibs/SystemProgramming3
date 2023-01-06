question1.o: question1.c
	gcc -Wall -c question1.c

question2.o: question2.c
	gcc -Wall -c question2.c


isort: question1.o
	gcc -Wall -o isort question1.o

txtfind: question2.o
	gcc -Wall -o txtfind question2.o


all: isort txtfind

.PHONY: clean all

clean:
	rm -f *.o txtfind isort