# se importa la clase TiposAlergia del archivo tipos_de_alergia
from tipos_de_alergia import TiposAlergia
""" Clase para realizar una evaluación general de las alergias.
    Hereda de la clase TiposAlergia para utilizar su funcionalidad de análisis"""
class EvaluacionGeneral(TiposAlergia):
    """Inicializa la evaluación general de alergias.
        
        Parameters:
        - alergia_lista: Una lista de alergias y sus valores asociados
    """
    def __init__(self, alergia_lista):
        super().__init__(alergia_lista)

    """Realiza una evaluación general de las alergias ingresadas"""
    def evaluacion_general(self):
        super().analisis()  # Llamar al metodo analisis() de la clase base
        puntuacion = 0
        lista_def = []

        # Procesa las alergias nuevas para determinar la puntuación total y la lista definitiva de alergias
        for i in range(0, len(self.alergias_nuevas), 2):
            nombre = self.alergias_nuevas[i]
            valor = self.alergias_nuevas[i + 1]

            # Verifica si el nombre esta y actualizar el código
            if nombre in self.alergias:
                nvalor = self.alergias[nombre]
                lista_def.extend([nombre, nvalor])
            else:
                lista_def.extend([nombre, valor])
        # Calcula la puntuación total de las alergias
        for i in range(1, len(lista_def), 2):
            codigo = lista_def[i]
            puntuacion += codigo
         # Imprime los resultados de la evaluación general
        print(f'La lista de alergias validas que posee es: {lista_def} \
            \nLa puntuacion de alergia es: {puntuacion} \
            \nEl porcentaje de acierto en las alergias fue de: {(len(lista_def) / len(self.alergias_nuevas_persona)) * 100} \
            \n')

