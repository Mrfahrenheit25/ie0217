#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <complex>
using namespace std;



template <typename T>
class Matriz {
private:
    vector<vector<T>> datos;
    int filas;
    int columnas;

public:
    Matriz();

    void pedirDatos();
    void mostrarMatriz() const;
    int getFilas() const { return filas; }
    int getColumnas() const { return columnas; }
    const std::vector<std::vector<T>>& getDatos() const { return datos; }
    template <typename U> 
    friend class OperacionesBasicas;
    template <typename U>
    friend bool validarSumaResta(const Matriz<U>& matriz1, const Matriz<U>& matriz2);
    template <typename U>
    friend bool validarMultiplicacion(const Matriz<U>& matriz1, const Matriz<U>& matriz2);

};

#include "matrix.cpp"
#endif
