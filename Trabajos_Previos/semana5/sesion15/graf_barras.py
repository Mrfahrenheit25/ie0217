import matplotlib.pyplot as plt

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Gráfico de barras verticales
plt.bar(categorias, valores, color='royalblue')

# Personalización
plt.xlabel('Categorías')
plt.ylabel('Valores')
plt.title('Gráfico de Barras Verticales')

# Mostrar el gráfico
plt.show()
