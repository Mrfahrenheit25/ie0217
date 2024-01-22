
# Programa para filtrar solo los elementos pares de una lista my_list [1, 5, 4, 6, 8, 11, 3, 12]
my_list = [1, 5, 4, 6, 8, 11, 3, 12]

# Filtrar elementos pares utilizando la función filter y una función lambda
new_list = list(filter(lambda x: x % 2 == 0, my_list))

# Imprimir la nueva lista
print(new_list)
# Salida: [4, 6, 8, 12]
