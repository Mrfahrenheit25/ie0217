# se importa la clase Alergia del archivo alergias
from alergias import Alergia

"""Clase para gestionar los diferentes tipos de alergias,
    hereda de la clase Alergia para utilizar su funcionalidad."""

class TiposAlergia(Alergia):
    '''Inicializa la clase TiposAlergia, es el constructor
        
        Parameters:
        - alergia_lista: Una lista de alergias y sus valores asociados.
    '''
    def __init__(self, alergia_lista):
        super().__init__()
        self.alergias_nuevas_persona = alergia_lista
        self.alergias_nuevas = []
        self.nombre_sin_valor = []
        self.valor_sin_nombre = []
    '''Analiza las alergias nuevas ingresadas por el usuario'''
    def analisis(self):
        for n in range(0, len(self.alergias_nuevas_persona), 2):
            nombre = self.alergias_nuevas_persona[n]
            try:
                valor = int(self.alergias_nuevas_persona[n + 1])
                if nombre.isalpha() and (int(valor) > 0 and (int(valor) & (int(valor) - 1)) == 0):
                    self.alergias_nuevas.append(nombre)
                    self.alergias_nuevas.append(valor)
                elif nombre.isalpha() and not (int(valor) > 0 and (int(valor) & (int(valor) - 1)) == 0):
                    self.nombre_sin_valor.append(nombre)
                elif not nombre.isalpha():
                    self.valor_sin_nombre.append(valor)
            except:
                self.nombre_sin_valor.append(nombre)
                
        print(f'datos brindados por el usuario como una lista: {self.alergias_nuevas_persona} \
              \nLas alergias nuevas y su valor son: {self.alergias_nuevas} \
              \nLas alergias sin valor son: {self.nombre_sin_valor} \
              \nLos valores sin alergia corresponde a : {self.valor_sin_nombre} \
              \n')
