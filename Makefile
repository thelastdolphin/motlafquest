CC=g++
C++FLAGS=-g -Wall -std=c++14
SOURCES=~/Git/motlafquest/*.cpp
OBJECTS=$(SOURCES)
TARGET=motlafquest

all:
	$(CC) $(C++FLAGS) $(OBJECTS) -o $(TARGET)
