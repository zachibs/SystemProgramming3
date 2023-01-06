quest1.o: question1.c
	gcc -Wall -g -c question1.c

quest2.o: question2.c
	gcc -Wall -g -c question2.c


isort: quest1.o
	gcc -Wall -o isort quest1.o

txtfind: quest2.o
	gcc -Wall -o txtfind quest2.o


all: isort txtfind

.PHONY: clean all

clean:
	rm -f *.o txtfind isort