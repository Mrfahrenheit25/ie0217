import pandas as pd
import math
import matplotlib.pyplot as plt
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
            # Se intenta cargar el archivo CSV en un DataFrame
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
            # Se guarda el DataFrame en un archivo CSV
            self.dataframe.to_csv(nombre_archivo, index=False)
            print(f"DataFrame procesado guardado como '{nombre_archivo}' exitosamente.")
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
        Se inicializa la clase AnalisisDatos con un DataFrame.
        """
        self.dataframe = dataframe

    def calcular_promedio_columna(self, numero_columna):
        """
        Se calcula el promedio de una columna del DataFrame.
        
        Args:
            numero_columna (int): Numero de columna para calcular el promedio.
        
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
        Se calcula la desviacion estandar de una columna del DataFrame.
        
        Args:
            numero_columna (int): Numero de columna para calcular la desviacion estandar.
        
        Returns:
            float: Desviacion estandar de la columna especificada.
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
            Se calcula la moda de una columna especifica del DataFrame.
            
            Args:
                numero_columna (int): Numero de columna para calcular la moda.
            
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

    def generar_informe(self, numero_columna, nombre_archivo_salida):
        """
        Se genera un informe en un nuevo archivo CSV con la cantidad de vuelos, el total de pasajeros
        transportados y el total de peso para cada valor en una columna especifica del DataFrame.
        
        Args:
            numero_columna (int): Numero de columna para generar el informe.
            nombre_archivo_salida (str): Nombre del archivo CSV de salida.
        """
        # Función generadora para calcular totales
        def calcular_totales():
            totales = {}
            for index, fila in self.dataframe.iterrows():
                valor = fila.iloc[numero_columna]
                pasajeros = fila.iloc[0]
                peso = fila.iloc[1]

                if valor in totales:
                    totales[valor][0] += 1
                    totales[valor][1] += pasajeros
                    totales[valor][2] += peso
                else:
                    totales[valor] = [1, pasajeros, peso]

            # Escribir los resultados en el archivo CSV
            with open(nombre_archivo_salida, 'w') as archivo_salida:
                archivo_salida.write("aerolinea,total de viajes,total pasajeros trans,total de peso trans\n")
                for aerolinea, (viajes, pasajeros, peso) in totales.items():
                    archivo_salida.write(f"{aerolinea},{viajes},{pasajeros},{peso}\n")

            print(f"Informe generado y guardado en '{nombre_archivo_salida}'.")

        # Ejecutar la función generadora
        calcular_totales()

    def contar_repeticiones_por_valor(self, numero_columna):
        """
        Se usa un generador para contar la cantidad de veces que se repite un valor en una columna 
        
        Args:
            numero_columna (int): Numero de columna para contar las repeticiones.
        
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

class GraficoViajes:
    def __init__(self, ruta_archivo):
        """
        Inicializa la clase GraficoViajes con la ruta del archivo CSV que contiene los datos.
        """
        self.ruta_archivo = ruta_archivo

    def generar_graf_bar(self):
        """
        Genera un grafico de barras que muestra cuantos viajes hizo cada compania de viaje.
        """
        # Función generadora para obtener los datos de compañías y viajes
        def obtener_datos():
            # Cargar los datos desde el archivo CSV, omitiendo las líneas 24 y 33
            datos = pd.read_csv(self.ruta_archivo, skiprows=[23, 28, 29, 32, 34, 38, 41, 45, 48, 50])

            # Iterar sobre los datos y generar las compañías y viajes
            for index, fila in datos.iterrows():
                yield fila.iloc[0], fila.iloc[1]

        # Obtener compañías y viajes utilizando el generador
        companias, viajes = zip(*obtener_datos())

        # Crear el gráfico de barras
        plt.figure(figsize=(10, 6))
        plt.bar(companias, viajes, color='skyblue')
        plt.xlabel('Compania de viaje')
        plt.ylabel('Total de viajes')
        plt.title('Total de viajes por Compania de viaje')
        plt.xticks(rotation=45, ha='right')
        plt.tight_layout()

        # Mostrar el gráfico
        plt.show()
    def generar_graf_disper(self):
        """
        Genera un grafico de dispersión que muestra la relacion entre companias de viaje y total de viajes.
        """
        # Cargar los datos desde el archivo CSV, omitiendo las líneas 24 y 33
        datos = pd.read_csv(self.ruta_archivo, skiprows=[23, 28, 29, 32, 34, 38, 41, 45, 48, 50])

        # Extraer compañías de viaje y total de viajes
        companias = datos.iloc[:, 0]
        viajes = datos.iloc[:, 1]

        # Crear el gráfico de dispersión
        plt.figure(figsize=(10, 6))
        plt.scatter(companias, viajes, color='skyblue')
        plt.xlabel('Compañía de Viaje')
        plt.ylabel('Total de Viajes')
        plt.title('Relación entre Compañía de Viaje y Total de Viajes')
        plt.xticks(rotation=45, ha='right')
        plt.tight_layout()

        # Mostrar el gráfico
        plt.show()
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
        # Calcular los datos importantes
        desvest_dist= analizador.calcular_desviacion_estandar_columna(2)
        prom_dist = analizador.calcular_promedio_columna(2)
        moda_comp = analizador.calcular_moda_columna(4)
        moda_orig = analizador.calcular_moda_columna(5)
        moda_dest = analizador.calcular_moda_columna(6)
        moda_mes = analizador.calcular_moda_columna(7)
        # Selecciono las filas de la compania con mas viajes
        analizador.seleccionar_filas_por_valor(4, "Southwest Airlines Co.", 'filas_interes.csv')
        # Genero el informe con los datos de la suma de los pasajeros, peso del cargamento y total de los viajes
        analizador.generar_informe(4,'datos_importantes.csv')
        data_impo = 'datos_importantes.csv'
        graf1 = GraficoViajes(data_impo)
        graf1.generar_graf_bar()
        # Imprimir resultados
        print("El promedio de la distancia recorrida por los vuelos es de:", prom_dist)
        print("Desviacion estandar de la distancia recorrida por los vuelos es de :", desvest_dist)
        print("Moda de la compania de viaje:", moda_comp)
        print("Moda del origen de los viajes:", moda_orig)
        print("Moda del destino de los viajes:", moda_dest)
        print("Numero del mes con mas viajes: ", moda_mes)

