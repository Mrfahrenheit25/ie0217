#include "verif_email.hpp"

EmailVerif::EmailVerif() {}

bool EmailVerif::verificarEmail(const string& email) {
    try {
        revisarArroba(email);

        // Expresión regular para validar la dirección de correo electrónico
        std::regex regexPatron(R"([a-zA-Z0-9](?:[a-zA-Z0-9._-]{0,13}[a-zA-Z0-9])?@[a-zA-Z]+\.[a-zA-Z]{2,4})");

        // Lanzar una excepción si no coincide con la expresión regular
        if (!std::regex_match(email, regexPatron)) {
            throw std::invalid_argument("La direccion de correo electronico no sigue el formato.");
        }

        return true; // La dirección de correo es válida
    } catch (const std::exception& e) {
        // Manejar la excepción y mostrar el mensaje de error
        cerr << "Error: " << e.what() << endl;
        return false; // La dirección de correo no es válida
    }
}

void EmailVerif::revisarArroba(const string& email) {
    // Lanzar una excepción si la dirección de correo no contiene '@'
    if (email.find('@') == string::npos) {
        throw invalid_argument("La direccion de correo electronico debe contener '@'.");
    }
}
