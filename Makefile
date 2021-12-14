SHELL=bash
COMPILER=g++
FLAGS=-O3 -Wall -Wextra
LINKFLAGS=
COMMOBJS=common/math.o
PROBCPPS=$(shell find problems/ -name "*.cpp")
PROBNUMS=$(shell for P in $(PROBCPPS); do echo $${P:9:-4}; done)
PROBOBJS=$(shell for P in $(PROBCPPS); do echo $${P:0:-3}o; done)
OBJS=$(COMMOBJS) $(PROBOBJS)

all: objs pe

objs: $(OBJS)

pe:
	for P in $(PROBNUMS); do \
		$(COMPILER) $(FLAGS) -o pe$$P $(COMMOBJS) problems/$$P.o $(LINKFLAGS);\
	done

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c -o $@ $<

clean:
	rm -rf common/*.o
	rm -rf problems/*.o
	for P in $(PROBNUMS); do \
		rm -rf pe$$P;\
	done
