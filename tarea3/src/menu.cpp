#include <iostream>
#include "matrix.hpp"
#include "operaciones_basicas.hpp"
#include "menu.hpp"

void mostrarMenu(){
    // Mostrar el menu principal
    cout << "Bienvenido a la aplicacion de operaciones con matrices" << endl;
    cout << "Elija el tipo de dato o si desea salir del programa:" << endl;
    cout << "1. Entero" << endl;
    cout << "2. Flotante" << endl;
    cout << "3. Complejo" << endl;
    cout << "4. Salir" << endl;
    
    std::cin >> opc;
    try {
        if (opc == 1) {

        // Matrz de enteros
        Matriz<int> matriz1, matriz2;

        cout << "Ingrese datos para la Matriz 1:" << endl;
        matriz1.pedirDatos();
        
        std::cout << "Ingrese datos para la Matriz 2:" << std::endl;
        matriz2.pedirDatos();

        matriz1.mostrarMatriz();
        matriz2.mostrarMatriz();

        // Mostrar el menu de operaciones
        cout << "Elija la operacion deseada:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;

        std::cin >> elec;
    
        // Hacer la operacion segun sea necesario, se llaman a las funciones adecuadas
            switch (elec) {
                // Caso de la suma
                case 1:
                if (OperacionesBasicas<int>::validarSumaResta(matriz1, matriz2)) {
                Matriz<int> suma_resultado = OperacionesBasicas<int>::suma(matriz1, matriz2);
                suma_resultado.mostrarMatriz();
                cout<< "Programa completado, saliendo ...\n";
                exit(0);
                } else {
                    cout << "No es posible realizar la suma." << endl;
                    cout<< "Saliendo ...\n";
                    exit(0);
                }
                // Caso de la resta
                case 2:
                if (OperacionesBasicas<int>::validarSumaResta(matriz1, matriz2)) {
                Matriz<int> resta_resultado = OperacionesBasicas<int>::resta(matriz1, matriz2);
                resta_resultado.mostrarMatriz();
                cout<< "Programa completado, saliendo ...\n";
                exit(0);
                } else {
                    cout << "No es posible realizar la resta." << endl;
                    cout<< "Saliendo ...\n";
                    exit(0);
                }
                // Caso de la multiplicacion
                case 3:
                if (OperacionesBasicas<int>::validarMultiplicacion(matriz1, matriz2)) {
                Matriz<int> multiplicacion_resultado = OperacionesBasicas<int>::multiplicacion(matriz1, matriz2);
                multiplicacion_resultado.mostrarMatriz();
                cout<< "Programa completado, saliendo ...\n";
                exit(0);  
                } else {
                cout << "No es posible realizar la multiplicación." << endl;
                    cout<< "Saliendo ...\n";
                    exit(0);
                }
                default:
                    break;
                }
            }
        // Ahora se trabaja con numeros flotantes 
        if (opc == 2) {
        
        Matriz<float> matriz1, matriz2;

        cout << "Ingrese datos para la Matriz 1:" << endl;
        matriz1.pedirDatos();
        
        cout << "Ingrese datos para la Matriz 2:" << endl;
        matriz2.pedirDatos();

        matriz1.mostrarMatriz();
        matriz2.mostrarMatriz();

        //Mostrar el menu de operaciones
        cout << "Elija la operacion deseada:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;

        std::cin >> elec;
    
        // Hacer el calculo segun la opcion elegida
        switch (elec) {
            case 1:
            if (OperacionesBasicas<float>::validarSumaResta(matriz1, matriz2)) {
            Matriz<float> suma_resultado = OperacionesBasicas<float>::suma(matriz1, matriz2);
            suma_resultado.mostrarMatriz();
            cout<< "Programa completado, saliendo ...\n";
            exit(0);
            } else {
                cout << "No es posible realizar la suma, matrices de distintas dimensiones." << endl;
                cout<< "Saliendo ...\n";
                exit(0);
            }
            case 2:
            if (OperacionesBasicas<float>::validarSumaResta(matriz1, matriz2)) {
            Matriz<float> resta_resultado = OperacionesBasicas<float>::resta(matriz1, matriz2);
            resta_resultado.mostrarMatriz();
            cout<< "Programa completado, saliendo ...\n";
            exit(0);
            } else {
                cout << "No es posible realizar la resta, matrices de distintas dimensiones." << endl;
                cout<< "Saliendo ...\n";
                exit(0);
            }
            case 3:
            if (OperacionesBasicas<float>::validarMultiplicacion(matriz1, matriz2)) {
            Matriz<float> multiplicacion_resultado = OperacionesBasicas<float>::multiplicacion(matriz1, matriz2);
            multiplicacion_resultado.mostrarMatriz();
            cout<< "Programa completado, saliendo ...\n";
            exit(0);  
            } else {
            cout << "No es posible realizar la multiplicación." << endl;
                cout<< "Saliendo ...\n";
                exit(0);
            }
            default:
                break;
            }
        }
        if (opc == 3) {
            cout<< "Saliendo ...\n";
            exit(0);
            }
        if (opc == 4) {
            cout<< "Saliendo ...\n";
            exit(0);
            }
    } catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

}