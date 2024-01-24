#ifndef OPERACION_COMPLEJA_HPP
#define OPERACION_COMPLEJA_HPP

#include <complex>
#include "matrix.hpp"
using namespace std;

/**
 * @brief Clase que proporciona operaciones con números complejos.
 * @tparam T Tipo de datos de los elementos de la matriz.
 */
template <typename T>
class OperacionCompleja {
public:
    /**
     * @brief Realiza la suma de dos numeros complejos.
     * @param num1 Primer numero complejo.
     * @param num2 Segundo numero complejo.
     * @return Resultado de la suma.
     */
    static complex<T> suma(complex<T> num1, complex<T> num2);

    /**
     * @brief Realiza la resta de dos numeros complejos.
     * @param num1 Primer numero complejo.
     * @param num2 Segundo numero complejo.
     * @return Resultado de la resta.
     */
    static complex<T> resta(complex<T> num1, complex<T> num2);

    /**
     * @brief Realiza la multiplicación de dos números complejos.
     * @param num1 Primer número complejo.
     * @param num2 Segundo número complejo.
     * @return Resultado de la multiplicación.
     */
    static complex<T> multiplicacion(complex<T> num1, complex<T> num2);

    template <typename U>
    friend class OperacionesBasicas;
};

#include "operacion_compleja.cpp"

#endif
