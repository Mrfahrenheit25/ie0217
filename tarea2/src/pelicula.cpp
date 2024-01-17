#include "pelicula.hpp"

Pelicula::Pelicula(const string& titulo, const string& grupo, const string& autor,
                   const string& tipoMaterial, const string& genero, int duracion,
                   const string& estado, int precio, const string& resumen, const string& materialRelacionado)
    : MaterialAudiovisual(titulo, grupo, autor, tipoMaterial, genero, duracion, estado, precio),
      resumenContenido(resumen), materialRelacionado(materialRelacionado) {}
    /**
     * @brief se define la funcion de imprimir la informacion
     * Basicamente se toman los parametros introducidos y se imprimen de cierta manera para ser
     * entendidos o mostrados de la misma forma, adicionalmente se agregan ciertos parametros para 
     * hacerlo mas completo
    */
void Pelicula::imprimirInformacion() const {
    MaterialAudiovisual::imprimirInformacion();
    cout << "Resumen de contenido: " << resumenContenido << endl;
    cout << "Material relacionado: " << materialRelacionado << endl;
}

    /**
     * @brief se define la funcion indicar la longitud de una pelicula
     * Esta se hace con varios condicionales, si se encuentra fuera del rango de los mismos, el largo no es 
     * valido. Si la duracion de la pelicula es de menos de 90, esta es corta. Si es de mas de 90 pero menos de
     * 150 es mediana. Y si es de mas de 150, es larga.
    */
string Pelicula::longitudPelicula() const {
    if (duracion <= 90) {
        return "Corta";
    } else if (duracion <= 150) {
        return "Mediana";
    } else if(150 < duracion) {
        return "Larga";
    } else {
        return "caracter invalido";
    }
}
