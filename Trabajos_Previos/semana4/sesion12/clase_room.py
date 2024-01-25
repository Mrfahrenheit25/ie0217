# Definir la clase Room
class Room:
    length = 0.0
    breadth = 0.0

    # Método para calcular el área
    def calculate_area(self):
        print("Area of Room:", self.length * self.breadth)

# Crear un objeto de la clase Room
study_room = Room()

# Asignar valores a todos los atributos
study_room.length = 3
study_room.breadth = 2.5

# Acceder al método dentro de la clase
study_room.calculate_area()
