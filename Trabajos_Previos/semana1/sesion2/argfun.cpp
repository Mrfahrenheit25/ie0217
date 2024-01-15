#include <iostream>
using namespace std;

// dar un valor
void displaynum(int n1, float n2){
    cout << "El numero es :" << n1;
    cout << " El numero flotante es :" << n2;
    
    }
    int main(){

        int num1 = 5;
        double num2 = 5.5;
        // llamar a la funcion
        displaynum(num1,num2);
        return 0 ;
    }