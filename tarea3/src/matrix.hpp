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

    friend class OperacionesBasicas;
};

#include "matrix.cpp"
#endif
