import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
import requests
import os

# Cargar datos
# Obtener datos de https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv
# y almacenarlos en data/dataset.csv

# La variable tipo string que contiene el siguiente URL
url = 'https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv'

# Usando  metodo get para obtener los datos con el request
data_web = requests.get(url)
# Se crea el directorio si no existe la carpeta la carpeta de laboratorio6
if not os.path.exists('data'):
    os.mkdir('data')

''' Se abre el archivo (o se crear en caso de no existir)
# w: con write para escibir
# ruta a la que se guarda el archivo: data/dataset.csv '''
with open('data/dataset.csv', 'w') as datos:
    # escribir los datos obtenidos del URL en el archivo de la ruta
    datos.write(data_web.text)


data = pd.read_csv("data/dataset.csv")

# -----------
#     1
# -----------
''' Se crea el data frame con los datos, se extraen los valores y se hace un reshape, no solo como un array
es un array de arrays, solo es necesario con los datos del eje x'''
X_simple = data['median_income'].values.reshape(-1, 1)
y_simple = data['median_house_value'].values

'''Se entrenan y dividen los datos en los de prueba y de entrenamiento, con las pruebas del tamano de 
20 % y las seleccion pseudo random del modelo'''
X_train, X_test, y_train, y_test = train_test_split(X_simple, y_simple, test_size=0.2, random_state=42)

# Se hace el objeto de regresion lineal con los datos del entrenamiento, es lo que pasa
model_simple = LinearRegression()
model_simple.fit(X_train, y_train)

# Ahora se hacen las predicciones de los valores, esto para una sola variable
y_pred_simple = model_simple.predict(X_test)


mse_simple = mean_squared_error(y_test, y_pred_simple)
print(f"Error cuadrático medio (MSE) en regresión lineal simple: {mse_simple}")

# -----------
#     2
# -----------
'''Se extraen los datos o variables a analizar del dataframe y 
se almacenan en ciertas variables para su analisis posterior,
se puede ver que en este caso tienen multiples variables, a 
diferencia de la parte 1.
'''
X_multiple = data[['median_income', 'housing_median_age', 'population']]
y_multiple = data['median_house_value'].values

'''Aca se dividen las varaibles dadas en las de prueba y las de entrenamiento
se usa un 20 porciento para la prueba y un 80 para el entrenamiento, ademas 
se elige la semilla 42 para hacerlo pseudorandom'''
X_train_multi, X_test_multi, y_train_multi, y_test_multi = train_test_split(X_multiple, y_multiple, test_size=0.2, random_state=42)

# Se crea el objeto con el modelo de Regrsion lineal
model_multiple = LinearRegression()
# Se entrena el modelo utilizando los datos de entrenamiento 
model_multiple.fit(X_train_multi, y_train_multi)

'''Se utilizan las caracteristicas del conjunto de prueba 
para predecir los valores de la variable objetivo. '''
y_pred_multiple = model_multiple.predict(X_test_multi)

"Se calcula y se imprime el error cuadratico medio de los valores"
mse_multiple = mean_squared_error(y_test_multi, y_pred_multiple)
print(f"Error cuadrático medio (MSE) en regresión lineal múltiple: {mse_multiple}")

# -----------
#     3
# -----------
# sklearn para predicir las variables
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline

'''Se obtienen los valores de la columna de media de edad de casa, 
pero se hace el reshape para que los datos queden mas acordes'''
X_nonlinear = data['housing_median_age'].values.reshape(-1, 1)
y_nonlinear = data['median_house_value'].values

# se divide el conjunto de datos en el entrenamiento y las prubeas, de igual manera, con unas prubeas del 20% y el psudorandom de 42
X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(X_nonlinear, y_nonlinear, test_size=0.2, random_state=42)

#grado polinomial del modelo de regresion
degree = 2
#se crea el modelo de regresion mediante los datos del entrenamiento
model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
# se ajusta el modelo de regresion no lineal
model_nonlinear.fit(X_train_nonlinear, y_train_nonlinear)

# se predicen los datos nuevos mediante el modelo
y_pred_nonlinear = model_nonlinear.predict(X_test_nonlinear)

# se calcula el error cuadratico medio y se muestra en pantalla
mse_nonlinear = mean_squared_error(y_test_nonlinear, y_pred_nonlinear)
print(f"Error cuadrático medio (MSE) en regresión no lineal: {mse_nonlinear}")

# -----------
#     4
# -----------
''''''
from sklearn.linear_model import Ridge, Lasso
'''EL ridge se encarga de la penalizacion siendo proporcional a los valores cuadrados de los
coeficientes. El alpha define que tan estricta es la penalizacion '''
model_ridge = Ridge(alpha=1.0)
# Se usa el modelo de los datos
model_ridge.fit(X_train_multi, y_train_multi)

'''El lasso se da la penalizacion siendo proporcional a los valores absolutos de 
los coeficientes'''
model_lasso = Lasso(alpha=1.0)
#Se  aplica el modelo
model_lasso.fit(X_train_multi, y_train_multi)

# -----------
#     5
# -----------
from sklearn.cluster import KMeans, DBSCAN
import matplotlib.pyplot as plt


X_cluster = data[['longitude', 'latitude']]


kmeans = KMeans(n_clusters=3, random_state=42, n_init=10)
data['cluster_kmeans'] = kmeans.fit_predict(X_cluster)


dbscan = DBSCAN(eps=0.5, min_samples=5)
data['cluster_dbscan'] = dbscan.fit_predict(X_cluster)


plt.scatter(data['longitude'], data['latitude'], c=data['cluster_kmeans'], cmap='viridis', marker='.')
plt.title('Clusters usando K-means')
plt.show()

plt.scatter(data['longitude'], data['latitude'], c=data['cluster_dbscan'], cmap='viridis', marker='.')
plt.title('Clusters usando DBSCAN')
plt.show()
