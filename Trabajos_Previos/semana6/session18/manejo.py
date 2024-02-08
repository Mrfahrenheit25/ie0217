import requests
# Manejo de Errores
try:
    # Enviar una solicitud GET a una página inexistente
    response = requests.get('https://ejemplo.com/pagina-inexistente')

    # Generar una excepción si hay un error HTTP
    response.raise_for_status()

    # Imprimir el contenido de la respuesta
    print(response.text)

except requests.exceptions.HTTPError as err:
    # Manejar la excepción si ocurre un error HTTP
    print(f"Error HTTP: {err}")
