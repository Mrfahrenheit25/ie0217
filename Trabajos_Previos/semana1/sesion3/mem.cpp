#include <iostream>
using namespace std;

int main(){
    int var1 = 3;   
    int var2 = 24;
    int var3 =  17;

    // imprimir la dirrecion de la variable 1
    cout << "Dirrecion variable 1: "<< &var1 << endl;
    // imprimir la dirrecion de la variable 1
    cout << "Dirrecion variable 2: "<< &var2 << endl;
    // imprimir la dirrecion de la variable 1
    cout << "Dirrecion variable 3: "<< &var3 << endl;

    return 0;
}