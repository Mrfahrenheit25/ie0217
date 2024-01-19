#include "Agenda.hpp"


template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    // Verifica si existe el contacto
    typename std::list<Contacto<T> >::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++){
        if (it ->getTelefono()== contacto.getTelefono()) {
            throw std::invalid_argument("Ya existe un contacto con el numero");
        }
    }
    //Se agrega el contacto
    contactos.push_back(contacto);
}
template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    // Verifica si existe el contacto
    typename std::list<Contacto<T> >::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == telefono){
           contactos.erase(it);
           return;
        }
    }
    //Se agrega el contacto
    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

template <typename T> 
void Agenda<T>::mostrarContactos() const{
    typename std::list<Contacto<T> > ::const_iterator it;
    for(it = contactos.begin(); it != contactos.end(); ++it){
        std::cout << "Nombre: " << it->getNombre() << " "
                  << "Telefono: " << it->getTelefono() << " "
                  << "Email: " << it->getEmail() << std::endl;
    }
}
// Funcion de busqueda, toma el parametro patron para buscar lo que tiene que encontrar, al
// devuelve la lista de resultados que coinciden 
template <typename T>
std::list<Contacto<T> > Agenda<T>::buscarContactos(const std::string& patron) const{
    std::list<Contacto<T> > resultados;
    // el pos se encarga de almacenar la posicion de coincidencia del patron dentro de lo que encuentre
    // usando it como el iterador. Si no se encuentra en el nombre, se busca en el correo electronico.
    // Si se encuentra se muestra en resultados.
    std::string::size_type pos;
    typename std::list<Contacto<T> >::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); ++it){
        pos = it->getNombre().find(patron);
        if (pos != std::string::npos) {
            resultados.push_back(*it);
        } else {
            pos = it->getEmail().find(patron);
            if (pos != std::string::npos){
                resultados.push_back(*it);
            }
        }
    }
    return resultados;
}
