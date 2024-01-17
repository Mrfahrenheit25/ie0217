#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    cout << "Enter array index: ";
    cin >> index;

    try {
        // Lanzar excepción si el índice del array está fuera de límites
        if (index >= 4) {
            throw "Error: Array out of bounds!";
        }

        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;

        // Lanzar excepción si el denominador es 0
        if (denominator == 0) {
            throw 0;
        }

        arr[index] = numerator / denominator;
        cout << arr[index] << endl;
    }
    // Capturar excepción "Array out of bounds"
    catch (const char* msg) {
        cout << msg << endl;
    }
    // Capturar excepción "Divide by 0"
    catch (int num) {
        cout << "Error: Cannot divide by " << num << endl;
    }
    // Capturar cualquier otra excepción
    catch (...) {
        cout << "Unexpected exception!" << endl;
    }

    return 0;
}
