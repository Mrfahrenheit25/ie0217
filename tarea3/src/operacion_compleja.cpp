#include "operacion_compleja.hpp"

template <typename T>
Matriz<std::complex<T>> OperacionCompleja<T>::suma(const Matriz<std::complex<T>>& matriz1, const Matriz<std::complex<T>>& matriz2) {
    if (matriz1.getFilas() != matriz2.getFilas() || matriz1.getColumnas() != matriz2.getColumnas()) {
        throw std::invalid_argument("No se pueden sumar matrices de diferentes dimensiones.");
    }

    Matriz<std::complex<T>> resultado;
    resultado.filas = matriz1.getFilas();
    resultado.columnas = matriz1.getColumnas();
    resultado.datos.resize(resultado.filas, std::vector<std::complex<T>>(resultado.columnas));

    for (int i = 0; i < resultado.filas; ++i) {
        for (int j = 0; j < resultado.columnas; ++j) {
            resultado.datos[i][j] = matriz1.getDatos()[i][j] + matriz2.getDatos()[i][j];
        }
    }

    return resultado;
}

template <typename T>
Matriz<std::complex<T>> OperacionCompleja<T>::resta(const Matriz<complex<T>>& matriz1, const Matriz<std::complex<T>>& matriz2) {
    if (matriz1.getFilas() != matriz2.getFilas() || matriz1.getColumnas() != matriz2.getColumnas()) {
        throw std::invalid_argument("No se pueden restar matrices de diferentes dimensiones.");
    }

    Matriz<std::complex<T>> resultado;
    resultado.filas = matriz1.getFilas();
    resultado.columnas = matriz1.getColumnas();
    resultado.datos.resize(resultado.filas, std::vector<std::complex<T>>(resultado.columnas));

    for (int i = 0; i < resultado.filas; ++i) {
        for (int j = 0; j < resultado.columnas; ++j) {
            resultado.datos[i][j] = matriz1.getDatos()[i][j] - matriz2.getDatos()[i][j];
        }
    }

    return resultado;
}

template <typename T>
Matriz<std::complex<T>> OperacionCompleja<T>::multiplicacion(const Matriz<std::complex<T>>& matriz1, const Matriz<std::complex<T>>& matriz2) {
    if (matriz1.getColumnas() != matriz2.getFilas()) {
        throw std::invalid_argument("No se pueden multiplicar matrices con estas dimensiones.");
    }

    Matriz<std::complex<T>> resultado;
    resultado.filas = matriz1.getFilas();
    resultado.columnas = matriz2.getColumnas();
    resultado.datos.resize(resultado.filas, std::vector<std::complex<T>>(resultado.columnas, 0));

    for (int i = 0; i < resultado.filas; ++i) {
        for (int j = 0; j < resultado.columnas; ++j) {
            for (int k = 0; k < matriz1.getColumnas(); ++k) {
                resultado.datos[i][j] += matriz1.getDatos()[i][k] * matriz2.getDatos()[k][j];
            }
        }
    }

    return resultado;
}

