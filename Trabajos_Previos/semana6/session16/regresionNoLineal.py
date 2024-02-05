import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.pipeline import make_pipeline

# Generar datos de ejemplo no lineales
np.random.seed(42)
X = 2 * np.random.rand(100, 1)
y = 0.5 * X**2 + X + 2 + np.random.randn(100, 1)

# Visualizar datos no lineales
plt.scatter(X, y)
plt.title('Datos de Regresión No Lineal')
plt.xlabel('X')
plt.ylabel('y')
plt.show()

# Aplicar regresión polinómica de segundo grado
grado_polinomio = 2
modelo_polinomico = make_pipeline(PolynomialFeatures(grado_polinomio), LinearRegression())
modelo_polinomico.fit(X, y)

# Visualizar la regresión polinomica
X_test = np.linspace(0, 2, 100).reshape(100, 1)
y_pred = modelo_polinomico.predict(X_test)
plt.scatter(X, y)
plt.plot(X_test, y_pred, color="red", label=f'Regresión Polinómica ({grado_polinomio} grado)')
plt.title('Regresión Polinómica')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.show()
