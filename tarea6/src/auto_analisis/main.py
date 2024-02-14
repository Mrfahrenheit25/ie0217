
from data_cleanup import ManejoDeDatos
import regression
import clustering
def main():

    manejo_datos = ManejoDeDatos("CAR DETAILS FROM CAR DEKHO.csv")
    manejo_datos.ejecutar_tareas()
    
    # Se ejecuta el analisis de regresion
    print("Analisis de Regresion Lineal y no lineal:")
    regression()
    # se ejecuta el analisis de clustering
    print("\nAnalisis de Clustering:")
    clustering()

if __name__ == "__main__":
    main()