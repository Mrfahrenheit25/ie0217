#include <iostream>
#include <set>
using namespace std;

int main() {
    // Inicializar un conjunto de tipo int
    set<int> numbers = {1, 100, 10, 70, 100};

    // Imprimir el conjunto
    cout << "Numbers are: ";
    for (auto &num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
