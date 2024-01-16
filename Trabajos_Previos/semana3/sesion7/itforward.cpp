#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> nums{1, 2, 3, 4};

    // Inicializar un iterador para apuntar al principio de una lista única
    forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end()) {
        // Acceder al valor del iterador utilizando el operador de indirección
        int original_value = *itr;

        // Asignar un nuevo valor utilizando el operador de indirección
        *itr = original_value * 2;

        // Avanzar el iterador a la siguiente posición
        ++itr;
    }

    // Mostrar el contenido de nums
    for (int num : nums) {
        cout << num << ", ";
    }

    return 0;
}
