#include <iostream>
using namespace std;
int main(){ 
    float arreglo[3];
    //se declara la variable pointer
    float *puntero;
    cout << "Usando arreglos" << endl;
    for(int i = 0; i < 3; ++i){
        cout << "&arreglo[" << i << "] = " << &arreglo[i] << endl;

    }
puntero = arreglo;
cout << "Usando punteros" << endl;
    for(int i = 0; i < 3; ++i){
        cout << "puntero +" << i << " = " << &arreglo[i] << endl;
        }
    return 0;
}
