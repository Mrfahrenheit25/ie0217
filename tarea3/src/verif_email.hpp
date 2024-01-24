#ifndef VERIFICACION_EMAIL_HPP
#define VERIFICACION_EMAIL_HPP

#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>

using namespace std;
/**
 * @brief Clase para validar direcciones de correo electronico
 */
class EmailVerif {
public:
    /**
     * @brief Constructor por defecto de la clase EmailVerif
     */
    EmailVerif();
    /**
     * @brief Valida o verifica una dirección de correo electrónico.
     *
     * @param email Cadena que representa el correo electronico a validar.
     * @return es un booleano, true si la direccion de correo es valida, false si no lo es.
     * @throw invalid_argument si la direccion de correo no sigue el formato estandar.
     */
    bool verificarEmail(const string& email);

private:
    /**
     * @brief Verifica si la dirección de correo contiene el símbolo '@'.
     *
     * @param email Cadena que representa el correo electronico.
     * @throw invalid_argument si el correo no contiene '@'.
     */    
    void revisarArroba(const string& email);
};

#endif
