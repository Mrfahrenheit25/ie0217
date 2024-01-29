def outer(x):
    def inner(y):
        return x + y
    return inner

# Definir una función externa que toma un argumento x
# La función externa devuelve una función interna que toma un argumento y
# La función interna devuelve la suma de x + y

# Llamar a la función externa con x = 5
add_five = outer(5)

# Ahora add_five es una función que toma un argumento y y suma 5 a y

# Llamar a la función add_five con y = 6
result = add_five(6)
print(result)  # Output: 11


# Otro ejemplo
def greeting(name):
    def hello():
        return "Hello, " + name + "!"
    return hello

greet = greeting("Atlantis")
print(greet())  # prints "Hello, Atlantis!"
# Output: Hello, Atlantis!
