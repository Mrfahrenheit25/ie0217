# Se importa todo
from alergias import Alergia
from evaluacion_Especifica import EvaluacionEspecifica
from tipos_de_alergia import TiposAlergia
from evaluacion_general import EvaluacionGeneral

'''Funcion para mostrar el menu'''
def mostrar_menu():
    print("Bienvenido al Sistema de Evaluación de Alergias")
    print("1. Ingresar puntuación de alergias y ver lista de alergias sensibles")
    print("2. Ingresar tipos de alergias y calcular puntaje total")
    print("3. Mostrar alergias y puntajes predeterminados")
    print("4. Agregar valores a la nueva lista ")
    print("5. Salir")

'''Funcion hecha para mostrar las alergias segun la puntuacion dada, usa la clase de evaluacion_especifica'''
def ingresar_puntuacion_alergias():
    try:
        puntuacion = int(input("Ingrese su puntuación de alergia: "))
        evaluacion_especifica = EvaluacionEspecifica(puntuacion)
        evaluacion_especifica.evaluacion_alergias()
        evaluacion_especifica.imprimir()
    except ValueError:
        print("Error: La puntuación de alergia debe ser un número entero.")

'''Funcion hecha para realizar una consulta de los valores no dados en la lista predeterminada, tiene sus particularidades
    acepta los valores nulos como para metros para el nombre y valores, pero si es asi los clasifica en una lista aparte
    como valor sin nombre y nombre sin valor respectivamente, solo si el valor es potencia de 2 se agrega a la lista.
    ademas, este usa la clase evaluacion_general para hacer el trabajo'''        
def consultar_alergias():
    alergias_nuevas_persona = []
    while True:
        nombre = input("Ingrese el nombre de la alergia evaluada o 'salir' para terminar y mostrar los datos: ")
        if nombre.lower() == 'salir':
            break
        valor = input(f"Ingrese el valor de la alergia {nombre} (solo potencias de dos se toman como validos): ")
        alergias_nuevas_persona.append(nombre)
        alergias_nuevas_persona.append(valor)
                
    nuevasAlergias = EvaluacionGeneral(alergias_nuevas_persona)
    nuevasAlergias.evaluacion_general()
                    

'''metodo encargado de mostrar los datos de la clase alergia, tanto todas las alergias en el diccionario base, como
    las nuevas alergias, aparte de poderlas buscar parte por parte.'''
def mostrar_alergias():
    alergia = Alergia()
    alergia.mostrar()
'''Se crea una nueva alergia '''
def creacion_alergia():
    alergia = Alergia()
    alergia.crearAlergia()

'''Se muestra el menu y lo correspondiente al main'''
if __name__ == "__main__":
    while True:
        mostrar_menu()
        opcion = input("Seleccione una opción: ")

        if opcion == "1":
            ingresar_puntuacion_alergias()
        elif opcion == "2":
            consultar_alergias()
        elif opcion == "3":
            mostrar_alergias()
        elif opcion == "4":
            creacion_alergia()
        elif opcion == "5":
            print("Gracias por usar nuestro sistema. Hasta pronto!")
            break
        else:
            print("Opcion no valida. Por favor, seleccione una opcion valida.")
