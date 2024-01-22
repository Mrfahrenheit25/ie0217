# Diccionario inicial
capital_city = {"Nepal": "Kathmandu", "England": "London"}
print("Initial Dictionary:", capital_city)

# Añadir una nueva entrada al diccionario
capital_city["Japan"] = "Tokyo"
print("Updated Dictionary:", capital_city)

# Diccionario inicial
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print("Initial Dictionary:", student_id)

# Actualizar el valor asociado a la clave 112 en el diccionario
student_id[112] = "Stan"
print("Updated Dictionary:", student_id)

del student_id[111]
print("Updated Dictionary:", student_id)
