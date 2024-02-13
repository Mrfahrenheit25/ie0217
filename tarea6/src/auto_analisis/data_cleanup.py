import pandas as pd

class ManejoDeDatos:
    def __init__(self, archivo):
        self.archivo = archivo

    def eliminar_duplicados(self):
        # Leer el archivo CSV
        datos = pd.read_csv(self.archivo)

        # Eliminar filas duplicadas
        datos_sin_duplicados = datos.drop_duplicates()

        # Guardar el resultado en un nuevo archivo CSV
        self.archivo = self.archivo.replace('.csv', '_rev.csv')
        datos_sin_duplicados.to_csv(self.archivo, index=False)
        print("Filas duplicadas eliminadas y archivo guardado correctamente.")

    def revisar_valores_invalidos(self):
        # Leer el archivo CSV
        datos = pd.read_csv(self.archivo)

        # Columnas para revisar
        columnas_a_revisar = ['name', 'fuel', 'seller_type', 'owner']

        # Verificar valores inválidos en las columnas especificadas
        for columna in columnas_a_revisar:
            valores_invalidos = datos[datos[columna].isnull()]
            if not valores_invalidos.empty:
                print(f"Valores inválidos encontrados en la columna '{columna}':")
                print(valores_invalidos)

    def revisar_tipos_datos(self):
        # Leer el archivo CSV
        datos = pd.read_csv(self.archivo)

        # Columnas para revisar tipos de datos
        columnas_strings = ['name', 'fuel', 'seller_type', 'transmission', 'owner']
        columnas_enteros = ['year', 'selling_price', 'km_driven']

        # Verificar tipos de datos en las columnas especificadas
        for columna in columnas_strings:
            if datos[columna].dtype != 'object':
                print(f"Error: La columna '{columna}' no contiene cadenas de texto (strings).")
        for columna in columnas_enteros:
            if datos[columna].dtype != 'int64':
                print(f"Error: La columna '{columna}' no contiene números enteros (integers).")

    def ejecutar_tareas(self):
        # Eliminar filas duplicadas
        self.eliminar_duplicados()

        # Revisar valores inválidos
        self.revisar_valores_invalidos()

        # Revisar tipos de datos
        self.revisar_tipos_datos()

# Instanciar la clase y ejecutar las tareas
manejo_datos = ManejoDeDatos("CAR DETAILS FROM CAR DEKHO.csv")
manejo_datos.ejecutar_tareas()
