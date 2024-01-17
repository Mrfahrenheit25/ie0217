#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Crear un vector
    vector<int> vec{1, 2, 3, 4};

    // Crear iteradores para apuntar al primer y último elemento
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1;

    // Mostrar los elementos del vector
    cout << "First Element: " << *itr_first << endl;
    cout << "Second Element: " << *(itr_first + 1) << endl;  // o itr_first[1]
    cout << "Second Last Element: " << *(itr_last - 1) << endl;
    cout << "Last Element: " << *itr_last << endl;

    return 0;
}
