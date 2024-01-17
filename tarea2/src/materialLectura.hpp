#ifndef MATERIAL_LECTURA_HPP
#define MATERIAL_LECTURA_HPP

#include <iostream>
using namespace std;
#include <string>

    /**
     * @brief inicio la clase de materal de lectura, esta sera la base para las demas
     * clases de lectura, libro y noticia
     */
class MaterialLectura {
/**
 * @brief defino como publicos los parametros a utilizar
*/
public:
    string titulo;
    string grupo;
    string tipoMaterial;
    string autor;
    string editorial;
    string genero;
    string estado;
    int cantidadHojas;
    int precio;
    /**
     * @brief Constructor de MaterialLectura.
     * @param titulo Título del material.
     * @param grupo Grupo al que pertenece el material.
     * @param autor Autor del material.
     * @param editorial Editorial del material.
     * @param genero Género del material.
     * @param estado Estado del material (disponible, prestado, reservado).
     * @param cantidadHojas Cantidad de hojas del material.
     * @param precio Precio del material.
     */
    MaterialLectura(const string& titulo, const string& grupo, const string& tipoMaterial,
                    const string& autor, const string& editorial, const string& genero,
                    const string& estado, int cantidadHojas, int precio);
    /**
     * @brief se define la funcion de imprimir la informacion, en el cpp se abarcara con mauor profundidad
    */
    virtual void imprimirInformacion() const;
};

#endif  
