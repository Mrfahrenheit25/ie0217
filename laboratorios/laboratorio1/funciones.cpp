#include "funciones.hpp"
#include <string>

void mostrarmenu(){
    std::cout<< "\n ----Menu ----\n";
    std::cout<< "1 Agregar empleados\n";
    std::cout<< "2 Listar empleados\n";
    std::cout<< "3 Eliminar empleados\n";
    std::cout<< "4 Salir\n";
}

void proOpcion(empleado empleados[], int& numEmpleados){
    int opcion;
    std::cout<< "Ingrese una opcion: ";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1: /* Agregar empleado*/
        agregarempleado(empleados, numEmpleados);
        break;
    case 2:
        listarempleado(empleados, numEmpleados);
        break;
    case 3:
        eliminarempleado(empleados, numEmpleados);
        break;
    case 4:
        std::cout<< "Saliendo ...\n";
        exit(0);        
    default:
        std::cout<< "Opcion invalida, intente denuevo ...\n";
        break;
    }
};

void agregarempleado(empleado empleados[], int& numEmpleados){

    if(numEmpleados < MAX_EMPLEADOS){
        empleado nuevoEmpleado;
        nuevoEmpleado.id = numEmpleados + 1;

        std::cout << "Ingrese el nombre del empleado: ";
        std::cin >> nuevoEmpleado.nombre;
        
        std::cout << "Ingrese el salario del empleado: ";
        std::cin >> nuevoEmpleado.salario;

        empleados[numEmpleados++] = nuevoEmpleado;
        std::cout<<"Empleado agregado";
    }else{
        std::cout<<"Limite alcanzado";
    }
}

void listarempleado(const empleado empleados[], int& numEmpleados){
    std::cout<< "Lista de empleados\n";

    for (int i = 0; i < numEmpleados; ++i){
        std::cout<< "ID: " << empleados[i].id << ", Nombre: " <<
        empleados[i].nombre << ", Salario: " << empleados[i].salario<< "\n";
        }
    }

void eliminarempleado(empleado empleados[], int& numEmpleados){
    int idEliminar;

    std::cout <<" INgrese el ID a terminar: ";
    std:: cin >> idEliminar;

    for(int i = 0; i < numEmpleados; ++i){
        if(empleados[i].id == idEliminar){
            for ( int j = i; j < numEmpleados - 1; ++j){
                empleados[j] = empleados[j+1];
            }
            --numEmpleados;
            std::cout<< "Empleado eliminado con exito \n";
            return;
        }
    }
}

