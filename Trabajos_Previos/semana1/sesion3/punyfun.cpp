#include <iostream>
using namespace std;

void swap(int &n1, int &n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(){ 

    int a = 1, b = 2;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // llamar a la funcion que cambia
    swap(a, b);

    cout<<"Luego de cambiar" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}