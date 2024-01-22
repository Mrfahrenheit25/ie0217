#muestra numeros de 1 al 5
print('el programa cuenta de 1 a 5')
#inicializar la variable
i = 1
n = 5
# while de 1 a 5
while i <= n:
    print(i)
    i = i + 1


# el programa calcula la sumade los numeros hasta llegar a 0
total = 0
num = int(input('Ingrese el numero: '))

# agregue numeros hasta que sea 0
while num != 0:
    total += num # total = total + num
    # vuelve a tomar el numero
    num = int(input("Ingrese el numero denuevo: "))

print("el total es: ", total)