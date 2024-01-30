import matplotlib.pyplot as plt

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencia = [5, 10, 8, 13]

# Crear una figura con dos subtramas
fig, axs = plt.subplots(1, 2, figsize=(10, 4))

# Subtrama 1: Gráfico de barras
axs[0].bar(categorias, valores, color='royalblue')
axs[0].set_title('Gráfico de Barras')

# Subtrama 2: Gráfico de línea
axs[1].plot(categorias, tendencia, color='green', marker='o')  # Cambiado '0' a 'o' en marker
axs[1].set_title('Gráfico de Línea')

# Personalización adicional
for ax in axs:
    ax.set_xlabel('Categorías')
    ax.set_ylabel('Valores')

# Ajustar la disposición
plt.tight_layout()

# Mostrar la figura con ambas subtramas
plt.show()
