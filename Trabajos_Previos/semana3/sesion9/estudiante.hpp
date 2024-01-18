#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

class Estudiante {
public:
    Estudiante(const std::string& nombre, int edad);
    void mostrarDatos();

private:
    std::string nombre;
    int edad;
    int edad2;  // Esta variable se declara pero no se utiliza en el código proporcionado.
};

#endif
