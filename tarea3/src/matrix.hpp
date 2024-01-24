#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <complex>
using namespace std;

/**
 * @brief Clase que representa una matriz bidimensional.
 * @tparam T Tipo de datos de los elementos de la matriz.
 */
template <typename T>
class Matriz {
public:
    /**
     * @brief Constructor por defecto que inicializa la matriz con 0 filas y 0 columnas.
     */
    Matriz();
    /**
     * @brief Metodo para solicitar al usuario el tamaño de la matriz y los datos respectivos.
     * @throw invalid_argument si se ingresa un tamaño inválido o un tipo de dato no válido.
     */
    void pedirDatos();
     /**
     * @brief Metodo para mostrar la matriz en el programa
     */
    void mostrarMatriz() const;
    /**
     * @brief Obtiene el numero de filas de la matriz.
     * @return Numero de filas.
     */
    int getFilas() const { return filas; }
    /**
     * @brief Obtiene el número de columnas de la matriz.
     * @return Número de columnas.
     */
    int getColumnas() const { return columnas; }
    /**
     * @brief Obtiene los datos de la matriz.
     * @return Los datos de la matriz.
     */
    const vector<vector<T>>& getDatos() const { return datos; }

    template <typename U> 
    friend class OperacionesBasicas;
    template <typename U>
    friend bool validarSumaResta(const Matriz<U>& matriz1, const Matriz<U>& matriz2);
    template <typename U>
    friend bool validarMultiplicacion(const Matriz<U>& matriz1, const Matriz<U>& matriz2);

private:
    /**
     * @brief Almacena los datos de la matriz.
     */
    vector<vector<T>> datos;
    /**
     * @brief Filas de la matriz
     */
    int filas;
    /**
     * @brief Columnas de la matriz.
     */
    int columnas;
};

#include "matrix.cpp"
#endif
