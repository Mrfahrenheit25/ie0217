#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Clase base para materiales audiovisuales, 
 * sera la base para las peliculas y el podcast.
 */
class MaterialAudiovisual {
    /**
     * @brief inicio la clase de materal de lectura, esta sera la base para las demas
     * clases de lectura, libro y noticia
     */
public:
    string Titulo;
    string grupo;
    string autor;
    string tipoMaterial;
    string genero;
    int duracion;
    string estado;
    int precio;
    /**
     * @brief Constructor de MaterialAudiovisual.
     * @param titulo Título del material.
     * @param grupo Grupo al que pertenece el material (audiovisual).
     * @param autor Autor del material.
     * @param tipoMaterial Tipo de material (película, podcast, etc.).
     * @param genero Género del material.
     * @param duracion Duración del material en minutos.
     * @param estado Estado del material (disponible, prestado, reservado).
     * @param precio Precio del material.
     */
    MaterialAudiovisual(const string& titulo, const string& grupo, const string& autor, const string& tipoMaterial,
                        const string& genero, int duracion, const string& estado, int precio);
    /**
     * @brief se define la funcion de imprimir la informacion, en el cpp se abarcara con mayor profundidad
    */
    virtual void imprimirInformacion() const;
};

#endif  
