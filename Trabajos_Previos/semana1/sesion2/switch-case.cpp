#include <iostream>
using namespace std;
int main(){
    char oper;
    float num1, num2;
    cout << "Introduzca un operador ( +, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch(oper){
        case "+":
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case "-":
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case "*":
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case "/":
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
        // el operador no corresponde a ninguna constante
        cout << "el operador no es correcto";
        break;
    }
    return 0;
}