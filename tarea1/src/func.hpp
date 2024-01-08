#ifndef func_hpp
#define func_hpp

#include <iostream>

extern int intervaloMin, intervaloMax;
extern int dif;

void mostrarMenu();
void elegirOpcion();
void juego();
void intervalo();
void dificultad();
int generarNumeroAleatorio(int min, int max);
void modoFacil(int numeroSecreto, int intentos);
void modoDificil(int numeroSecreto, int intentos);

#endif
