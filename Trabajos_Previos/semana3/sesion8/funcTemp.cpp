#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main() {
    int result1;
    double result2;

    // Llamada con parámetros int
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // Llamada con parámetros double
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl;

    return 0;
}
