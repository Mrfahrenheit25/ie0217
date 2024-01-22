#programa que imprime numero impares de 1 a 10

num = 0
while num < 10:
    num += 1
    if (num %2) == 0:
        continue
    
    print(num)