#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Inicializar un vector de tipo int
    vector<int> numbers = {1, 100, 10, 70, 100};

    // Imprimir el vector
    cout << "Numbers are: ";
    for (auto &num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
