from tipos_de_alergia import TiposAlergia

class EvaluacionGeneral(TiposAlergia):

    def __init__(self, alergia_lista):
        super().__init__(alergia_lista)

    def evaluacion_general(self):
        super().analisis()  # Llamar al metodo analisis() de la clase base

        puntuacion = 0
        lista_def = []

        for i in range(0, len(self.alergias_nuevas), 2):
            nombre = self.alergias_nuevas[i]
            valor = self.alergias_nuevas[i + 1]

            # Verifica si el nombre esta y actualizar el código
            if nombre in self.alergias:
                nvalor = self.alergias[nombre]
                lista_def.extend([nombre, nvalor])
            else:
                lista_def.extend([nombre, valor])

        for i in range(1, len(lista_def), 2):
            codigo = lista_def[i]
            puntuacion += codigo

        print(f'La lista de alergias validas que posee es: {lista_def} \
            \nLa puntuacion de alergia es: {puntuacion} \
            \nEl porcentaje de acierto en las alergias fue de: {(len(lista_def) / len(self.alergias_nuevas_persona)) * 100} \
            \n')

