#!/bin/bash
# File: Makefile

lister: main.o print.o
	gcc hello.o print.o -o hello
	rm *.o

main.o: main.c common.h
print.o: print.c common.h

