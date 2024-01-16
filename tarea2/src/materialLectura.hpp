#ifndef MATERIAL_LECTURA_HPP
#define MATERIAL_LECTURA_HPP

#include <iostream>
using namespace std;
#include <string>

class MaterialLectura {
public:
    string titulo;
    string grupo;
    string tipoMaterial;
    string autor;
    string editorial;
    string genero;
    string estado;
    int cantidadHojas;
    int precio;

    MaterialLectura(const string& titulo, const string& grupo, const string& tipoMaterial,
                    const string& autor, const string& editorial, const string& genero,
                    const string& estado, int cantidadHojas, int precio);

    virtual void imprimirInformacion() const;
};

#endif  
