# Variable global C con valor inicial 1
C = 1

def add():
    # Uso de la palabra clave global para referenciar la variable global C
    global C
    # Incrementar C en 2
    C = C + 2

# Llamar a la función add
add()

# Imprimir el valor actualizado de la variable global C
print(C)
# Salida: 3
