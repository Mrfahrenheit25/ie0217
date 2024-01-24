#include "matrix.hpp"


template <typename T>
Matriz<T>::Matriz() : filas(0), columnas(0) {}

template <typename T>
void Matriz<T>::pedirDatos(){
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    if (filas <= 0 || columnas <= 0) {
        throw invalid_argument("Tamano de matriz invalido o no se introdujo un numero valido");
    }
    datos.resize(filas, vector<T>(columnas));
    cout << "Ingrese los datos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Matriz[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> datos[i][j];
        }
    }
}

template <typename T>
void Matriz<T>::mostrarMatriz() const {
    cout << "Matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << datos[i][j] << " ";
        }
        cout << endl;
    }
}

