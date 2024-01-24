#ifndef OPERACIONESBASICAS_HPP
#define OPERACIONESBASICAS_HPP

#include "matrix.hpp"

template <typename T>
class OperacionesBasicas{
public:
    static bool validarSumaResta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    static bool validarMultiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

    static Matriz<T> suma(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    static Matriz<T> resta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    static Matriz<T> multiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    template <typename U>
    friend bool validarSumaResta(const Matriz<U>& matriz1, const Matriz<U>& matriz2);
    template <typename U>
    friend bool validarMultiplicacion(const Matriz<U>& matriz1, const Matriz<U>& matriz2);

};

#include "operaciones_basicas.cpp"  

#endif 
