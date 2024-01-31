# se importa la clase Alergia del archivo alergias
from alergias import Alergia
'''clase encargada de analizar el puntaje brindado por el usuario, y asignarlo a las respectivas 
    alergias con los valores correctos, este es el proceso de evaluacion, posteriormente se imprime
    la evaluacion realizada en el metodo de imprimir'''
class EvaluacionEspecifica(Alergia):

    '''se hace el metodo constructor donde se inicia el valor de la puntuacion'''
    def __init__(self, puntuacion):
        super().__init__()
        self.alergias_persona = []
        self.puntuacion = puntuacion
    '''metodo que evalua las alergias de la persona en base a su puntuacion'''
    def evaluacion_alergias(self):
        if self.puntuacion > sum(self.alergias.values()):
            print('la puntuacion ingresada es mayor a la de toda la base de datos, el valor debe de ser incorrecto')
        else:
            for alergia, num in self.alergias.items():
                if self.puntuacion & num:
                    self.alergias_persona.append(alergia)
    '''metodo hecho para imprimir los datos de las alergias'''
    def imprimir(self):
        print(f' Estos son los datos de las alergias \
              \nLa puntuacion ingresada :{self.puntuacion}\n')
        for alergia in self.alergias_persona:
            print(f'{alergia} : {self.alergias[alergia]}\n')