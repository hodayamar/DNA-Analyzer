TARGET=dna
# all .cpp files in this directory are my sources
SOURCES=$(wildcard *.cpp) $(wildcard Model/*.cpp) $(wildcard View/*.cpp) $(wildcard Controller/ControllerTools/*.cpp) $(wildcard Controller/Commands/*.cpp) $(wildcard Controller/*.cpp) $(wildcard Model/ModelTools/*.cpp) $(wildcard Model/Decorators/*.cpp) $(wildcard Tools/*.cpp)
OBJS=$(SOURCES:.cpp=.o)
INC_DIR=../include
CC=g++
CFLAGS= -c -pedantic -Wall -Werror  -ansi -g -I$(INC_DIR)#/-Wconversion
CXXFLAGS=$(CFLAGS)
LDFLAGS= -g

.PHONY: clean run gdb

$(TARGET): $(OBJS) .depends
	$(CC) -o $(TARGET) $(OBJS) $(LDFLAGS)
include .depends

.depends:
	$(CC) -MM -I$(INC_DIR) $(SOURCES) > .depends

clean:
	rm -f $(OBJS) $(TARGET) .depends

run: $(TARGET)
	./$(TARGET)

# Do not forget to add '-g' to CFLAGS
gdb: $(TARGET)
	gdb -q ./$(TARGET)
	
