import requests

response = requests.get('https://jsonplaceholder.typicode.com/todos/1')

print("Tipo de respuesta:", type(response))
print("Respuesta completa:", response)
print("Texto de respuesta:", response.text)
print("Diccionario de la respuesta:", response.__dict__)
