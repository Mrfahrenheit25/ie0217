#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "materialLectura.hpp"
using namespace std;

/**
 * @brief Clase derivada de materialLectura para representar libros.
 */
class Libro : public MaterialLectura {
/**
 * @brief Atributos usados en la clase de herencia
 */    
private:
    string resumenContenido;
    string materialRelacionado;

    /**
     * @brief Constructor de Libro.
     * @param titulo Título del libro.
     * @param autor Autor del libro.
     * @param editorial Editorial del libro.
     * @param genero Género del libro.
     * @param estado Estado del libro (disponible, prestado, reservado).
     * @param cantidadHojas Cantidad de hojas del libro.
     * @param precio Precio del libro.
     * @param resumen Resumen del contenido del libro.
     * @param materialRelacionado Material relacionado que podría gustar.
     */
public:
    Libro(const string& titulo, const string& grupo, const string& autor,
          const string& editorial, const string& genero, const string& estado,
          int cantidadHojas, int precio, const string& resumen, const string& materialRelacionado);

    /**
     * @brief Método para imprimir toda la información del libro.
     */
    void imprimirInformacion() const override;
    /**
     * @brief Método que indica si el libro es corto, mediano o largo.
     * @return Cadena que indica la longitud del libro.
     */
    string longitudLibro() const;
};

#endif 
