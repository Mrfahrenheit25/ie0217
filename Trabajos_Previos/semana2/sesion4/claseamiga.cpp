#include <iostream>
using namespace std;

class ClassB;

class ClassA {
private:
    int numA;

    // friend class declaration
    friend class ClassB;


public:
    // constructor to initialize numA to 12
    ClassA() : numA(1) {}

};

class ClassB {
private:
    int numB;

public:
    // constructor to initialize numA to 1
    ClassB() : numB(1) {}

    // member function to add numA from ClassA and numB from ClassB
    int add(){
        ClassA objectA;
        return objectA.numA +numB;
    }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}