
class Person:
    # se crea la clase de persona, con su respectivo nombre y edad
    def __init__(self, name, age):
        self.name = name 
        self.age = age

    # se hace la clase para imprimir el nombre y la edad de la persona 
    def display_info(self):
        print(f"Name: {self.name}\nAge: {self.age}")    