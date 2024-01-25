class Polygon:
    # Método para representar una forma
    def render(self):
        print("Rendering Polygon...")

class Square(Polygon):
    # Representa un cuadrado
    def render(self):
        print("Rendering Square...")

class Circle(Polygon):
    # Representa un círculo
    def render(self):
        print("Rendering Circle...")

# Crear un objeto de Square
s1 = Square()
s1.render()

# Crear un objeto de Circle
c1 = Circle()
c1.render()
