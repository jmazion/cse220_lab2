#!/bin/bash
# File: Makefile

lister: main.o print.o
	gcc main.o print.o -o lister
	rm *.o

main.o: main.c common.h
print.o: print.c common.h

