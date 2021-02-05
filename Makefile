OBJS	= test.o Modyst.o
SOURCE	= test.cpp Sources/Modyst.cpp
HEADER	= Headers/Modyst.h
OUT	= Bin/ModystTest
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: Sources/main.cpp
	$(CC) $(FLAGS) Sources/main.cpp

Modyst.o: Sources/Modyst.cpp
	$(CC) $(FLAGS) Sources/Modyst.cpp

clean:
	rm -f $(OBJS) $(OUT)
