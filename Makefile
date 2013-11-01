CC=g++

CFLAGS=-std=c++11 -c -Wall 
INCLUDES=-Iinclude -I/usr/local

SOURCES=$(wildcard src/*.cpp)
#SOURCES=src/Human.cpp \
		src/Computer.cpp \
		src/Player.cpp \
		src/CheckersBoard.cpp 

OBJECTS=$(SOURCES:.cpp=.o)

EXECUTABLE=checkers

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $^ -o $@

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	rm -f src/*.o $(EXECUTABLE)
