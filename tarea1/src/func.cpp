#include "func.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Definicion de variables usadas
int interMin, interMax;
int dif;
/**
 * @brief Se trata de la funcion usada para mostrar el menu
 * Simple funcion con prints que identifican cada opcion que se puede tomar
 * Al final se llama una una funcion que analiza la opcion elegida 
 */
void mostrarMenu(){
    std::cout<< "\n ----Menu ----\n";
    std::cout<< "1. Iniciar juego\n";
    std::cout<< "2. Seleccionar intervalo\n";
    std::cout<< "3. Seleccione la dificultad\n";
    std::cout<< "4. Salir\n";
    elegirOpcion();
}
/**
 * @brief Funcion encargada de recibir la opcion y procesarla.
 *
 * Se pide el ingreso de una opcion y posteriormente, el switch se encarga de
 * ver cual de todas las opciones validas se selecciono para llamar a la funcion
 * requerida en el momento.
 */
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

/**
 * @brief Funcion del juego principal
 *
 * Esta parte es la encargada de ser la base y unir todas las funciones externas que se necesitan para 
 * la ejecusión del programa, llama a la función de generar número aleatorio para darle un valor a la varaible
 * de número secreto. Se usa y se importa el comando time para que esto se haga al inicio del programa, 
 * y para que no se generen numeros aleatorios repetidos al final de cada ejecusion, esto mediante el uso
 * del srand, el tiempo cambiante es lo que verdaderamente asegura que no se va a repetir ningun argumento
 * por obra de la suerte, o garantizando que sean diferentes en cada ejecusión. Posteriormente se calcula 
 * el número de intentos con el rango dividido entre 3 como lo indica el programa. FInalmente el programa,
 * dependiendo de la eleccion de dificultad, selecciona un modo de juego, uno para la dificultad dificil
 * y otro para la facil. El programa cambia de manera importante segun sea una u otra.
 * 
 */
void juego() {
    std::cout << "Bienvenido al juego de adivinanza numerica\n";

    srand(time(0));
    int numSecreto = generarNumeroAleatorio(interMin, interMax);
    // Número de intentos (un tercio del intervalo)
    int intentos = (interMax - interMin) / 3; 

    switch (dif) {
        case 1:
            modoFacil(numSecreto, intentos);
            break;
        case 2:
            modoDificil(numSecreto, intentos);
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }
}
/**
 * @brief Funcion de selccion del intervalo por el usuario
 * Si el usuario selecciona la opcion de elegir los intervalos, el programa le va a solicitar el intervalo
 * menor y el intervalo mayor de eleccion de numeros. 
 * 
 */
void intervalo() {
    
    std::cout << "Ingrese el valor min del nuevo intervalo: ";
    std::cin >> interMin;
    std::cout << "Ingrese el valor max del nuevo intervalo: ";
    std::cin >> interMax;
}

/**
 * @brief Funcion de selccion de dificultad
 * Puede verse como un submenu, en el cual el usuario tiene dos opciones de dificultad, la de principiante 
 * y la de experto, segun la opcion que se elija, el juego cambiara la retroalimentacion que se le brinda 
 * al usuario al no adivinar correctamente el numero, el principiante indica si el numero es mayor o menor
 * mientras que el experto solamente dice si el numero esta o no cerca. La opcion seleccionada posteriormente
 * es usada en un switch en la funcion juego para determinar cual de los dos modos se quiere usar
 */
void dificultad() {
    
    std::cout << "Seleccione la dificultad:\n";
    std::cout << "1. Principiante ( indica si el numero es mayor o menor)\n";
    std::cout << "2. Experto (con indicaciones si se esta cerca)\n";
    std::cin >> dif;
}

