import requests

# URL de la página web a la que deseas enviar la solicitud GET
url = "https://www.google.com"

# Enviar la solicitud GET y obtener la respuesta
response = requests.get(url)

# Imprimir el contenido de la respuesta
print(response.text)
