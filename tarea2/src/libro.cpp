#include "libro.hpp"

Libro::Libro(const string& titulo, const string& grupo, const string& autor,
                const string& editorial, const string& genero, const string& estado,
                int cantidadHojas, int precio, const string& resumen, const string& materialRelacionado)
    : MaterialLectura(titulo, grupo, "Libro", autor, editorial, genero, estado, cantidadHojas, precio),
      resumenContenido(resumen), materialRelacionado(materialRelacionado) {}

    /**
     * @brief se define la funcion de imprimir la informacion
     * Basicamente se toman los parametros introducidos y se imprimen de cierta manera para ser
     * entendidos o mostrados de la misma forma, adicionalmente se agregan ciertos parametros para 
     * hacerlo mas completo
    */
void Libro::imprimirInformacion() const {
    MaterialLectura::imprimirInformacion();
    cout << "Resumen de contenido: " << resumenContenido << endl;
    cout << "Material relacionado: " << materialRelacionado << endl;
}
    /**
     * @brief se define la funcion indicar la longitud de un libro
     * Esta se hace con varios condicionales, si se encuentra fuera del rango de los mismos, el largo no es 
     * valido. Si el alrgo es de menos de 100 paginas, este es corto. Si es de mas de 100 pero menos de
     * 200 paginas, es mediano. Y si es de mas de 200 paginas, es largo.
    */
string Libro::longitudLibro() const {
    if (cantidadHojas <= 100) {
        return "Corto";
    } else if (cantidadHojas <= 200) {
        return "Mediano";
    } else if( 200 < cantidadHojas) {
        return "Largo";
    } else {
        return "Paginas invalidas";
    }
}
