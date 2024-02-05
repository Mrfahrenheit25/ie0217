import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

# Generar datos aleatorios
np.random.seed(42)  # Para reproducibilidad
X = np.random.rand(100, 2) * 10  # 100 puntos bidimensionales en un rango de 0 a 10

# Configurar subgráficos
plt.figure(figsize=(12, 5))

# Subgráfico 1: Visualización de puntos de datos aleatorios
plt.subplot(1, 2, 1)
plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
plt.title('Puntos de Datos Aleatorios')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')

# Configuración de K-Means con un número de clusters (k) específico
kmeans = KMeans(n_clusters=3)

# Ajuste del modelo
kmeans.fit(X)

# Etiquetas de los clusters y coordenadas de los centroides
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

# Subgráfico 2: Resultado del Clustering con K-Means
plt.subplot(1, 2, 2)
for i in range(len(X)):
    plt.scatter(X[i][0], X[i][1], c=('r' if labels[i] == 0 else 'b' if labels[i] == 1 else 'g'), marker='o')

plt.scatter(centroids[:, 0], centroids[:, 1], c='black', marker='X', s=200, label='Centroids')
plt.title('Resultado del Clustering con K-Means')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.legend()

# Ajustar el diseño para evitar solapamientos
plt.tight_layout()

# Mostrar los subgráficos
plt.show()
