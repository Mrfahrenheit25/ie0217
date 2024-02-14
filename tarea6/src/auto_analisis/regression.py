import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.pipeline import make_pipeline
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error

# Se carga el archivo CSV
data = pd.read_csv("CAR DETAILS FROM CAR DEKHO_rev.csv")




# Parte de los años del carro y su relación con el precio

''' Se crea el data frame con los datos, se extraen los valores y se hace un reshape, se toman los calores de 
los años y el precio'''
X = data.iloc[:, 1].values.reshape(-1, 1)  # Años
y = data.iloc[:, 2].values.reshape(-1, 1)  # Precio

'''Se dividen los datos en conjuntos de entrenamiento y prueba, con las pruebas en un tamano de 
20%, y la seleccion pseudo random del modelo'''
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Se hace el modelo de regresion lineal y se entrena con los datos seleccionados
regresion_model = LinearRegression()
regresion_model.fit(X_train, y_train)

# Ahora se hacen las predicciones de los valores
y_pred = regresion_model.predict(X_test)

'''Se procede a evaluar el modelo con los siguientes parametros 
y se imprimen los resultados del mismo en pantalla''' 
MSE = mean_squared_error(y_test, y_pred)
r2 = r2_score(y_test, y_pred)
MAE = mean_absolute_error(y_test, y_pred)
print("Resultados del modelo de regresión lineal para predicción de precios:")
print("MSE:", MSE)
print("R²:", r2)
print("MAE:", MAE)

# Se hace la grafica de la regresión lineal de la relacion de los anos y el precio
plt.scatter(X_test, y_test, color='blue')
plt.plot(X_test, y_pred, color='red')
plt.title('Regresión lineal: Años vs Precio')
plt.xlabel('Años')
plt.ylabel('Precio')
plt.show()

#Parte del modelo no lineal de los precios y el ano del carro 

# Modelado de la regresión no lineal (polinomial) para predecir precios basados en años
X_no_lin= data.iloc[:, 1].values.reshape(-1, 1)  # Años
y_no_lin = data.iloc[:, 2].values.reshape(-1, 1)  # Precio

# se divide el conjunto de datos en el entrenamiento y las prubeas, de igual manera, con unas prubeas del 20% y el psudorandom de 42
X_train_no_lin, X_test_no_lin, y_train_no_lin, y_test_no_lin = train_test_split(X_no_lin, y_no_lin, test_size=0.2, random_state=42)

# Transformar características para crear características polinomiales
# grado polinomial del modelo
degree = 2
#se crea el modelo de regresion mediante los datos del entrenamiento
model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
# se ajusta el modelo de regresion no lineal
model_nonlinear.fit(X_train_no_lin, y_train_no_lin)

# se predicen los datos nuevos mediante el modelo
y_pred_nonlinear = model_nonlinear.predict(X_test_no_lin)


# Evaluar el modelo
MSE = mean_squared_error(y_test_no_lin, y_pred_nonlinear)
r2 = r2_score(y_test_no_lin, y_pred_nonlinear)
MAE = mean_absolute_error(y_test_no_lin, y_pred_nonlinear)

print("\nResultados del modelo de regresión polinomial para predicción de precios basados en años:")
print("MSE:", MSE)
print("R²:", r2)
print("MAE:", MAE)


# Gráfico de la regresión polinomial
plt.scatter(X_test_no_lin, y_test_no_lin, color='blue')
plt.plot(X_test_no_lin, y_pred_nonlinear, color='red')
plt.title('Regresion polinomial: Años vs Precio')
plt.xlabel('Años')
plt.ylabel('Precio')
plt.show()

# Parte de los precios y su relacion con el kilometraje

''' Se crea el data frame con los datos, se extraen los valores y se hace un reshape, se toman los valores de 
el kilometraje y el precio'''
X = data.iloc[:, 3].values.reshape(-1, 1)  # Kilómetros
y = data.iloc[:, 2].values.reshape(-1, 1)  # Precio

'''Se dividen los datos en conjuntos de entrenamiento y prueba, con las pruebas en un tamano de 
20%, y la seleccion pseudo random del modelo'''
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Se hace el modelo de regresion lineal y se entrena con los datos sleccionados
regresion_model = LinearRegression()
regresion_model.fit(X_train, y_train)

# Se hacen las predicciones prudentes
y_pred = regresion_model.predict(X_test)

# Se evalua el modelo y se imprimen los resultados en la terminal 
MSE = mean_squared_error(y_test, y_pred)
r2 = r2_score(y_test, y_pred)
MAE = mean_absolute_error(y_test, y_pred)
print("\nResultados del modelo de regresion lineal para prediccion de precios basados en kilometros:")
print("MSE:", MSE)
print("R²:", r2)
print("MAE:", MAE)
# Se hace el grafico de la regresion lineal
plt.scatter(X_test, y_test, color='blue')
plt.plot(X_test, y_pred, color='red')
plt.title('Regresion lineal: Kilometros vs Precio')
plt.xlabel('Kilometros')
plt.ylabel('Precio')
plt.show()

#Parte no lineal de la relacion de precios y el kilometraje
# Modelado de la regresión no lineal (polinomial) para predecir precios basados en años
X_no_lin= data.iloc[:, 3].values.reshape(-1, 1)  # Kilometraje
y_no_lin = data.iloc[:, 2].values.reshape(-1, 1)  # Precio

# se divide el conjunto de datos en el entrenamiento y las prubeas, de igual manera, con unas prubeas del 20% y el psudorandom de 42
X_train_no_lin, X_test_no_lin, y_train_no_lin, y_test_no_lin = train_test_split(X_no_lin, y_no_lin, test_size=0.2, random_state=42)

# Transformar características para crear características polinomiales
# grado polinomial del modelo
degree = 2
#se crea el modelo de regresion mediante los datos del entrenamiento
model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
# se ajusta el modelo de regresion no lineal
model_nonlinear.fit(X_train_no_lin, y_train_no_lin)

# se predicen los datos nuevos mediante el modelo
y_pred_nonlinear = model_nonlinear.predict(X_test_no_lin)

# Evaluar el modelo
MSE = mean_squared_error(y_test_no_lin, y_pred_nonlinear)
r2 = r2_score(y_test_no_lin, y_pred_nonlinear)
MAE = mean_absolute_error(y_test_no_lin, y_pred_nonlinear)

print("\nResultados del modelo de regresion polinomial para prediccion de precios basados en años:")
print("MSE:", MSE)
print("R²:", r2)
print("MAE:", MAE)

# Gráfico de la regresión polinomial
plt.scatter(X_test_no_lin, y_test_no_lin, color='blue')
plt.plot(X_test_no_lin, y_pred_nonlinear, color='red')
plt.title('Regresion polinomial: Kilometros vs Precio')
plt.xlabel('Kilometros')
plt.ylabel('Precio')
plt.show()