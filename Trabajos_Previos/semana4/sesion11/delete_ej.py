# Lista original
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']

# Eliminar el segundo elemento de la lista
del languages[1]
print("After deleting the second item:", languages)  # ['Python', 'C++', 'C', 'Java', 'Rust', 'R']

# Eliminar el último elemento de la lista
del languages[-1]
print("After deleting the last item:", languages)  # ['Python', 'C++', 'C', 'Java', 'Rust']

# Eliminar los dos primeros elementos de la lista
del languages[0:2]
print("After deleting first two items:", languages)  # ['C', 'Java', 'Rust']
 
# ELiminar el elemento 'C'
languages.remove('C')
print('after deleting C :', languages)