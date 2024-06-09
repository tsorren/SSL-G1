CC = gcc
DEBUG_CFLAGS = -g
RELEASE_CFLAGS = -O2 -DNDEBUG
CFLAGS = -Wall -c -pedantic-errors -std=c23

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

#indica que objetivos deben realizarse si o si, sin importar las dependencias
.PHONY: clean run

exec: main.o tabla.o conversion.o
	$(CC) main.o tabla.o conversion.o -o exec.exe

main.o: main.c tabla.h conversion.h
	$(CC) $(CFLAGS) main.c -o main.o

#$<: es el primer item en la lista de dependencias, en nuestro caso el mate.c
#$@: nombre del objetivo	
tabla.o: tabla.c tabla.h conversion.h
	$(CC) $(CFLAGS) $< -o $@

conversion.o: conversion.c conversion.h
	$(CC) $(CFLAGS) $< -o $@

#info adicional	
#$^: Esta variable representa todas las dependencias de la regla de compilación.

clean:
	rm main.o tabla.o conversion.o exec.exe

run: exec
	./exec.exe

