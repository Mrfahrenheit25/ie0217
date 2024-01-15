#include <iostream>
using namespace std;
int main(){

    int var =5;

    //declare la variable pointer
    int* pointvar;

    //guarde la direccion de la variable
    pointvar = &var;

    //imprimir el valor de var
    cout<< "var = "<< var << endl;

    //imprimir la direccion de var

    cout<< "direccion de var: " << &var <<endl;

    //imprimir la direccion de pointvar

    cout<< "Point var es : " << pointvar <<endl;

    // imprmir el contenido del puntero
    cout<< "el contenido del puntero es : " << *pointvar <<endl;

    return 0;
}