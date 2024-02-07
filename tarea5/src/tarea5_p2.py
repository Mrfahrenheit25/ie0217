
import numpy as np
import pandas as pd
np.random.seed(25)

def prom_estu(datos):
    # Se omite la columna "Nombre" para calcular el promedio
    return datos.set_index("Nombre").mean(axis=1)

def prom_asig(datos):
    # Se omite la columna "Nombre" 
    return datos.set_index("Nombre").mean()


def max_cal_estu(datos):
    # Se omite la columna "Nombre" para ver la calificacion max
    return datos.set_index("Nombre").max(axis=1)

def sum_tot_asig(datos):
    # Se omite la columna "Nombre" para ver la calificacion max
    return datos.set_index("Nombre").sum()

# Clases
clases = ["Ciencias", "Mate", "Frances", "Inglés", "Hogar"]

# Nombres de estudiantes
nombres_estudiantes = ["Juan", "Lupe", "Miguel", "Daniela", "Aaron"]

# Se crea un DataFrame con calificaciones aleatorias
calificaciones = np.random.randint(55, 100, size=(5, 5))

# Se crea un DataFrame en Pandas con columnas para asignatura
datos = pd.DataFrame(calificaciones, columns=clases)

# Se agrega una columna para los nombres
datos["Nombre"] = nombres_estudiantes

# Se reorganizan las columnas para tener "Nombre" al principio
column_order = ["Nombre"] + clases
datos = datos[column_order]

# Imprimir el DataFrame resultante y demas resultados
print("Datos con columnas por asignatura:")
print(datos, '\n')

print("Promedio por asignatura:\n", prom_asig(datos), sep="")

print("\nPromedio por estudiante:\n", prom_estu(datos))

print("\nCalificación máxima por estudiante:\n", max_cal_estu(datos))

print("\nSuma total por asignatura:\n", sum_tot_asig(datos), sep="")