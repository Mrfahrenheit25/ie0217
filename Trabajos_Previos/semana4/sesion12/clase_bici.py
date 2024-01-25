class Bike:
    name =""
    gear = 0

    def __init__(self, nombre=""):
        self.name = nombre
        pass

bike1 = Bike("Bici 32")
print("EL nombre de la cleta es", bike1.name)
