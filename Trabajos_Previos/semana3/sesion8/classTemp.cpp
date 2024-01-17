#include <iostream>
using namespace std;

// Plantilla de clase
template <class T>
class Number {
private:
    // Variable de tipo T
    T num;

public:
    // Constructor
    Number(T n) : num(n) {}

    T getNum() {
        return num;
    }
};

int main() {
    // Crear objeto con tipo int
    Number<int> numberInt(7);

    // Crear objeto con tipo double
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
