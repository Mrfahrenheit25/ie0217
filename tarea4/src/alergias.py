class Alergia:
    '''Clase alergia, encargada de contener las alergias y alergias nuevas del programa,
    tiene una funcion parecida a un menu que se encarga de revisar por una alergia en particular
    o por todas las alergias dentro de la clase, adicionalmente cuenta con un metodo para agregar alergias '''
    def __init__(self):
        self.alergias = {"huevos" : 1,
                        "cacahuetes" : 2, 
                        "mariscos": 4, 
                        "fresas": 8, 
                        "tomates" : 16,
                        "chocolate" : 32, 
                        "polen" : 64, 
                        "gatos" : 128, 
                        "sardina" : 256, 
                        "gluten": 512}
        self.alergias_nuevas = []


    def crearAlergia(self):
            print('Creando una alergia')
            nombre = input('Ingrese el nombre de la nueva alergia: ')
            valor = int(input('Ingrese el valor de la nueva alergia (potencia de 2): '))
            self.alergias_nuevas.append((nombre, valor))
            self.alergias[nombre] = valor


    def mostrar(self):
        print('\n Esta es la base de datos de las alergias, seleccione una opcion :')
        print('1. Imprimir una sola alergia')
        print('2. Consultar por todas las alergias en la base de datos')

        opc = input('introduzca la opcion de interes: ')


        if(opc == '1'):
            alergia = input("introduzca la alergia a consultar: ")
            try: 
                print('para la alergia a ', alergia, 'el codigo es ', self.alergias[alergia])
            except:
                 print('la alergia no esta en la base de datos')
        elif (opc == '2'):
            print('Esta es la informacion de todas las alergias')
            for alergia in self.alergias:
                print(self.alergias[alergia], "-", alergia)
        else: 
             print('el valor ingresado no es valido')