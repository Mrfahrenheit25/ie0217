#include <iostream>
using namespace std;

int main() {
    // Declarar un puntero int
    int* pointInt;

    // Declarar un puntero float
    float* pointFloat;

    // Asignar dinámicamente memoria para pointInt
    pointInt = new int;

    // Asignar dinámicamente memoria para pointFloat
    pointFloat = new float;

    // Asignar un valor a la memoria apuntada por pointInt
    *pointInt = 45;

    // Asignar un valor a la memoria apuntada por pointFloat
    *pointFloat = 45.45f;

    // Imprimir el valor apuntado por pointInt
    cout << *pointInt << endl;

    // Imprimir el valor apuntado por pointFloat
    cout << *pointFloat << endl;

    // Liberar la memoria asignada para pointInt
    delete pointInt;

    // Liberar la memoria asignada para pointFloat
    delete pointFloat;

    return 0;
}
