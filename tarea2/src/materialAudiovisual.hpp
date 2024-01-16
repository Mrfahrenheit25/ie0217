#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include <iostream>
#include <string>

using namespace std;

class MaterialAudiovisual {
public:
    string Titulo;
    string grupo;
    string autor;
    string tipoMaterial;
    string genero;
    int duracion;
    string estado;
    int precio;

    MaterialAudiovisual(const string& titulo, const string& grupo, const string& autor, const string& tipoMaterial,
                        const string& genero, int duracion, const string& estado, int precio);

    virtual void imprimirInformacion() const;
};

#endif  // MATERIAL_AUDIOVISUAL_HPP
