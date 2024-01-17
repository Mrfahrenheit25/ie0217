#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "materialAudiovisual.hpp"
/**
 * @brief Clase derivada de MaterialAudiovisual para representar películas.
 */

class Pelicula : public MaterialAudiovisual {
/**
 * @brief Atributos usados en la clase de herencia
 */    
private:
    string resumenContenido;
    string materialRelacionado;

public:
    /**
     * @brief Constructor de Pelicula.
     * @param titulo Título de la película.
     * @param autor Autor de la película.
     * @param genero Género de la película.
     * @param duracion Duración de la película en minutos.
     * @param estado Estado de la película (disponible, prestado, reservado).
     * @param precio Precio de la película.
     * @param resumen Resumen del contenido de la película.
     * @param materialRelacionado Material relacionado que podría gustar.
     */
    Pelicula(const string& titulo, const string& grupo, const string& autor,
             const string& tipoMaterial, const string& genero, int duracion,
             const string& estado, int precio, const string& resumen, const string& materialRelacionado);
    /**
     * @brief Método para imprimir toda la información de la película.
     */
    void imprimirInformacion() const override;
        /**
     * @brief Método que indica si la película es corta, mediana o larga.
     * @return Cadena que indica la longitud de la película.
     */
    string longitudPelicula() const;
};

#endif