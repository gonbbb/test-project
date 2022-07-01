CC=gcc
CFLAGS= -Wall -std=c11

test: src.c
	$(CC) $(CFLAGS) src.c