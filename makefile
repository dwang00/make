all: methods.o main.o
	gcc -o twaiis.exe methods.o main.o

methods.o: methods.c
	gcc -c methods.c

main.o: main.c header.h
	gcc -c main.c
