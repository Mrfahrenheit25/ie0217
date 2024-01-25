# Definir la clase Animal
class Animal:
    # Atributo y método de la clase padre
    name = ""

    def eat(self):
        print("I can eat")

# Heredar de Animal
class Dog(Animal):
    # obre escritura
    def eat(self):
        # Acceder al atributo 'name' de la superclase usando 'self'
        print("I like to eat bones")

# Crear un objeto de la subclase
labrador = Dog()

# Llamar al metodo comer
labrador.eat()

