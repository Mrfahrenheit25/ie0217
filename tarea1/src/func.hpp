#ifndef func_hpp
#define func_hpp

#include <iostream>
/**
 * @brief Definicion de las variables
 * Se utiliza el extern puesto que se definieron en las funciones
 */
extern int interMin, interMax;
extern int dif;
/**
 * @brief Definicion de las funciones 
 * Aca solamente van las definiciones, propiamente la carne o el funcionamiento
 * de las mismas se define en la documentacion de las funciones en el archivo func.cpp
 */
void mostrarMenu();
void elegirOpcion();
void juego();
void intervalo();
void dificultad();
int generarNumeroAleatorio(int min, int max);
void modoFacil(int numSecreto, int intentos);
void modoDificil(int numSecreto, int intentos);

#endif
