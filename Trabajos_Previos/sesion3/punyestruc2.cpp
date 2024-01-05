#include <iostream>
using namespace std;

struct distancia
{
    int feet;
    float inch;

};

int main(){
    distancia *ptr, d;

    ptr = &d;

    cout<<"Ingrese la cantidad de pies: ";
    cin>> ptr->feet;
    cout<<"Ingrese la cantidad de pulgadas: ";
    cin>> ptr->inch;

    cout<< "distancia : " << ptr->feet << "pies y " << ptr->inch << "pulgadas";

    return 0;
}