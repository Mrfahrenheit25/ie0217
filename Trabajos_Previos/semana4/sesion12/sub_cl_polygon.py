class Polygon:
    def __init__(self, no_of_sides):
        self.n = no_of_sides
        self.sides = [0 for i in range(no_of_sides)]

    def inputSides(self):
        self.sides = [float(input("Enter side " + str(i + 1) + " : ")) for i in range(self.n)]

    def dispSides(self):
        for i in range(self.n):
            print("Side", i + 1, "is", self.sides[i])

class Triangle(Polygon):
    def __init__(self):
        # Llamar al constructor de la clase base (Polygon) con 3 lados
        super().__init__(3)

    def findArea(self):
        a, b, c = self.sides
        # Calcular el semiperímetro
        s = (a + b + c) / 2
        # Calcular el área usando la fórmula de Herón
        area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
        print('The area of the triangle is %0.2f' % area)

# Crear un objeto de la clase Triangle
triangle = Triangle()

# Ingresar los lados del triángulo
triangle.inputSides()

# Mostrar los lados del triángulo
triangle.dispSides()

# Calcular y mostrar el área del triángulo
triangle.findArea()
