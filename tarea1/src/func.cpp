#include "func.hpp"


void mostrarMenu(){
    std::cout<< "\n ----Menu ----\n";
    std::cout<< "1. Iniciar juego\n";
    std::cout<< "2. Seleccionar intervalo\n";
    std::cout<< "3. Seleccione la dificultad\n";
    std::cout<< "4. Salir\n";
}

void elegirOpcion(){
    int opc;
    std::cout<< "Ingrese una opcion: ";
    std::cin >> opc;
    switch (opc)
    {
    case 1: /* Caso 1, incia el juego*/
        juego();
        break;
    case 2: /*Caso 2, Se selecciona el intervalo de valores*/
        intervalo();
        break;
    case 3: /*Caso 3, Se selecciona la dificultad*/    
        dificultad();
        break;
    case 4: /*Caso 4: Se termina el programa */
        std::cout<< "Saliendo ...\n";
        exit(0);      
    default:
        break;
    }

}