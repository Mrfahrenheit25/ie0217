#include "noticias.hpp"

Noticia::Noticia(const string& titulo, const string& grupo, const string& autor,
                 const string& editorial, const string& genero, const string& estado,
                 int cantidadHojas, int precio, const string& resumen, const string& materialRelacionado)
    : MaterialLectura(titulo, grupo, "Noticia", autor, editorial, genero, estado, cantidadHojas, precio),
      resumenContenido(resumen), materialRelacionado(materialRelacionado) {}
    /**
     * @brief se define la funcion de imprimir la informacion
     * Basicamente se toman los parametros introducidos y se imprimen de cierta manera para ser
     * entendidos o mostrados de la misma forma, adicionalmente se agregan ciertos parametros para 
     * hacerlo mas completo
    */
void Noticia::imprimirInformacion() const {
    MaterialLectura::imprimirInformacion();
    cout << "Resumen de contenido: " << resumenContenido << endl;
    cout << "Material relacionado: " << materialRelacionado << endl;
}
    /**
     * @brief se define la funcion indicar la longitud de una noticia
     * Esta se hace con varios condicionales, si se encuentra fuera del rango de los mismos, el largo no es 
     * valido. Si el largo es de menos de  5 paginas, esta es corta. Si es de mas de 5 pero menos de
     * 10 paginas, es mediana. Y si es de mas de 10 paginas, es larga.
    */
string Noticia::longitudNoticia() const {
    if (cantidadHojas <= 5) {
        return "Corta";
    } else if (cantidadHojas <= 10) {
        return "Mediana";
    } else if ( 10 < cantidadHojas) {
        return "Larga";
    } else {
        return "numero invalido";
    }
}
