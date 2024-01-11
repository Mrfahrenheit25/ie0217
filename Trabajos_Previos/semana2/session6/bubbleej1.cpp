#include <iostream>
using namespace std;

// Realizar el ordenamiento burbuja
void bubbleSort(int array[], int size) {
    // Bucle para acceder a cada elemento del array
    for (int step = 0; step < size; ++step) {
        // Bucle para comparar elementos del array
        for (int i = 0; i < size - step; ++i) {
            // Comparar dos elementos adyacentes
            // Cambiar ">" por "<" para ordenar en orden descendente
            if (array[i] > array[i + 1]) {
                // Intercambiar elementos si no están en el orden deseado
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// Imprimir array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, -9};

    // Encontrar la longitud del array
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);

    return 0;
}
