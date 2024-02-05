import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Generar datos de ejemplo
np.random.seed(42)
X = 2 * np.random.rand(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# Crear un modelo de regresión lineal
modelo = LinearRegression()

# Ajustar el modelo
modelo.fit(X, y)

# Imprimir coeficiente e intercepción
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepción:", modelo.intercept_[0])

# Visualizar la regresión lineal
plt.scatter(X, y)
plt.plot(X, modelo.predict(X), color='red', linewidth=3)
plt.title('Regresión Lineal')
plt.xlabel('X')
plt.ylabel('y')
plt.show()
