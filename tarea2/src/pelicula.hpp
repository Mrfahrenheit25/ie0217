#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "materialAudiovisual.hpp"

class Pelicula : public MaterialAudiovisual {
private:
    string resumenContenido;
    string materialRelacionado;

public:
    Pelicula(const string& titulo, const string& grupo, const string& autor,
             const string& tipoMaterial, const string& genero, int duracion,
             const string& estado, int precio, const string& resumen, const string& materialRelacionado);

    void imprimirInformacion() const override;
    string longitudPelicula() const;
};

#endif