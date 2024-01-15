#include <iostream>
using namespace std;

// funcion con dos parametros
void display(int var1, double var2){
    cout << "Entero: " << var1;
    cout << " y numero flotante" << var2 << endl;
}
// funcion de tipo flotante doble 
void display(double var){
    cout << " y numero flotante" << var << endl;
}
// funcion de tipo entero para un solo parametro
void display(int var){
    cout << " numero entero" << var << endl;
}
int main(){
    int a = 5;
    double b = 5.5;
    //llamar a la funcion con el entero
    display(a);
    //llamar a la funcion con el flotante
    display(b);
    //llamar a la funcion para ambos parametros
    display(a,b);

    return 0;
}