#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "materialLectura.hpp"
using namespace std;
/**
 * @brief Clase derivada de materialLectura para representar las noticas.
 */

class Noticia : public MaterialLectura {
/**
 * @brief Atributos usados en la clase de herencia, el resumen del contenido y el material relacionado
 */    
private:
    string resumenContenido;
    string materialRelacionado;

    /**
     * @brief Constructor de Noticia.
     * @param titulo Título de la noticia.
     * @param autor Autor de la noticia.
     * @param editorial Editorial de la noticia.
     * @param genero Género de la noticia.
     * @param estado Estado de la noticia (disponible, prestado, reservado).
     * @param cantidadHojas Cantidad de hojas de la noticia.
     * @param precio Precio de la noticia.
     * @param resumen Resumen del contenido de la noticia.
     * @param materialRelacionado Material relacionado que podría gustar.
     */
public:
    Noticia(const string& titulo, const string& grupo, const string& autor,
            const string& editorial, const string& genero, const string& estado,
            int cantidadHojas, int precio, const string& resumen, const string& materialRelacionado);

    /**
     * @brief Método para imprimir toda la información de la noticia.
     */
    void imprimirInformacion() const override;
    /**
     * @brief Método que indica si la noticia es corta, mediana o larga.
     * @return Cadena que indica la longitud de la noticia.
     */
    string longitudNoticia() const;
};

#endif
