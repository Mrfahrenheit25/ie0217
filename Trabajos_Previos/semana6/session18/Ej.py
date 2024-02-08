import requests

# Paso 1: Realizar una solicitud para obtener datos de usuarios
users_response = requests.get('https://jsonplaceholder.typicode.com/users')

# Extraer los datos de usuarios en formato JSON
users_data = users_response.json()

# Paso 2: Realizar una solicitud para obtener datos de publicaciones
posts_response = requests.get('https://jsonplaceholder.typicode.com/posts')

# Extraer los datos de publicaciones en formato JSON
posts_data = posts_response.json()

# Paso 3: Procesar los datos para obtener información relevante
# Un diccionario para almacenar las publicaciones de cada usuario
user_posts = {}

for user in users_data:
    user_posts[user['id']] = []

for post in posts_data:
    user_id = post.get('userId')  # Usar .get() para evitar KeyError
    if user_id in user_posts:
        user_posts[user_id].append({
            'title': post['title'],
            'body': post['body']
        })

# Paso 4: Mostrar los resultados
for user_id, posts in user_posts.items():
    user = next((user for user in users_data if user['id'] == user_id), None)
    if user:
        print(f"\nPublicaciones de {user['name']} ({user['email']}):\n")
        for post in posts:
            print(f"Title: {post['title']}\nBody: {post['body']}\n")
    else:
        print(f"No se encontraron datos para el usuario con ID {user_id}")