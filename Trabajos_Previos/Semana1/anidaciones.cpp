#include <iostream>
using namespace std;
int main(){

    int num;

    cout<< "Enter an integer: ";
    cin >> num;

    // condicion de afuera
    if(num != 0){
        // condicion de afuera
        if(num>0){
            cout << "El numero es positivo" << endl;

        }
        else {
            cout << "El numero es negativo" << endl;
        }
    }
    else {
        cout << " El numero es 0" << endl;
    }
    cout << "esta linea siempre se escribe " << endl;

    return 0;
}