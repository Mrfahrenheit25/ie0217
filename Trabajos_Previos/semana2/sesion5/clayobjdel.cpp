#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    // Constructor que inicializa age a 12
    Student() : age(12) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    // Declarar dinámicamente un objeto Student
    Student* ptr = new Student();

    // Llamar a la función getAge()
    ptr->getAge();

    // Liberar la memoria asignada para ptr
    delete ptr;

    return 0;
}
