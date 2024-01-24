#include "operaciones_basicas.hpp"

template <typename T>
bool OperacionesBasicas<T>::validarSumaResta(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
   return matriz1.getFilas() == matriz2.getFilas() && matriz1.getColumnas() == matriz2.getColumnas();
}

template <typename T>
bool OperacionesBasicas<T>::validarMultiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    return matriz1.columnas == matriz2.filas;
}

template <typename T>
Matriz<T> OperacionesBasicas<T>::suma(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    if (!validarSumaResta(matriz1, matriz2)) {
        throw std::invalid_argument("No se pueden sumar matrices de diferentes dimensiones.");
    }

    Matriz<T> resultado;
    resultado.filas = matriz1.filas;
    resultado.columnas = matriz1.columnas;
    resultado.datos.resize(resultado.filas, std::vector<T>(resultado.columnas));

    for (int i = 0; i < resultado.filas; ++i) {
        for (int j = 0; j < resultado.columnas; ++j) {
            resultado.datos[i][j] = matriz1.datos[i][j] + matriz2.datos[i][j];
        }
    }

    return resultado;
}

template <typename T>
Matriz<T> OperacionesBasicas<T>::resta(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    if (!validarSumaResta(matriz1, matriz2)) {
        throw std::invalid_argument("no se pueden restar matrices de diferentes dimensiones.");
    }

    Matriz<T> resultado;
    resultado.filas = matriz1.filas;
    resultado.columnas = matriz1.columnas;
    resultado.datos.resize(resultado.filas, std::vector<T>(resultado.columnas));

    for (int i = 0; i < resultado.filas; ++i) {
        for (int j = 0; j < resultado.columnas; ++j) {
            resultado.datos[i][j] = matriz1.datos[i][j] - matriz2.datos[i][j];
        }
    }

    return resultado;
}

template <typename T>
Matriz<T> OperacionesBasicas<T>::multiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    if (!validarMultiplicacion(matriz1, matriz2)) {
        throw std::invalid_argument("no se pueden multiplicar matrices con estas dimensiones.");
    }

    Matriz<T> resultado;
    resultado.filas = matriz1.filas;
    resultado.columnas = matriz2.columnas;
    resultado.datos.resize(resultado.filas, std::vector<T>(resultado.columnas, 0));

    for (int i = 0; i < resultado.filas; ++i) {
        for (int j = 0; j < resultado.columnas; ++j) {
            for (int k = 0; k < matriz1.columnas; ++k) {
                resultado.datos[i][j] += matriz1.datos[i][k] * matriz2.datos[k][j];
            }
        }
    }

    return resultado;
}


