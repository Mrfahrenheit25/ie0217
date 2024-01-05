#include <iostream>
#include "funciones.hpp"


int main(){

    empleado empleados[MAX_EMPLEADOS];
    int numEmpleados = 0;
    while(1){
      mostrarmenu();
      proOpcion(empleados, numEmpleados);
    }
    
    return 0;
}