import requests

# Manejo de Respuesta
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
# Imprimir el código de estado de la respuesta
print("Código de estado:", response.status_code)
# Imprimir los encabezados de la respuesta
print("Encabezados:", response.headers)
# Imprimir el contenido JSON de la respuesta (si la respuesta es JSON)
print("Contenido JSON:", response.json())