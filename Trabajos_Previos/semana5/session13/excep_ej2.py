# Manejo de excepciones para el acceso a un índice fuera de rang, primer ejemplo
try:
    even_numbers = [2, 4, 6, 8]
    print(even_numbers[5])
except ZeroDivisionError:
    print("El denominador no puede ser 0")
except IndexError:
    print("Índice fuera de rango.")
# Output: Índice fuera de rango

# Programa para imprimir el recíproco de números pares, segundo ejemplo
try:
    num = int(input("Ingrese un número: "))
    assert num % 2 == 0
except ValueError:
    print("¡No es un número válido!")
except AssertionError:
    print("¡No es un número par!")
else:
    reciprocal = 1 / num
    print(reciprocal)
