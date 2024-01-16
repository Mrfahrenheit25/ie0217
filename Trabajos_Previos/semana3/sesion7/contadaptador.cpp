#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Crear una pila de enteros
    stack<int> numbers;

    // Empujar elementos a la pila
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout << "Numbers are: ";

    // Acceder y imprimir elementos hasta que la pila esté vacía
    while (!numbers.empty()) {
        // Imprimir el elemento de arriba
        cout << numbers.top() << ", ";

        // Quitar el elemento superior de la pila
        numbers.pop();
    }

    cout << endl;

    return 0;
}
