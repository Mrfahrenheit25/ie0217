#include "func.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int intervaloMin, intervaloMax;
int dif;

void mostrarMenu(){
    std::cout<< "\n ----Menu ----\n";
    std::cout<< "1. Iniciar juego\n";
    std::cout<< "2. Seleccionar intervalo\n";
    std::cout<< "3. Seleccione la dificultad\n";
    std::cout<< "4. Salir\n";
    elegirOpcion();
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

void juego() {
    std::cout << "Bienvenido al juego de adivinanza numerica\n";

    srand(time(0));
    int numeroSecreto = generarNumeroAleatorio(intervaloMin, intervaloMax);

    int intentos = (intervaloMax - intervaloMin) / 3; // Número de oportunidades (un tercio del intervalo)

    switch (dif) {
        case 1:
            modoFacil(numeroSecreto, intentos);
            break;
        case 2:
            modoDificil(numeroSecreto, intentos);
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }
}

void intervalo() {
    // Pide al usuario que ingrese el nuevo intervalo
    std::cout << "Ingrese el valor min del nuevo intervalo: ";
    std::cin >> intervaloMin;
    std::cout << "Ingrese el valor max del nuevo intervalo: ";
    std::cin >> intervaloMax;
}

void dificultad() {
    // Pide al usuario que elija la dificultad
    std::cout << "Seleccione la dificultad:\n";
    std::cout << "1. Principiante ( indica si el numero es mayor o menor)\n";
    std::cout << "2. Experto (con indicaciones si se esta cerca)\n";
    std::cin >> dif;
}

int generarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void modoFacil(int numeroSecreto, int intentos) {
    int intento;
    while (intentos > 0) {
        std::cout << "Ingrese su intento: ";
        std::cin >> intento;

        if (intento == numeroSecreto) {
            std::cout << "Enhorabuena,ha adivinado el numero.\n";
            std::cout<< "Saliendo ...\n";
            exit(0);      
            return;
        } else if (intento < numeroSecreto) {
            std::cout << "El numero es mayor.\n";
        } else {
            std::cout << "El numero es menor.\n";
        }

        intentos--;
        std::cout << "Le quedan " << intentos << " intentos.\n";
    }
    std::cout << "Lo siento, ha agotado tus intentos. El numero secreto era: " << numeroSecreto << ", ha perdido \n";
    std::cout<< "Saliendo ...\n";
    exit(0);      
}


void modoDificil(int numeroSecreto, int intentos) {
       
}
