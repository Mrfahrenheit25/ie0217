#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "materialAudiovisual.hpp"

class Podcast : public MaterialAudiovisual {
private:
    string resumenContenido;
    string materialRelacionado;

public:
    Podcast(const string& titulo, const string& grupo, const string& autor,
            const string& tipoMaterial, const string& genero, int duracion,
            const string& estado, int precio, const string& resumen, const string& materialRelacionado);

    void imprimirInformacion() const override;
    string longitudPodcast() const;
};

#endif 