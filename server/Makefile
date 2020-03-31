# Server makefile

CC=gcc
DEBUG=-g -Wall
FLAGS=-O -lpthread
OBJ=$(CC) $(FLAGS) -c


all: pi.h dtp.h	pi.c dtp.c	pi.o dtp.o
	$(CC) $(FLAGS) pi.o dtp.o main.c -o server


pi: pi.c
	$(OBJ) pi.c

dpi: pi.c
	$(OBJ) $(DEBUG) pi.c


dtp: dtp.c
	$(OBJ) dtp.c

ddtp: 
	$(OBJ) $(DEBUG) dtp.c


clean:
	rm -f *.o