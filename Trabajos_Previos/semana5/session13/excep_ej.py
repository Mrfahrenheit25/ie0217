try:
    numerator = 10
    denominator = 0
    result = numerator / denominator
    print(result)
except ZeroDivisionError:
    print("Error: El denominador no puede ser 0.")
finally:
    print("Este es el bloque de finalizacion")