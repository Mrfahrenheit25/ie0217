# Se importa la biblioteca pandas
import pandas as pd

# Se lee el archivo CSV en un DataFrame llamado 'datos'
datos = pd.read_csv("datos.csv")

# Se muestra las primeras 2 filas del DataFrame
print("Primeras 2 filas del DataFrame:")
print(datos.head(2))

# Se muestra todo el DataFrame
print("\nTodo el DataFrame:")
print(datos)

# Se muestra información detallada sobre el DataFrame
print("\nInformación detallada sobre el DataFrame:")
print(datos.info())

# Se seleccionan las columnas 'edad' y 'altura' y se muestran las primeras filas
print("\nSeleccionando las columnas 'edad' y 'altura' y mostrando las primeras filas:")
edad_altura = datos[['edad', 'altura']]
print(edad_altura.head())

# Se muestra el tipo de datos de la selección de columnas
print("\nTipo de datos de la selección de columnas 'edad' y 'altura':")
print(type(datos[["edad", "altura"]]))

# Se filtra el DataFrame para obtener solo las filas donde la edad es mayor a 18
print("\nFiltrando el DataFrame para obtener personas mayores de 18 años:")
adultos = datos[datos["edad"] > 18]
print(adultos.head())

# Se muestra la forma (número de filas y columnas) del DataFrame de adultos
print("\nForma del DataFrame de adultos:")
print(adultos.shape)

# Se seleccionan los nombres de las personas mayores de 21 años
print("\nSeleccionando los nombres de personas mayores de 21 años:")
nombres_de_adultos = datos.loc[datos["edad"] > 21, "nombre"]
print(nombres_de_adultos)

# Se calcula la edad promedio en el DataFrame
print("\nEdad promedio en el DataFrame:")
print(datos["edad"].mean())

# Se calcula la mediana de las columnas 'edad' y 'peso'
print("\nMediana de las columnas 'edad' y 'peso':")
print(datos[["edad", "peso"]].median())

# Se muestran estadísticas descriptivas para las columnas 'edad' y 'peso'
print("\nEstadísticas descriptivas para las columnas 'edad' y 'peso':")
print(datos[["edad", "peso"]].describe())

# Se calculan varias estadísticas para las columnas 'edad' y 'peso' usando agg()
print("\nCalculando varias estadísticas para las columnas 'edad' y 'peso' usando agg():")
print(datos.agg(
    {
        "edad": ["min", "max", "median", "skew"],
        "peso": ["min", "max", "median", "mean"]
    }
))
