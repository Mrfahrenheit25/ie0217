# Define una lista
my_list = [4, 7, 0]

# Crea un iterador a partir de la lista
iterator = iter(my_list)

# Obtén el primer elemento del iterador e imprímelo
print(next(iterator))  # imprime 4

# Obtén el segundo elemento del iterador e imprímelo
print(next(iterator))  # imprime 7

# Obtén el tercer elemento del iterador e imprímelo
print(next(iterator))  # imprime 0

# Itera sobre la lista e imprime cada elemento
for element in my_list:
    print(element)
