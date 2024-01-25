# Definir la clase Animal
class Animal:
    # Atributo y método de la clase padre
    name = ""

    def eat(self):
        print("I can eat")

# Heredar de Animal
class Dog(Animal):
    # Nuevo método en la subclase
    def display(self):
        # Acceder al atributo 'name' de la superclase usando 'self'
        print("My name is", self.name)

# Crear un objeto de la subclase
labrador = Dog()

# Acceder al atributo y método de la superclase
labrador.name = "Rohu"
labrador.eat()

# Llamar al método de la subclase
labrador.display()
