#ifndef OPERACIONESBASICAS_HPP
#define OPERACIONESBASICAS_HPP

#include "matrix.hpp"

/**
 * @brief Clase que proporciona operaciones basicas entre matrices.
 * @tparam T Tipo de datos de los elementos de la matriz.
 */
template <typename T>
class OperacionesBasicas{
public:
    /**
     * @brief Verifica si es posible realizar operaciones de suma/resta entre dos matrices.
     * @param matriz1 Primera matriz.
     * @param matriz2 Segunda matriz.
     * @return Es un booleano, true si es posible, false de lo contrario.
     */
    static bool validarSumaResta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    /**
     * @brief Verifica si es posible realizar operaciones de multiplicacion entre dos matrices.
     * @param matriz1 Primera matriz.
     * @param matriz2 Segunda matriz.
     * @return Es un booleano,true si es posible, false de lo contrario.
     */
    static bool validarMultiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    /**
     * @brief Realiza la suma de dos matrices.
     * @param matriz1 Primera matriz.
     * @param matriz2 Segunda matriz.
     * @return Matriz resultante de la suma.
     * @throw invalid_argument si las matrices tienen dimensiones diferentes.
     */
    static Matriz<T> suma(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    /**
     * @brief Realiza la resta de dos matrices.
     * @param matriz1 Primera matriz.
     * @param matriz2 Segunda matriz.
     * @return Matriz resultante de la resta.
     * @throw invalid_argument si las matrices tienen dimensiones diferentes.
     */
    static Matriz<T> resta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    /**
     * @brief Realiza la multiplicacion de dos matrices.
     * @param matriz1 Primera matriz.
     * @param matriz2 Segunda matriz.
     * @return Matriz resultante de la multiplicacion.
     * @throw invalid_argument si las matrices no tienen dimensiones adecuadas.
     */
    static Matriz<T> multiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    template <typename U>
    friend bool validarSumaResta(const Matriz<U>& matriz1, const Matriz<U>& matriz2);
    template <typename U>
    friend bool validarMultiplicacion(const Matriz<U>& matriz1, const Matriz<U>& matriz2);

};

#include "operaciones_basicas.cpp"  

#endif 
