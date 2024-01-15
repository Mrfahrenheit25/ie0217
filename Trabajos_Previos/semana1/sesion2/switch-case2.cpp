#include <iostream>
using namespace std;
int main(){

    int var1 = 1;
    int var2 = 2;
    int var3 = 3;

    switch(var1){
        case 1:
            cout << "caso 1 /n";
            break;
        case 2:
        case 3:
            cout << "caso final /n";
            break;
        default:
        // el operador no corresponde a ninguna constante
        cout << "caso por defecto";
        break;
    }
    return 0;
}