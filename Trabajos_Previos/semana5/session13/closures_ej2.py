def calculate():
    num = 1

    def inner_func():
        nonlocal num
        num += 2
        return num

    return inner_func

# Llama a la función externa para obtener la función interna
odd = calculate()

# Llama a la función interna para obtener los números impares
print(odd())  # Output: 3
print(odd())  # Output: 5
print(odd())  # Output: 7

# Llama a la función externa nuevamente para obtener una nueva función interna
odd2 = calculate()

# Llama a la nueva función interna para obtener números impares independientes
print(odd2())  # Output: 3 (porque comienza desde 1 nuevamente)
