from alergias import Alergia
from evaluacion_Especifica import EvaluacionEspecifica
from tipos_de_alergia import TiposAlergia
from evaluacion_general import EvaluacionGeneral


def mostrar_menu():
    print("Bienvenido al Sistema de Evaluación de Alergias")
    print("1. Ingresar puntuación de alergias y ver lista de alergias sensibles")
    print("2. Ingresar tipos de alergias y calcular puntaje total")
    print("3. Mostrar alergias y puntajes predeterminados")
    print("4. Salir")

def ingresar_puntuacion_alergias():
    try:
        puntuacion = int(input("Ingrese su puntuación de alergia: "))
        evaluacion_especifica = EvaluacionEspecifica(puntuacion)
        evaluacion_especifica.evaluacion_alergias()
        evaluacion_especifica.imprimir()
    except ValueError:
        print("Error: La puntuación de alergia debe ser un número entero.")
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
                    


def mostrar_alergias():
    alergia = Alergia()
    alergia.mostrar()

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
            print("Gracias por usar nuestro sistema. Hasta pronto!")
            break
        else:
            print("Opcion no valida. Por favor, seleccione una opcion valida.")
