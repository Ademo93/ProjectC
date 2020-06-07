
GCC = gcc
SOURCES = $(wildcard *.c)
BINAIRES = $(patsubst %.c,%.o,${SOURCES})

all:ip.o main

main: ${BINAIRES}
    ${GCC} $^ -o $@ -lm

%.o: %.c %.h
    ${GCC} -c $<

clean: main
    rm -f main
    rm -f *.o
