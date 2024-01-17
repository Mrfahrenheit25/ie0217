#include "podcast.hpp"

Podcast::Podcast(const string& titulo, const string& grupo, const string& autor,
                 const string& tipoMaterial, const string& genero, int duracion,
                 const string& estado, int precio, const string& resumen, const string& materialRelacionado)
    : MaterialAudiovisual(titulo, grupo, autor, tipoMaterial, genero, duracion, estado, precio),
      resumenContenido(resumen), materialRelacionado(materialRelacionado) {}

void Podcast::imprimirInformacion() const {
    MaterialAudiovisual::imprimirInformacion();
    cout << "Resumen de Contenido: " << resumenContenido << endl;
    cout << "Material Relacionado: " << materialRelacionado << endl;
}

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

