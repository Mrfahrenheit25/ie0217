CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = ej
SRC = ./src/libro.cpp ./src/main.cpp ./src/materialAudiovisual.cpp ./src/materialLectura.cpp ./src/noticias.cpp ./src/pelicula.cpp ./src/podcast.cpp

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