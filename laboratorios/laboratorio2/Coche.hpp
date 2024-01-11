#ifndef COCHE_HPP
#define COCHE_HPP

#include "vehiculo.hpp"

#include <iostream>
using namespace std;

class Coche : public Vehiculo{
    public:
    Coche(int velocidad, int numPuertas);
    void abrirPuertas();

    protected:
    int numPuertas;
    };

#endif