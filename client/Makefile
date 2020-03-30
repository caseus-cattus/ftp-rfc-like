# Client makefile

CC=gcc
DEBUG=-g -Wall
FLAGS=-O
OBJ=$(CC) $(FLAGS) -c


all: ui.h pi.h dtp.h	ui.c pi.c dtp.c		ui.o pi.o dtp.o
	$(CC) $(FLAGS) ui.o pi.o dtp.o main.c -o client

ui: ui.c
	$(OBJ) ui.c

dui: ui.c
	$(OBJ) $(DEBUG) ui.c


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