#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "materialAudiovisual.hpp"

/**
 * @brief Clase derivada de MaterialAudiovisual para representar podcasts.
 */
class Podcast : public MaterialAudiovisual {
/**
 * @brief Atributos usados en la clase de herencia
 */    
private:
    string resumenContenido;
    string materialRelacionado;

public:
    /**
     * @brief Constructor de Podcast.
     * @param titulo Título del podcast.
     * @param autor Autor del podcast.
     * @param genero Género del podcast.
     * @param duracion Duración del podcast en minutos.
     * @param estado Estado del podcast (disponible, prestado, reservado).
     * @param precio Precio del podcast.
     * @param resumen Resumen del contenido del podcast.
     * @param materialRelacionado Material relacionado que podría gustar.
     */
    Podcast(const string& titulo, const string& grupo, const string& autor,
            const string& tipoMaterial, const string& genero, int duracion,
            const string& estado, int precio, const string& resumen, const string& materialRelacionado);
     /**
     * @brief Método para imprimir toda la información del podcast.
     */
    void imprimirInformacion() const override;
    /**
     * @brief Método que indica si el podcast es corto, mediano o largo.
     * @return Cadena que indica la longitud del podcast.
     */
    string longitudPodcast() const;
};

#endif 