/**
 * @brief Funcion usada para generar un numero aleatorio
 *
 * Esta es la funcion encargada de seleccionar un numero aleatorio del intervalo para que el usuario lo adivine 
 * usa como parametro los valores de limite menor y superior del intervalo. Rand se encarga de generar un numero
 * aleatorio, la expresion '% (max - min + 1)', se utiliza para obtener el residuo de la división entre el resultado 
 * de rand() y (max - min + 1). Esto asegura que el número generado esté en el rango de 0 a (max - min).
 * Al final se le agrega el minimo para mover el valor deseado para que este en el rango correcto.
 * @param Aca se recibe el limite inferior del intervalo
 * @param Aca se recibe el numero superior del intervalo
 * @return Se retorna un numero aleatorio del intervalo.
 */
int generarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

/**
 * @brief Funcion usada para el modo facil
 *
 * La funcion del primer modo del juego, y la 'carne' del programa, sin esto todo seria menus y elecciones
 * mientras que el numero de intentos sea mayor a 0, el individuo podra seguir ingresando intentos al programa
 * hasta dar con el numero correcto, si el intento es igual al numero generado aleatoriamente, el programa 
 * indica que el usuario gana y se termina. Si el valor ingresado es menor al valor correcto, el programa
 * indica que el numero seccionado es mayor y si es alrevez que el numero en cuestion debe de ser menor.
 * @param Se recibe el parametro del numero secreto definido en la funcioon juego utilizando la funcion de 
 * generar numero aleatorio
 * @param Se recibe el numero de intentos calculado en la funcion de juego
 */
void modoFacil(int numSecreto, int intentos) {
    int intento;
    while (intentos > 0) {
        std::cout << "Ingrese su intento: ";
        std::cin >> intento;

        if (intento == numSecreto) {
            std::cout << "Enhorabuena,ha adivinado el numero.\n";
            std::cout<< "Saliendo ...\n";
            exit(0);      
            return;
        } else if (intento < numSecreto) {
            std::cout << "El numero es mayor.\n";
        } else {
            std::cout << "El numero es menor.\n";
        }

        intentos--;
        std::cout << "Le quedan " << intentos << " intentos.\n";
    }
    std::cout << "Lo siento, ha agotado tus intentos. El numero secreto era: " << numSecreto << ", ha perdido \n";
    std::cout<< "Saliendo ...\n";
    exit(0);      
}

/**
 * @brief Funcion usada para el modo experto
 * Funcionamiento basico igual al del modo facil, sin embargo cambia la retro alimentacion brindada al 
 * usuario. Si el valor ingresado es igual al numero aleatorio, el programa indica que el usuario gano y
 * termina. Si el numero no es el correcto, se calcula cuan diferente es este numero al valor correcto,
 * dependiendo de la distancia entre ambos, se da uno un otro mensaje para que el usuario tenga una nocion
 * de que tan cerca esta del valor real.  Si el usuario no logra adivinar los numeros en los intentos dados
 * el programa revela el numero secreto y seguidamente procede a terminar el programa.
 * @param Se recibe el parametro del numero secreto definido en la funcioon juego utilizando la funcion de 
 * generar numero aleatorio
 * @param Se recibe el numero de intentos calculado en la funcion de juego
 */
void modoDificil(int numSecreto, int intentos) {
int intento;
    while (intentos > 0) {
        std::cout << "Ingrese su intento: ";
        std::cin >> intento;

        int diferencia = std::abs(numSecreto - intento);

        if (diferencia == 0) {
            std::cout << "Enhorabuena,ha adivinado el numero.\n";
            std::cout<< "Saliendo ...\n";
            exit(0);      
            return;
        } else if (diferencia <= 5) {
            std::cout << "Y por poquito! Esta muy cerca.\n";
        } else if (diferencia <= 10) {
            std::cout << "Se esta cerca.\n";
        } else if (diferencia <= 20) {
            std::cout << "No hay suerte, esta lejos.\n";
        } else {
            std::cout << "Cero absoluto, esta muy lejos.\n";
        }

        intentos--;
        std::cout << "Le quedan " << intentos << " intentos.\n";
    }

    std::cout << "Lo siento, ha agotado sus intentos. El numero secreto era: " << numSecreto << "\n";
    std::cout<< "Saliendo ...\n";
    exit(0);
}
