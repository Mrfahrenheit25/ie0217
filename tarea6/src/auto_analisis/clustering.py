import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import silhouette_score

# Se hace la carga del archivo CSV
data = pd.read_csv("./src/auto_analisis/CAR DETAILS FROM CAR DEKHO_rev.csv")

# Se eligen las caracteristicas para clustering (años y precios)
X = data.iloc[:, [1, 2]].values

# Se hace la escala adecuada de datos
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# Se procede a encontrar el numero adecuado de clusters mediante el metodo del codo
wcss = []
max_clusters = 10
for i in range(1, max_clusters + 1):
    kmeans = KMeans(n_clusters=i, init='k-means++', random_state=42)
    kmeans.fit(X_scaled)
    wcss.append(kmeans.inertia_)

# Se grafica y se muestra la grafica del metodo del codo en pantalla
plt.plot(range(1, max_clusters + 1), wcss)
plt.title('Método del Codo')
plt.xlabel('Número de Clusters')
plt.ylabel('WCSS (Within-Cluster Sum of Squares)')
plt.show()

# Se eligen los clusters segun el metodo del codo, son 4 por lo que se observa en la grafica
optimal_num_clusters = 4 

# Se aplica kmeans con los numeros seleccionados
kmeans = KMeans(n_clusters=optimal_num_clusters, init='k-means++', random_state=42)
kmeans.fit(X_scaled)

# Se obtienen las etiquetas
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

# Se calcula el coeficiente de la silueta para ver el redimiento
silhouette_avg = silhouette_score(X_scaled, labels)
print("Coeficiente de silueta:", silhouette_avg)

# Se grafican y muestran los clusters en pantalla
plt.scatter(X_scaled[:, 0], X_scaled[:, 1], c=labels, cmap='viridis')
plt.scatter(centroids[:, 0], centroids[:, 1], marker='o', s=300, c='red', label='Centroides')
plt.title('Clustering de Años vs Precio')
plt.xlabel('Años (Estandarizado)')
plt.ylabel('Precio (Estandarizado)')
plt.legend()
plt.show()

#Ahora se hace el segundo cluster, con los datos del kilometraje y con los datos del precio

# Se eligen las caracteristicas para clustering (precio y distancia recorrida)
X = data.iloc[:, [3, 2]].values

# Se hace la escala adecuada 
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# Se encuentra el numero de clusters optimo
wcss = []
max_clusters = 10
for i in range(1, max_clusters + 1):
    kmeans = KMeans(n_clusters=i, init='k-means++', random_state=42)
    kmeans.fit(X_scaled)
    wcss.append(kmeans.inertia_)

# Se grafica el metodo del codo.
plt.plot(range(1, max_clusters + 1), wcss)
plt.title('Método del Codo')
plt.xlabel('Número de Clusters')
plt.ylabel('WCSS (Within-Cluster Sum of Squares)')
plt.show()

# Se eligen los clusters segun el metodo del codo, son 4 por lo que se observa en la grafica
optimal_num_clusters = 5  

# Se aplica el Kmeans con los clusters adecuados
kmeans = KMeans(n_clusters=optimal_num_clusters, init='k-means++', random_state=42)
kmeans.fit(X_scaled)

# Se obtienen las etiquetas de los centroides
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

# Se calcula e coeficiente de la silueta 
silhouette_avg = silhouette_score(X_scaled, labels)
print("Coeficiente de silueta:", silhouette_avg)

# Se grafican los clusters para el kilometraje y los precios
plt.scatter(X_scaled[:, 0], X_scaled[:, 1], c=labels, cmap='viridis')
plt.scatter(centroids[:, 0], centroids[:, 1], marker='o', s=300, c='red', label='Centroides')
plt.title('Clustering de Precio vs Distancia Recorrida')
plt.xlabel('Precio (Estandarizado)')
plt.ylabel('Distancia Recorrida (Estandarizado)')
plt.legend()
plt.show()