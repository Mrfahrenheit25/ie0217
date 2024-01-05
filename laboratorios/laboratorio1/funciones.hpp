#ifndef funciones_hpp
#define funciones_hpp
#include <string>
#include <iostream>

const int MAX_EMPLEADOS = 10;

struct empleado
{
    int id;
    std::string nombre;
    double salario;
};

void mostrarmenu();
void proOpcion(empleado empleados[], int& numEmpleados);
void agregarempleado(empleado empleados[], int& numEmpleados);
void listarempleado(const empleado empleados[], int& numEmpleados);
void eliminarempleado(empleado empleados[], int& numEmpleados);

#endif