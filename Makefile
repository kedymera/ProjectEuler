COMPILER=g++
FLAGS=-O3 -Wall -Wextra
EXEC=pe
LINKFLAGS=
OBJS=problems/1.o common/math.o

pe: $(OBJS)
	$(COMPILER) $(FLAGS) -o $(EXEC) $(OBJS) $(LINKFLAGS)

clean:
	rm -rf *.o $(EXEC)

%.o: %.c++
	$(COMPILER) $(FLAGS) -c -o $@ $<
