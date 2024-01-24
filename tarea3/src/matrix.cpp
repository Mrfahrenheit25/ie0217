#include "matrix.hpp"

// inicializa las matrices
template <typename T>
Matriz<T>::Matriz() : filas(0), columnas(0) {}
// Se piden los datos al usuario
template <typename T>
void Matriz<T>::pedirDatos(){
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    // Se verifica que los parametros y datos sean los adecuados.
    if (filas <= 0 || columnas <= 0) {
        throw invalid_argument("Tamano de matriz invalido o no se introdujo un numero valido");
    }
    datos.resize(filas, vector<T>(columnas));
    // se solicitan los datos de la matriz el programa lo recorre de la manera estandar, primero cambia la columna y luego la fila. 
    cout << "Ingrese los datos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Matriz[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> datos[i][j];
        }
    }
}
// Funcion para mostrar la matriz, la impresion esta en orden con lo que digite el usuario o con el resultado.
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

