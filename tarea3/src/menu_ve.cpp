#include <iostream>
#include "verif_email.hpp"
#include "menu_ve.hpp"


void mostrarMenu(){
    // Crear un objeto EmailValidator
    EmailVerif emailVerif;

    // Solicitar al usuario que ingrese una dirección de correo electrónico
    string userInput;
    cout << "Ingrese una direccion de correo electronico: ";
    cin >> userInput;

    // Validar la dirección de correo electrónico e imprimir el resultado
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