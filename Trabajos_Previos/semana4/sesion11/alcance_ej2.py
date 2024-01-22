# Función exterior
def outer():
    # Variable local dentro de la función exterior
    message = 'local'
    
    # Función anidada
    def inner():
        # Declarar la variable no local
        nonlocal message
        message = 'nonlocal'
        print("inner:", message)
    
    # Llamar a la función interna
    inner()
    
    # Imprimir el valor de la variable después de llamar a la función interna
    print("outer:", message)

# Llamar a la función exterior
outer()
