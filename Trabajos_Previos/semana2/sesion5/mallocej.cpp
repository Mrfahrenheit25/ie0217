#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Asignar memoria de tamaño int a un puntero int
    int* ptr = (int*)malloc(sizeof(int));

    // Asignar el valor 5 a la memoria asignada
    *ptr = 5;

    // Imprimir el valor apuntado por ptr
    cout << *ptr << endl;

    // Liberar la memoria asignada para ptr
    free(ptr);

    return 0;
}
