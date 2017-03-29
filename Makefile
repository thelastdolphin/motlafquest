CC=g++
CXXFLAGS= -c -g -Wall -std=c++14 
LDFLAGS=
SOURCES=./src/*.cpp
OBJECTS=*.o
TARGET=motlafquest


clean: $(TARGET)
	rm -rf *.o

$(TARGET): castle.o player.o builders.o inout.o queryhandler.o main.o
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(TARGET)

main.o: castle.o player.o builders.o inout.o queryhandler.o
	$(CC) $(CXXFLAGS) ./src/main.cpp

queryhandler.o: player.o
	$(CC) $(CXXFLAGS) ./src/queryhandler.cpp

inout.o: player.o
	$(CC) $(CXXFLAGS) ./src/inout.cpp

builders.o: player.o
	$(CC) $(CXXFLAGS) ./src/builders.cpp

player.o:
	$(CC) $(CXXFLAGS) ./src/player.cpp

castle.o:
	$(CC) $(CXXFLAGS) ./src/castle.cpp

