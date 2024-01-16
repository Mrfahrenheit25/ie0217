#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> student;

    // Usar el operador [] para agregar elementos
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // Usar el método insert() para agregar elementos
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    // Agregar elementos con claves duplicadas
    student[5] = "Timothy";
    student[5] = "Aaron";

    // Imprimir elementos del mapa
    for (int i= 1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]: " << student[i] << endl;
    }

    return 0;
}
