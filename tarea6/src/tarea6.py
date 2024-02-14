import os
from kaggle.api.kaggle_api_extended import KaggleApi

# Obtener los datos de internet
api = KaggleApi()
api.authenticate()
dataset_name = "akshaydattatraykhare/car-details-dataset"
# Se guardan los datos
api.dataset_download_files(dataset_name, path="./src/auto_analisis", unzip = True)
