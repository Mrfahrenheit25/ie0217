#include <iostream>
using namespace std;

//proto tipo funcion 
int add(int, int);

int main(){
    int sum;
    // llamando a la funcion y almacenando
    // devuelvo el resultado de la suma 
    sum = add(100, 78);
    cout<< "100 + 78 = " << sum << endl;
    return 0;
}
// definicion de la duncion 
int add(int a, int b){
    return(a + b);
}