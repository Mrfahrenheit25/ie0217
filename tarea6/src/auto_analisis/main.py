
from data_cleanup import ManejoDeDatos
import regression
import clustering
def main():

    manejo_datos = ManejoDeDatos("./src/auto_analisis/CAR DETAILS FROM CAR DEKHO.csv")
    manejo_datos.ejecutar_tareas()
    
    # Se ejecuta el analisis de regresion
    print("Analisis de Regresion Lineal y no lineal:")
    try:
        regression()
    except TypeError:
        print("Se ha ejecutado la regresion de forma adecuada.")

    # Se ejecuta el análisis de clustering
    print("\nAnalisis de Clustering:")
    try:
        clustering()
    except TypeError:
        print("Se ha ejecutado el clustering adecuadamente.")

if __name__ == "__main__":
    main()