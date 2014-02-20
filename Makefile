#!/bin/bash
# File: Makefile

hello: hello.o
	gcc hello.o -o hello
	rm *.o

hello.o: hello.c
	gcc -c hello.c
