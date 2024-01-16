#include "pelicula.hpp"

Pelicula::Pelicula(const string& titulo, const string& grupo, const string& autor,
                   const string& tipoMaterial, const string& genero, int duracion,
                   const string& estado, int precio, const string& resumen, const string& materialRelacionado)
    : MaterialAudiovisual(titulo, grupo, autor, tipoMaterial, genero, duracion, estado, precio),
      resumenContenido(resumen), materialRelacionado(materialRelacionado) {}

void Pelicula::imprimirInformacion() const {
    MaterialAudiovisual::imprimirInformacion();
    cout << "Resumen de contenido: " << resumenContenido << endl;
    cout << "Material relacionado: " << materialRelacionado << endl;
}

string Pelicula::longitudPelicula() const {
    if ( 0 < duracion <= 90) {
        return "Corta";
    } else if ( 90 < duracion <= 150) {
        return "Mediana";
    } else if(150 < duracion) {
        return "Larga";
    } else {
        return "caracter invalido";
    }
}
