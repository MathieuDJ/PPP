CC=gcc
.DEFAULT_GOAL := all

all: clean compile link

orcs: main.o orcs.o
	$(CC) -o orcs main.o orcs.o

compile: main.o orcs.o

link: orcs

main.o: main.c
	$(CC) -c -o main.o main.c

orcs.o: orcs.c
	$(CC) -c -o orcs.o orcs.c

clean:
	del *.o orcs.exe
