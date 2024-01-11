#include "vehiculo.hpp"


Vehiculo::Vehiculo(int velocidad){
    this->velocidad = velocidad;
}

void Vehiculo::acelerar(){
    cout << "acelerando a " << velocidad << "km/h" << endl;
}
void Vehiculo::frenar(){
    cout << "frenando a" << velocidad << "km/h" << endl;
}

