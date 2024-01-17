#include "podcast.hpp"

Podcast::Podcast(const string& titulo, const string& grupo, const string& autor,
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
void Podcast::imprimirInformacion() const {
    MaterialAudiovisual::imprimirInformacion();
    cout << "Resumen de Contenido: " << resumenContenido << endl;
    cout << "Material Relacionado: " << materialRelacionado << endl;
}
    /**
     * @brief se define la funcion indicar la longitud de un podcast
     * Esta se hace con varios condicionales, si se encuentra fuera del rango de los mismos, el largo no es 
     * valido. Si la duracion de la pelicula es de menos de 30 minutos, esta es corta. Si es de mas de 30 pero menos de
     * 90 minutos, es mediana. Y si es de mas de 90 minutos, es larga.
    */
string Podcast::longitudPodcast() const {
    if (duracion <= 30) {
        return "Corta";
    } else if (duracion <= 90) {
        return "Mediana";
    } else if( 90 < duracion) {
        return "Larga";
    }else {
        return "caracter invalido";
    }
}

