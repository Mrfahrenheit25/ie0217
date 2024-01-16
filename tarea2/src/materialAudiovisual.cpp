#include "materialAudiovisual.hpp"

using namespace std;

MaterialAudiovisual::MaterialAudiovisual(const string& titulo, const string& grupo, const string& autor,
                                         const string& tipoMaterial, const string& genero, int duracion,
                                         const string& estado, int precio)
    : Titulo(titulo), grupo(grupo), autor(autor), tipoMaterial(tipoMaterial),
      genero(genero), duracion(duracion), estado(estado), precio(precio) {}

void MaterialAudiovisual::imprimirInformacion() const {
    cout << "Titulo: " << Titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Tipo de Material: " << tipoMaterial << endl;
    cout << "Genero: " << genero << endl;
    cout << "Duracion: " << duracion << " minutos" << endl;
    cout << "Estado: " << estado << endl;
    cout << "Precio: " << precio << endl;
}
