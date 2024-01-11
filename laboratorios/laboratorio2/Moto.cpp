#include "Moto.hpp"

Moto::Moto(int velocidad, bool tieneCasco): Vehiculo(velocidad), tieneCasco(tieneCasco) {}

void Moto::usarCasco(){
if(tieneCasco){
    cout<< "usando casco mientras conduce" << endl;
} else {
    cout<< "no usa casco mientras conduce" << endl;

    }
}