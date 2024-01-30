import matplotlib.pyplot as plt

# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear un gráfico de línea
plt.plot(x, y, label='Datos de ejemplo')

# Añadir una anotacion, es una flecha
plt.annotate('Valor Máximo', xy=(5, 14), xytext=(3, 16),
             arrowprops=dict(facecolor='black', shrink=0.05),
             )

# Personalización adicional, como etiquetas de ejes y títulos
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico con Anotación')
plt.legend()

# Mostrar el gráfico
plt.show()
