import matplotlib.pyplot as plt

# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear un gráfico de línea
plt.plot(x, y)

# Personalización
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea Simple')

# Guardar el gráfico como imagen (por ejemplo, en formato PNG)
plt.savefig('grafico.png')

# Mostrar el gráfico
plt.show()
