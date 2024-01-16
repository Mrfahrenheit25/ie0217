#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "materialLectura.hpp"
using namespace std;

class Noticia : public MaterialLectura {
private:
    string resumenContenido;
    string materialRelacionado;

public:
    Noticia(const string& titulo, const string& grupo, const string& autor,
            const string& editorial, const string& genero, const string& estado,
            int cantidadHojas, int precio, const string& resumen, const string& materialRelacionado);

    void imprimirInformacion() const override;
    string longitudNoticia() const;
};

#endif
