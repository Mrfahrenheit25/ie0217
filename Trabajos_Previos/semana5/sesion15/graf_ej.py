import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np

# Crear una figura conteniendo solo los ejes 
fig, ax = plt.subplots() 
# Poner datos en los ejes
ax.plot([1,2,3,4],[1,4,2,3])
plt.show()