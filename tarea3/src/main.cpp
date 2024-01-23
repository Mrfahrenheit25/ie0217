#include <iostream>
#include <complex>
#include "matrix.hpp"

int main() {
    try {
        Matriz<int> matrizInt;
        cout << "Ingrese datos para la Matriz de enteros:" << endl;
        matrizInt.pedirDatos();
        matrizInt.mostrarMatriz();

        Matriz<float> matrizFloat;
        cout << "Ingrese datos para la Matriz de punto flotante:" << endl;
        matrizFloat.pedirDatos();
        matrizFloat.mostrarMatriz();

        Matriz<std::complex<float>> matrizCompleja;
        cout << "Ingrese datos para la Matriz de numeros complejos:" << endl;
        matrizCompleja.pedirDatos();
        matrizCompleja.mostrarMatriz();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
