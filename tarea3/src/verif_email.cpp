#include "verif_email.hpp"

EmailVerif::EmailVerif() {}

bool EmailVerif::verificarEmail(const string& email) {
    try {
        revisarArroba(email);

        // Expresion regular para validar la direccion de correo electronico
        std::regex regexPatron(R"([a-zA-Z0-9](?:[a-zA-Z0-9._-]{0,13}[a-zA-Z0-9])?@[a-zA-Z]+\.[a-zA-Z]{2,4})");

        // Lanza una excepcion si no coincide con la expresion regular
        if (!std::regex_match(email, regexPatron)) {
            throw std::invalid_argument("La direccion de correo electronico no sigue el formato.");
        }

        // El correo es valido
        return true; 
    } catch (const std::exception& e) {
        // Manejar la excepción y mostrar el mensaje de error
        cerr << "Error: " << e.what() << endl;
        // El correo no es valido
        return false; 
    }
}

void EmailVerif::revisarArroba(const string& email) {
    // Lanza una excepcion si la direccion de correo no contiene '@'
    if (email.find('@') == string::npos) {
        throw invalid_argument("La direccion de correo electronico debe contener '@'.");
    }
}
