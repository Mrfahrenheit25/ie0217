# Declarar la variable global message = 'Hello'
message = 'Hello'

def greet():
    # Declarar la variable local
    local_message = 'Local'
    print(local_message, message)

# Llamar a la función greet
greet()

# Imprimir la variable global fuera de la función
print('Global', message)
