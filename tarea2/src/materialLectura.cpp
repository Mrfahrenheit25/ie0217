#include "materialLectura.hpp"

MaterialLectura::MaterialLectura(const string& titulo, const string& grupo, const string& tipoMaterial,
                    const string& autor, const string& editorial, const string& genero,
                    const string& estado, int cantidadHojas, int precio)
    : titulo(titulo), grupo(grupo), tipoMaterial(tipoMaterial), autor(autor), editorial(editorial),
      genero(genero), estado(estado), cantidadHojas(cantidadHojas), precio(precio) {}
    /**
     * @brief se define la funcion de imprimir la informacion
     * Basicamente se toman los parametros introducidos y se imprimen de cierta manera para ser
     * entendidos o mostrados de la misma forma, no hay mucho mas
    */
void MaterialLectura::imprimirInformacion() const {
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Tipo de Material: " << tipoMaterial << endl;
    cout << "Autor: " << autor << endl;
    cout << "Editorial: " << editorial << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estado: " << estado << endl;
    cout << "Cantidad de Hojas: " << cantidadHojas << endl;
    cout << "Precio: " << precio << endl;
}
