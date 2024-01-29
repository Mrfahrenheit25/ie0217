def my_generator(n):
    # initialize counter
    value = 0
    # loop until counter is less than n
    while value < n:
        # produce the current value of the counter
        yield value
        # increment the counter
        value += 1

# Iterar sobre el generador producido por my_generator
for value in my_generator(3):
    # Imprimir cada valor producido por el generador
    print(value)
