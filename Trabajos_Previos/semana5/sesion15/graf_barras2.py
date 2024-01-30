import matplotlib.pyplot as plt

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Crear un gráfico de barras
plt.bar(categorias, valores, color='royalblue', edgecolor='black')

# Personalización
plt.xlabel('Categorías', fontsize=12)
plt.ylabel('Valores', fontsize=12)
plt.title('Gráfico de Barras', fontsize=14)
plt.xticks(rotation=45)  # Rotar las etiquetas del eje X para mayor legibilidad
plt.grid(axis='y', linestyle='--', alpha=0.7)  # Usar '=' en lugar de '-' en 'linestyle'

# Añadir etiquetas en las barras
for i, v in enumerate(valores):
    plt.text(i, v + 0.5, str(v), ha='center', va='bottom', fontsize=10)

# Mostrar el gráfico
plt.show()
