SHELL=bash
CC=gcc
FLAGS=-Wall -Wextra -g
LINKFLAGS=-lm
COMMOBJS=common/math.o
PROBSRCS=$(shell find problems/ -name "*.c")
PROBNUMS=$(shell for P in $(PROBSRCS); do echo $${P:9:-2}; done)
PROBOBJS=$(shell for P in $(PROBSRCS); do echo $${P:0:-1}o; done)
OBJS=$(COMMOBJS) $(PROBOBJS)

all: objs pe

objs: $(OBJS)

pe:
	for P in $(PROBNUMS); do \
		$(CC) $(FLAGS) -o pe$$P $(COMMOBJS) problems/$$P.o $(LINKFLAGS);\
	done

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -rf common/*.o
	rm -rf problems/*.o
	for P in $(PROBNUMS); do \
		rm -rf pe$$P;\
	done
