import matplotlib.pyplot as plt

# Datos de ejemplo
proporciones = [30, 20, 25, 15]
etiquetas = ['A', 'B', 'C', 'D']

# Gráfico de pastel
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140, colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])

# Personalización
plt.title('Gráfico de Pastel')

# Mostrar el gráfico
plt.show()
