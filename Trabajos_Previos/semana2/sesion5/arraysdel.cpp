#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter total number of students: ";
    cin >> num;

    float* ptr;

    // Asignación de memoria para num cantidad de floats
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    // Liberar la memoria asignada para ptr
    delete[] ptr;

    return 0;
}
