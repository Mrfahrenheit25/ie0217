import pandas as pd

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
