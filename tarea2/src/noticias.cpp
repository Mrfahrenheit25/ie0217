#include "noticias.hpp"

Noticia::Noticia(const string& titulo, const string& grupo, const string& autor,
                 const string& editorial, const string& genero, const string& estado,
                 int cantidadHojas, int precio, const string& resumen, const string& materialRelacionado)
    : MaterialLectura(titulo, grupo, "Noticia", autor, editorial, genero, estado, cantidadHojas, precio),
      resumenContenido(resumen), materialRelacionado(materialRelacionado) {}

void Noticia::imprimirInformacion() const {
    MaterialLectura::imprimirInformacion();
    cout << "Resumen de contenido: " << resumenContenido << endl;
    cout << "Material relacionado: " << materialRelacionado << endl;
}

string Noticia::longitudNoticia() const {
    if ( 0 < cantidadHojas <= 5) {
        return "Corta";
    } else if ( 5 < cantidadHojas <= 10) {
        return "Mediana";
    } else if ( 10 < cantidadHojas) {
        return "Larga";
    } else {
        return "numero invalido";
    }
}
