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

# Se crea una Serie de Pandas con las edades proporcionadas y se le asigna el nombre "Age".
ages = pd.Series([22, 35, 58], name="Age")

# Se calcula el valor máximo de la Serie de edades utilizando el método max().
max_age = ages.max()
print("\nLa edad máxima es:", max_age)


