#include "Agenda.hpp"
#include <iostream>

int main(){
    //Objetos de la clase contactos
    Contacto<std::string> contacto1("Juanito Mora", "27681234", "dj.juanito@gmail.com");
    Contacto<std::string> contacto2("William Walker", "85548897", "willywalk@outlook.es");
    Contacto<std::string> contacto3("Juan Santa", "27681999", "quema@gmail.com");

    //Crear un objeto agenda 
    Agenda<std::string> agenda;

    // agregar contactos
    try{
    agenda.agregarContacto(contacto1);
    agenda.agregarContacto(contacto2);
    agenda.agregarContacto(contacto3);
    } catch(const std::exception& e){
        std::cerr <<"Error al agragar contacto" << e.what() << std::endl;
    }

    //Mostrar contacto
    std::cout << "Contacto en la agenda: " <<std::endl;
    agenda.mostrarContactos();

    // eliminar el contacto
    try{
        agenda.eliminarContacto("85548897");
    } catch (const std::exception& e){
        std::cerr <<"Error al eliminar el contacto" << e.what() << std::endl;
    }

    std::cout << "Contactos de la agenda: " << std::endl;
    agenda.mostrarContactos();


// Buscar el contacto
std::cout << "Buscando el contacto Juanito Mora: " << std::endl;
try {
    std::list<Contacto<std::string>> resultados = agenda.buscarContactos("Juanito Mora");
    // si encuentra algun resultado, lo imprimo en la pantalla, esto si lo que se devuelve no es vacio
    if (!resultados.empty()) {
        std::cout << "Contactos encontrados:" << std::endl;
        for (const auto& contacto : resultados) {
            std::cout << "Nombre: " << contacto.getNombre() << ", Teleono: " << contacto.getTelefono() << ", Email: " << contacto.getEmail() << std::endl;
        }
    } // si no se encuentran resultados, indica que no se obtienen resultados
     else {
        std::cout << "No se encontraron contactos." << std::endl;
    }
} catch (const std::exception& e) {
    std::cerr << "Error al buscar el contacto: " << e.what() << std::endl;
}

    

};