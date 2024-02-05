import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.datasets import make_regression

# Generar datos de ejemplo
X, y = make_regression(n_samples=100, n_features=3, noise=20, random_state=42)

# Crear un DataFrame para mayor claridad
df = pd.DataFrame(X, columns=['Tamaño', 'Habitaciones', 'Distancia Ciudad'])
df['Precio'] = y

# Dividir los datos en conjunto de entrenamiento y prueba
X_train, X_test, y_train, y_test = train_test_split(df[['Tamaño', 'Habitaciones', 'Distancia Ciudad']], df['Precio'], test_size=0.2, random_state=42)

# Crear y ajustar el modelo de regresión lineal múltiple
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Coeficientes e intercepción
print("Coeficientes:", modelo.coef_)
print("Intercepción:", modelo.intercept_)

# Realizar predicciones en el conjunto de prueba
y_pred = modelo.predict(X_test)

# Visualizar la regresión lineal múltiple
fig = plt.figure(figsize=(12, 6))

# Gráfica 1 - Tamaño vs. Precio
ax1 = fig.add_subplot(131, projection='3d')
ax1.scatter(X_test['Tamaño'], X_test['Habitaciones'], y_test, c='blue', marker='o', alpha=0.5)
ax1.set_xlabel('Tamaño')
ax1.set_ylabel('Habitaciones')
ax1.set_zlabel('Precio Verdadero')
ax1.set_title('Precio Verdadero vs. Tamaño y Habitaciones')

# Gráfica 2 - Tamaño vs. Precio Predicho
ax2 = fig.add_subplot(132, projection='3d')
ax2.scatter(X_test['Tamaño'], X_test['Habitaciones'], y_pred, c='red', marker='o', alpha=0.5)
ax2.set_xlabel('Tamaño')
ax2.set_ylabel('Habitaciones')
ax2.set_zlabel('Precio Predicho')
ax2.set_title('Precio Predicho vs. Tamaño y Habitaciones')

# Gráfica 3 - Comparación de Precio Verdadero y Precio Predicho
ax3 = fig.add_subplot(133)
ax3.scatter(y_test, y_pred, c='green', alpha=0.5)
ax3.plot([min(y_test), max(y_test)], [min(y_test), max(y_test)], linestyle='--', color='red', linewidth=2)
ax3.set_xlabel('Precio Verdadero')
ax3.set_ylabel('Precio Predicho')
ax3.set_title('Comparación de Precio Verdadero y Precio Predicho')

plt.tight_layout()
plt.show()
