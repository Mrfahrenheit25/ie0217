#include "libro.hpp"

Libro::Libro(const string& titulo, const string& grupo, const string& autor,
                const string& editorial, const string& genero, const string& estado,
                int cantidadHojas, int precio, const string& resumen, const string& materialRelacionado)
    : MaterialLectura(titulo, grupo, "Libro", autor, editorial, genero, estado, cantidadHojas, precio),
      resumenContenido(resumen), materialRelacionado(materialRelacionado) {}

void Libro::imprimirInformacion() const {
    MaterialLectura::imprimirInformacion();
    cout << "Resumen de contenido: " << resumenContenido << endl;
    cout << "Material relacionado: " << materialRelacionado << endl;
}
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
