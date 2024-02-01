# Se importa la biblioteca Pandas y se la renombra como pd para facilitar la referencia.
import pandas as pd

# Se crea un DataFrame con los datos proporcionados.
df = pd.DataFrame(
    {
        "Name": ["Braund, Mr. Owen Harris",
                 "Allen, Mr William Henry",
                 "Bonnell, Miss. Elizabeth"
        ],
        "Age": [22, 35, 58],
        "Sex": ["male", "male", "female"]
    }
)

# Se muestra el DataFrame en la salida estándar.
print("Contenido del DataFrame:")
print(df)

# Se muestra un resumen estadístico del DataFrame df utilizando el método describe().
# Este método proporciona estadísticas descriptivas para cada columna numérica en el DataFrame.
print("\nResumen estadístico del DataFrame:")
print(df.describe())