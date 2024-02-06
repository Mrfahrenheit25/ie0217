import pandas as pd
import math

class CargarData:
    def __init__(self, ruta_archivo):
        """
        Se comienza la clase CargarData con la ruta del archivo CSV.
        """
        self.ruta_archivo = ruta_archivo
        self.dataframe = None

    def cargar_data(self):
        """
         Se cargan los datos desde el archivo CSV, eliminando las columnas 4,6 y 8. Ya que no contienen informacion 
         relevante para el proyecto.
        """
        try:
            # Intenta cargar el archivo CSV en un DataFrame
            self.dataframe = pd.read_csv(self.ruta_archivo)
            print("Datos cargados con exito")
            
            columnas_a_eliminar = [4, 6, 8]
            self.dataframe = self.dataframe.drop(self.dataframe.columns[columnas_a_eliminar], axis=1)
            

        except FileNotFoundError:
            # Captura la excepción si el archivo no se encuentra
            print(f"Error: El archivo {self.ruta_archivo} no existe.")

        except pd.errors.EmptyDataError:
            # Captura la excepción si el archivo CSV está vacío
            print(f"Error: El archivo {self.ruta_archivo} está vacío.")

        except pd.errors.ParserError:
            # Captura la excepción si hay un error al analizar el archivo CSV
            print(f"Error: No se pueden analizar los datos en el archivo {self.ruta_archivo}. Verifica el formato CSV.")

        except Exception as e:
            # Captura cualquier otra excepción no manejada
            print(f"Error inesperado: {e}")

    def reproducir_datos(self, nombre_archivo):
        """
        Se guarda el DataFrame en un archivo CSV y muestra un mensaje para verificar que todo
        esta en orden.
        
        Args:
            nombre_archivo (str): Nombre del archivo CSV de salida.
        """
        try:
            # Guarda el DataFrame en un archivo CSV
            self.dataframe.to_csv(nombre_archivo, index=False)
            print(f"DataFrame guardado como '{nombre_archivo}' exitosamente.")
        except Exception as e:
            print(f"Error al guardar el DataFrame como '{nombre_archivo}': {e}")

    def eliminar_filas(self, inicio, fin):
        """
        Se eliminan filas 1 a la 1544 del DataFrame, puesto que no contienen informacion relevante
        en este analisis
        
        Args:
            inicio (int): Índice de inicio de las filas a eliminar.
            fin (int): Índice de fin de las filas a eliminar.
        
        Returns:
            pandas.DataFrame: DataFrame con las filas eliminadas.
        """
        try:
            self.dataframe = self.dataframe.drop(self.dataframe.index[inicio:fin+1])
            print(f"Filas desde {inicio} hasta {fin} eliminadas exitosamente.")
        except Exception as e:
            print(f"Error al eliminar filas: {e}")

class AnalisisDatos:
    def __init__(self, dataframe):
        """
        Inicializa la clase AnalisisDatos con un DataFrame.
        """
        self.dataframe = dataframe

    def calcular_promedio_columna(self, numero_columna):
        """
        Calcula el promedio de una columna específica del DataFrame.
        
        Args:
            numero_columna (int): Número de columna para calcular el promedio.
        
        Returns:
            float: Promedio de la columna especificada.
        """
        suma = 0
        contador = 0
        for valor in self.dataframe.iloc[:, numero_columna]:
            if not pd.isnull(valor):
                suma += valor
                contador += 1
        return suma / contador if contador != 0 else 0

    def calcular_desviacion_estandar_columna(self, numero_columna):
        """
        Calcula la desviación estándar de una columna específica del DataFrame.
        
        Args:
            numero_columna (int): Número de columna para calcular la desviación estándar.
        
        Returns:
            float: Desviación estándar de la columna especificada.
        """
        promedio = self.calcular_promedio_columna(numero_columna)
        suma_cuadrados_diferencias = 0
        contador = 0
        for valor in self.dataframe.iloc[:, numero_columna]:
            if not pd.isnull(valor):
                suma_cuadrados_diferencias += (valor - promedio) ** 2
                contador += 1
        varianza = suma_cuadrados_diferencias / contador if contador != 0 else 0
        return math.sqrt(varianza)

    def calcular_moda_columna(self, numero_columna):
            """
            Calcula la moda de una columna específica del DataFrame.
            
            Args:
                numero_columna (int): Número de columna para calcular la moda.
            
            Returns:
                object: Moda de la columna especificada.
            """
            return self.dataframe.iloc[:, numero_columna].mode()[0]
    
    def seleccionar_filas_por_valor(self, numero_columna, valor_a_seleccionar, nombre_archivo_salida):
        """
        Selecciona todas las filas en las que se repite un valor específico en una columna particular
        y las guarda en un nuevo archivo CSV.
        
        Args:
            numero_columna (int): Número de columna para realizar la selección.
            valor_a_seleccionar (str or int): Valor a buscar en la columna especificada.
            nombre_archivo_salida (str): Nombre del archivo CSV de salida.
        """
        # Seleccionar las filas que cumplen la condición
        filas_seleccionadas = self.dataframe[self.dataframe.iloc[:, numero_columna] == valor_a_seleccionar]

        # Guardar las filas seleccionadas en un nuevo archivo CSV
        filas_seleccionadas.to_csv(nombre_archivo_salida, index=False)
        print(f"Filas seleccionadas guardadas en '{nombre_archivo_salida}'.")

    def contar_repeticiones_por_valor(self, numero_columna):
        """
        Utiliza un generador para contar la cantidad de veces que se repite un valor en una columna específica.
        
        Args:
            numero_columna (int): Número de columna para contar las repeticiones.
        
        Yields:
            tuple: Tupla que contiene el valor y la cantidad de repeticiones.
        """
        contador = {}
        for valor in self.dataframe.iloc[:, numero_columna]:
            if valor in contador:
                contador[valor] += 1
            else:
                contador[valor] = 1

        for valor, repeticiones in contador.items():
            yield valor, repeticiones


if __name__ == "__main__":
    archivo_csv = 'datos.csv'

    # Instanciar la clase CargarData
    cargador = CargarData(archivo_csv)

    # Cargar los datos desde el archivo CSV
    cargador.cargar_data()

    # Verificar si los datos se cargaron correctamente
    if cargador.dataframe is not None:
        # Eliminar las filas
        cargador.eliminar_filas(0, 1543)       
        # Nombre del nuevo archivo
        nuevo_archivo_csv = 'datos_modificados.csv'
        # Guardar y mostrar los datos modificados
        cargador.reproducir_datos(nuevo_archivo_csv)

        lec_nuevo_archivo = pd.read_csv(nuevo_archivo_csv)
        # Instanciar la clase AnalisisDatos
        analizador = AnalisisDatos(lec_nuevo_archivo)
        # Calcular los datos importantes de la columna 2
        desviacion_estandar_columna_2 = analizador.calcular_desviacion_estandar_columna(2)
        prom_columna_2 = analizador.calcular_promedio_columna(2)
        moda_columna_2 = analizador.calcular_moda_columna(4)
        analizador.seleccionar_filas_por_valor(4, "Southwest Airlines Co.", 'filas_interes.csv')

        # Imprimir resultados
        print("El promedio de la columna 2:", prom_columna_2)
        print("Desviación estándar de la columna 2:", desviacion_estandar_columna_2)
        print("Moda de la columna 2:", moda_columna_2)
        print("Cantidad de repeticiones por valor en la columna 4:")
        for valor, repeticiones in analizador.contar_repeticiones_por_valor(4):
            print(f"{valor}: {repeticiones}")
