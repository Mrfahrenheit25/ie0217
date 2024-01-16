#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "materialLectura.hpp"
using namespace std;

class Libro : public MaterialLectura {
private:
    string resumenContenido;
    string materialRelacionado;

public:
    Libro(const string& titulo, const string& grupo, const string& autor,
          const string& editorial, const string& genero, const string& estado,
          int cantidadHojas, int precio, const string& resumen, const string& materialRelacionado);

    void imprimirInformacion() const override;
    string longitudLibro() const;
};

#endif 
