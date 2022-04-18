TARGET=Exer1
CC=g++
DEBUG=-g
OPT=-O0
WARN=-Wall
PTHREAD=-pthread
CCFLAGS=$(DEBUG) $(OPT) $(WARN) $(PTHREAD) -pipe
LD=g++
LDFLAGS=$(PTHREAD) -export-dynamic
DEPS=src/menu.hpp src/forno.hpp
OBJS= main.o menu.o
all: $(OBJS)
	$(LD) -o $(TARGET) -I $(DEPS) $(OBJS) $(LDFLAGS)
 
main.o: src/main.cpp
	$(CC) -c $(CCFLAGS) src/main.cpp -o main.o
 
menu.o: src/menu.cpp
	$(CC) -c $(CCFLAGS) src/menu.cpp -o menu.o

menu.o: src/forno.cpp
	$(CC) -c $(CCFLAGS) src/forno.cpp -o menu.o

clean:
	rm -f *.o