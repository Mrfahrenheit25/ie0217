num = 33

def outer():
    num = 20

    def inner():
        # Uso de la palabra clave global para referenciar la variable global num
        global num
        num = 25
        print("Inside inner:", num)

    print("Before calling inner:", num)
    inner()
    print("After calling inner:", num)

print("Before outer:", num)
outer()
print("Outside:", num)
