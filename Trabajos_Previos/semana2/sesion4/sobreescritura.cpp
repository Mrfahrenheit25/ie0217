#include <iostream>

using namespace std;

class Base {
public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1, derived2;

    // Acceso directo a la función print() de la clase Derived
    derived1.print();

    // Acceso a la función print() de la clase Base a través de la clase Derived
    derived2.Base::print();

    return 0;
}
