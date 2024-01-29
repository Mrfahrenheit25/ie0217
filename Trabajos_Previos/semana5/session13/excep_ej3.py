# Define una clase de excepciones definida por el usuario
class InvalidAgeException(Exception):
    """Se genera cuando el valor de entrada es menor que 18"""
    pass

# Número que se debe adivinar
number = 18

try:
    input_num = int(input("Ingrese un número: "))
    if input_num < number:
        raise InvalidAgeException
    else:
        print("Elegible para votar")
except ValueError:
    print("Error: Ingrese un número válido")
except InvalidAgeException:
    print("Excepción: Edad inválida, debe ser mayor o igual a 18")
