def greet():
    # variable definida fuera de la función interna
    name = "John"
    # devuelve una función anónima anidada
    return lambda: "Hi " + name

# llama a la función externa
message = greet()

# llama a la función interna e imprime el mensaje
print(message())  # Output: Hi John
