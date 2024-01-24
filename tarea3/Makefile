CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = ej 
SRC = ./src/func.cpp ./src/main.cpp

ifeq ($(OS),Windows_NT)
    RM = del /Q
    TARGET_EXTENSION = .exe
else
    RM = rm -f
    TARGET_EXTENSION =
endif

all: build run

build: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run:
	./$(TARGET)

clean:
	$(RM) $(TARGET)$(TARGET_EXTENSION)