from alergias import Alergia

class EvaluacionEspecifica(Alergia):

    def __init__(self, puntuacion):
        super().__init__()
        self.alergias_persona = []
        self.puntuacion = puntuacion
        
    def evaluacion_alergias(self):
        if self.puntuacion > sum(self.alergias.values()):
            print('la puntuacion ingresada es mayor a la de toda la base de datos, el valor debe de ser incorrecto')
        else:
            for alergia, num in self.alergias.items():
                if self.puntuacion & num:
                    self.alergias_persona.append(alergia)
    
    def imprimir(self):
        print(f' Estos son los datos de las alergias \
              \nLa puntuacion ingresada :{self.puntuacion}\n')
        for alergia in self.alergias_persona:
            print(f'{alergia} : {self.alergias[alergia]}')