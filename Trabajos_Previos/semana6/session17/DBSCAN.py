import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# Generar datos de ejemplo (luna creciente)
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Configurar y ajustar el modelo DBSCAN
dbscan = DBSCAN(eps=0.3, min_samples=5)
dbscan_labels = dbscan.fit_predict(X)

# Visualizar resultados
plt.scatter(
    X[:, 0], X[:, 1], c=dbscan_labels, cmap='viridis', edgecolor='k', s=58)
plt.title('Resultado del Clustering DBSCAN')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.show()
