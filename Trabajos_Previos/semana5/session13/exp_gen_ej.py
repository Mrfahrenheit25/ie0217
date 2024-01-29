# Crear el objeto generador
squares_generator = (i * i for i in range(5))

# Iterar sobre el generador e imprimir los valores
for i in squares_generator:
    print(i)
