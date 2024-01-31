class Alergia:
    '''Clase alergia, encargada de contener las alergias y alergias nuevas del programa,
    tiene una funcion parecida a un menu que se encarga de revisar por una alergia en particular
    o por todas las alergias dentro de la clase, adicionalmente cuenta con un metodo para imprimir las alergias '''
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

    '''Metodo hecho para agregar las alergias a la lista de nueva lista'''
    def crearAlergia(self):
        print('Creando una alergia')
        nombre = input('Ingrese el nombre de la nueva alergia: ')
        while True:
            try:
                valor = int(input('Ingrese el valor de la nueva alergia (potencia de 2): '))
                if valor <= 0 or (valor & (valor - 1)) != 0:
                    raise ValueError("El valor debe ser una potencia de 2 y mayor que cero.")
                break 
            except ValueError as e:
                print(e)  # Imprimir el mensaje de error

        self.alergias_nuevas.append((nombre, valor))
        self.alergias[nombre] = valor

    '''metodo hecho para imprimir la informacion de la lista de alergias segun sea 
        seleccionado por la opcion del usuario'''
    def mostrar(self):
        print('\nEsta es la base de datos de las alergias, seleccione una opción:')
        print('1. Imprimir una sola alergia')
        print('2. Consultar alergia por número asociado')
        print('3 Consultar todas las alergias en la base de datos')
        print('4 Consultar las alergias nuevas en la base de datos')
        

        opc = input('Introduzca la opción de interés: ')

        if opc == '1':
            alergia = input("Introduzca la alergia a consultar: ")
            try:
                print('Para la alergia ', alergia, 'el código es ', self.alergias[alergia])
            except KeyError:
                print('La alergia no está en la base de datos')
        elif opc == '3':
            print('Esta es la información de todas las alergias:')
            for alergia in self.alergias:
                print(self.alergias[alergia], "-", alergia)
        elif opc == '2':
            numero = int(input("Introduzca el número asociado a la alergia a consultar: "))
            alergias = [alergia for alergia, valor in self.alergias.items() if valor == numero]
            if alergias:
                print(f"Las alergias asociadas al número {numero} son: {', '.join(alergias)}")
            else:
                print("No hay alergias asociadas a ese número")
        elif opc == '4':
            print('Esta es la información de las alergias nuevas:')
            for alergia, valor in self.alergias_nuevas:
                print(f"{valor} - {alergia}")
        else:
            print('El valor ingresado no es válido')
