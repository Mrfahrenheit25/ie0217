import random

# Imprimir un número aleatorio entre 10 y 19 (inclusive)
print(random.randrange(10, 20))

# Lista de elementos
list1 = ['a', 'b', 'c', 'd', 'e']

# Obtener un elemento aleatorio de list1
print(random.choice(list1))

# Mezclar los elementos de list1 de manera aleatoria
random.shuffle(list1)

# Imprimir la lista mezclada
print("Shuffled list:", list1)

# Imprimir un número decimal aleatorio en el rango [0.0, 1.0)
print("Random float:", random.random())
