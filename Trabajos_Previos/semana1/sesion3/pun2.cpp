#include <iostream>
using namespace std;
int main(){
    int var = 5;
    //declare la variable pointer
    int* pointvar;
    //guarde la direccion de la variable
    pointvar = &var;

    //imprimir el valor de var
    cout<< "var = "<< var << endl;
    //imprimir la direccion de pointvar
    cout<< "Point var es : " << pointvar <<endl;
    
    

    cout << "Cambiando el valor de la variable a 7 \n";
    //cambiar el valor de var
    var = 7;

    //imprimir el valor de var
    cout<< "var = "<< var << endl;
    // imprmir el contenido del puntero
    cout<< "el contenido del puntero es : " << *pointvar <<endl;

    cout << "Cambiando el valor de la variable a 16 atravez del contenido del puntero \n";
    *pointvar = 16;

    cout<< "var =" << var << endl;
    cout<< "el contenido del puntero es : " << *pointvar <<endl;

    return 0;
}