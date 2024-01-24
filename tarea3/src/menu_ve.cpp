#include <iostream>
#include "verif_email.hpp"
#include "menu_ve.hpp"


void mostrarMenu(){
    // Crea un objeto EmailValidator
    EmailVerif emailVerif;

    // Solicita al usuario que ingrese un correo electronico
    string userInput;
    cout << "Ingrese una direccion de correo electronico: ";
    cin >> userInput;

    // Valida la direccion e imprime el resultado
    if (emailVerif.verificarEmail(userInput)) {
        cout << "La direccion de correo electronico es valida." << endl;
        cout<< "Saliendo ...\n";
        exit(0);
        
    } else {
        cout << "La direccion de correo electronico no es valida." << endl;
        cout<< "Saliendo ...\n";
        exit(0);
    }
}