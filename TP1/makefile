CC = gcc
DEBUG_CFLAGS = -g
RELEASE_CFLAGS = -O2 -DNDEBUG
CFLAGS = -Wall -c -std=c23 -pedantic-errors 

# por defecto uso 
ifndef BUILD_TYPE
    BUILD_TYPE = release
endif

# modifico CFLAGS en base a BUILD_TYPE
ifeq ($(BUILD_TYPE),debug)
    CFLAGS += $(DEBUG_CFLAGS)
else ifeq ($(BUILD_TYPE),release)
    CFLAGS += $(RELEASE_CFLAGS)
endif

#indica qué objetivos deben realizarse sí o sí, sin importar las dependencias
.PHONY: clean run

exec: main.o tabla.o conversion.o
	$(CC) main.o tabla.o conversion.o -o exec

main.o: main.c tabla.h conversion.h
	$(CC) $(CFLAGS) -o main.o main.c

tabla.o: tabla.c tabla.h conversion.h
	$(CC) $(CFLAGS) -o tabla.o tabla.c

conversion.o: conversion.c conversion.h
	$(CC) $(CFLAGS) -o conversion.o conversion.c

clean:
	rm -f main.o tabla.o conversion.o exec

run: exec
	./exec