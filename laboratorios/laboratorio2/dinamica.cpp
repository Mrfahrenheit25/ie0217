#include <iostream>
using namespace std;

// seccion data, modificable
int variableGlobal =10;

// en el texto, no se modifica, siempre hace lo mismo
void funcionGlobal(){
    // queda en .data
    static int variableLocalEstatica = 5;
    //stack
    int variableLocal =20;

    cout << "Variable global: " << variableGlobal << endl;
    cout << "Variable local estatica : " << variableLocalEstatica << endl;
    cout << "Variable local : " << variableLocal << endl;
}

int main(){
    // stack
    int variableLocalMain = 15;

    funcionGlobal();

    cout<< "Variable local en main: " << variableLocalMain << endl;
    //seccion heap
    int *variableDinamica = new int;
    *variableDinamica =25;

    cout<< "Variable dinamica: " << *variableDinamica << endl;

    delete variableDinamica;

    return 0;
};