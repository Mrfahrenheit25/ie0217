# include "Coche.hpp"

Coche::Coche(int velocidad, int numPuertas) : Vehiculo(velocidad), numPuertas(numPuertas){}

void Coche::abrirPuertas(){
    // codigo sensores
    cout << "abriendo " << numPuertas << " puertas del coche" << endl;
}