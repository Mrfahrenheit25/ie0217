CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET_correo = ej2
TARGET_matriz = ej

SRC_correo = ./src/verif_email.cpp ./src/main_ve.cpp ./src/menu_ve.cpp
SRC_matriz = ./src/matrix.hpp ./src/main.cpp ./src/operaciones_basicas.hpp ./src/menu.hpp

ifeq ($(OS),Windows_NT)
    RM = del /Q
    TARGET_EXTENSION = .exe
else
    RM = rm -f
    TARGET_EXTENSION =
endif

correo: build_correo run_correo

build_correo: $(TARGET_correo)

$(TARGET_correo): $(SRC_correo)
	$(CXX) $(CXXFLAGS) -o $(TARGET_correo) $(SRC_correo)

run_correo:
	./$(TARGET_correo)

clean_correo:
	$(RM) $(TARGET_correo)$(TARGET_EXTENSION)


matriz: build_matriz run_matriz

build_matriz: $(TARGET_matriz)

$(TARGET_matriz): $(SRC_matriz)
	$(CXX) $(CXXFLAGS) -o $(TARGET_matriz) $(SRC_matriz)

run_matriz:
	./$(TARGET_matriz)

clean_matriz:
	$(RM) $(TARGET_matriz)$(TARGET_EXTENSION)