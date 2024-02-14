# ie0217
## Este es el archivo README de Aurelio Cordoba Valerio, C12326

**En este archivo se presentan las instrucciones necesarias para la ejecusión de la tarea número 6 y el analisis de los datos de los datos de regresion, posteriormente se presentan las preguntas y respuestas solicitadas en las sección de teoría.**

**Sección de como funciona**
Para correr el programa, se requiere usar el archivo Makefile, en este caso como se trata de python, el makefile no es tan extenso y su facilidad de manejar es considerable.Sin embargo, antes de eso es necesario hacer bueno uso del archivo kaggle.json, el archivo se encuentra en la carpeta de src, es necesario colocar el archivo en la carpeta de C:\Users\'nombre_usuario'\.kaggle para que se hagan los llamados adecuadamente. Con esto claro, se debe de iniciar,
al usar el comando mingw32-make se correra todos los codigos.

**Sección de análisis**  

### Seguidamente se pasa a la parte de preguntas y respuestas 
**Regresión**   
1.	¿Qué es la represión lineal y cómo se diferencia de la regresión no lineal?  
Este es un método estadístico que se utiliza la relación entre variables dependientes e independientes, este se expresa como una ecuación lineal, siendo esta y= a + bx. Esta se diferencia de regresión no lineal en que la regresión lineal asume que la relación entre las variables es lineal, es decir, se puede representar mediante una línea recta; mientras que la regresión no lineal es capaz de modelar relaciones más complejas que no pueden ser representadas por una línea recta, estos modelos pueden ser polinomiales, logarítmicos, exponenciales. No restringiéndose a solo una forma dada.  
Obtenido de: https://www.ibm.com/docs/es/spss-statistics/saas?topic=regression-nonlinear  
2.	¿Qué son los coeficientes de regresión y que información proporcionan sobre la relación entre las variables?  
Los coeficientes en la regresión representan la influencia de las variables independientes en la variable dependiente, en otras palabras, se tratan de la relación entre las variables dependientes e independientes. En la regresión lineal, estos coeficientes representan la pendiente y la intersección de la línea de regresión. Adicionalmente, proporcionan información sobre la magnitud y dirección de la relación entre las variables, por ejemplo, la pendiente indica cuánto cambia la variable dependiente por cada unidad de cambio en la variable independiente, mientras que la intersección indica el valor de la variable dependiente cuando la variable independiente es igual a cero.  
Obtenido de: https://www.ibm.com/docs/es/spss-statistics/saas?topic=regression-nonlinear  
3.	¿Qué es el error cuadrático medio (MSE) y cómo se utiliza para evaluar la precisión de un modelo de regresión?  
El MSE se trata de una medida que indica la precisión de un modelo de regresión al comparar las predicciones del modelo con los valores reales, siendo esta el ajuste de un modelo de regresión. Se calcula como la media de los cuadrados de las diferencias entre los valores observados y los valores predichos por el modelo. Un MSE más bajo indica un mejor ajuste del modelo a los datos observados, ya que significa que las predicciones del modelo están más cerca de los valores reales. Es comúnmente utilizado para evaluar la precisión de un modelo de regresión comparado con otros.  
4.	¿Cuál es la diferencia entre regresión simple y regresión múltiple y cuándo se utiliza cada una?  
La regresión lineal simple usa solamente una variable independiente para predecir la variable dependiente. Es útil cuando se estudia la relación entre solamente dos variables específicas. Mientras que la múltiple involucra múltiples variables independientes para predecir la variable dependiente. Es más compleja, pero permite considerar efectos conjuntos de varias variables, también se utiliza para controlar el efecto de variables adicionales en la relación entre las variables principales.  
**Clustering** 
1.	¿Qué es el clustering y cuál es su objetivo principal en el análisis de datos?  
El clustering es una técnica de análisis de datos que consiste en agrupar un conjunto de objetos de manera que los objetos dentro de un mismo grupo (o cluster) sean más similares entre sí que con los objetos de otros grupos. 
El objetivo principal del clustering es encontrar patrones o estructuras intrínsecas en los datos y segmentarlos en grupos significativos que puedan ayudar en la interpretación y comprensión de los datos. Esta técnica también es utilizada como técnica de aprendizaje automático no supervisado.  
Obtenido de: https://www.conectasoftware.com/magazine/clustering-y-analisis-de-datos/  
2.	Describa brevemente los algoritmos K-Means y DBSCAN y cómo funcionan.
El k-means se trata de un algoritmo de clustering que asigna puntos de datos a uno de K grupos basados en las características de los datos. Comienza eligiendo aleatoriamente K centroides (puntos representativos) y luego asigna cada punto al centroide más cercano. Después de asignar todos los puntos, recalcula los centroides y repite el proceso hasta que los centroides no cambien significativamente.  
El DBSCAN se puede ver como un algoritmo de clustering basado en densidad que agrupa puntos en áreas de alta densidad, separadas por regiones de baja densidad. Funciona encontrando regiones densas de puntos y expandiendo clusters a partir de ellas, asignando puntos adicionales basados en un umbral de distancia y un número mínimo de puntos en la vecindad. Sus siglas vienen de Density-Based Spatial Clustering of Applications with Noise y adicionalmente este detecta outliers y maneja ruido eficientemente.  
Obtenido de: https://datascientest.com/es/machine-learning-clustering-dbscan  
3.	¿qué es la inercia en el contexto del clustering y cómo se utiliza para evaluar la calidad de un agrupamiento?
La inercia es una métrica utilizada en K-Means para evaluar la calidad de un agrupamiento. Se calcula mediante la representación la suma de las distancias al cuadrado entre los puntos y sus centroides. Se busca minimizar la inercia para obtener clústeres compactos, esto sugiere una buena separación entre los clusters. Se utiliza para evaluar la calidad de un agrupamiento eligiendo el número óptimo de clusters que minimice la inercia.    
4.	¿qué son los centroides y cómo se utilizan en el algoritmo K-Means?
Los centroides son puntos que representan el centro de cada cluster en el algoritmo K-Means. En cada iteración del algoritmo, los centroides se actualizan recalculando el promedio de todas las observaciones asignadas a ese cluster. Luego, los puntos de datos se reasignan al centroide más cercano en función de las distancias euclidianas. Este proceso se repite hasta que los centroides convergen y los clusters no cambian significativamente.  
5.	Escriba la diferencia entre datos estructurados y no estructurados para análisis de datos.  
Para empezar, los datos estructurados se tratan de datos organizados en un formato específico y definido, como tablas de bases de datos relacionales o matrices, donde cada fila representa una observación y cada columna representa una característica. Estos datos son fáciles de procesar y analizar utilizando técnicas estadísticas y algoritmos de aprendizaje automático.  
En la otra cara de la moneda, se tienen los datos no estructurados, que son datos que no tienen un formato predefinido y pueden incluir texto, imágenes, audio, video, entre otros. Estos datos son más complejos de analizar y requieren técnicas de procesamiento especializadas, como procesamiento de lenguaje natural (NLP) para texto o visión por computadora para imágenes.  
Obtenido de: https://www.elastic.co/es/what-is/unstructured-data  
***Paquetes de Python**  
1.	¿qué es un paquete en Python y cómo se diferencia de un módulo?  
Se trata de una carpeta que tiene uno o más módulos, y puede que paquetes anidados, se puede ver como un directorio que contiene módulos. En su lugar, un módulo es un archivo Python que contiene código reutilizable, un paquete es una forma de organizar y estructurar varios módulos relacionados dentro de una jerarquía de directorios. Los paquetes permiten organizar y agrupar módulos relacionados en una estructura jerárquica.  
Obtenido de: https://docs.python.org/es/3/tutorial/venv.html  
2.	¿Cuál es la función del archivo __init__.py dentro de un paquete de Python?  
Este se usa para realizar configuraciones de importación dentro de un paquete. Este archivo indica que el directorio que lo contiene es un paquete y puede contener código inicialización u otras configuraciones relevantes para el paquete. Este archivo también se ejecuta automáticamente cuando se importa el paquete.
Obtenido de: https://docs.python.org/es/3/tutorial/venv.html 
3.	¿Cómo se importa un módulo o función desde un paquete en Python?  
Para comenzar, se utiliza la palabra clave import seguida del nombre del paquete y el módulo o función que se desea importar. Acá se brinda un ejemplo de código. 
```
import nombre_del_paquete.nombre_del_modulo
from nombre_del_paquete import nombre_del_modulo
```
4.	¿qué es la variable __all__ en el archivo __init__.py y cuál es su propósito?  
Esta variable es una lista que especifica qué módulos serán importados cuando se use el asterisco (*) en una importación desde ese paquete o cuando se quieran importar “todos” los métodos del paquete. Su propósito es controlar qué partes del paquete se consideran "públicas" y están disponibles para ser importadas de esta manera. Esto ayuda a controlar qué elementos son accesibles desde fuera del paquete.
Obtenido de: https://www.codingem.com/what-is-init-py-file-in-python/  
5.	¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python?  
Dentro de las ventajas de usar este método se tiene la reutilización del código, la estructuración adecuada y coherente, el mantenimiento y el uso del código por separación en pequeñas partes y no en solo una grande.  
GET: Se utiliza para recuperar datos de un recurso específico en el servidor. No tiene efectos secundarios y solo debe usarse para lecturas.  
POST: Se utiliza para enviar datos al servidor para crear un nuevo recurso. Por ejemplo, enviar datos de un formulario.  
PUT: Se utiliza para actualizar un recurso existente en el servidor. El cliente envía los datos actualizados al servidor para que los modifique.  
DELETE: Se utiliza para eliminar un recurso existente en el servidor. El cliente envía una solicitud para eliminar el recurso especificado.  
Estos verbos son parte de la especificación HTTP y proporcionan una forma estándarizada de realizar acciones sobre recursos a través de una API.  

