#ifndef VERIFICACION_EMAIL_HPP
#define VERIFICACION_EMAIL_HPP

#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>

using namespace std;

class EmailVerif {
public:
    EmailVerif();
    // Método para validar una dirección de correo electrónico
    bool verificarEmail(const string& email);

private:
    // Método privado para lanzar una excepción si la dirección de correo no contiene '@'
    void revisarArroba(const string& email);
};

#endif
