class PowTwo:
    """Clase para implementar un iterador de potencias de dos"""

    def __init__(self, max=0):
        self.max = max

    def __iter__(self):
        self.n = 0
        return self

    def __next__(self):
        if self.n <= self.max:
            result = 2 ** self.n
            self.n += 1
            return result
        else:
            raise StopIteration

# Crear el objeto
numbers = PowTwo(3)

# Crear un iterable del objeto
i = iter(numbers)

#imprimir
for i in PowTwo(3):
    print(i)
