# ie0217
## Este es el archivo README de Aurelio Cordoba Valerio, C12326

**En este archivo se presentan las instrucciones necesarias para la ejecusión de la tarea número 4 y el analisis de la segunda parte del codigo y la velocidad del lenguaje, posteriormente se presentan las preguntas y respuestas solicitadas en las sección de teoría.**

**Sección de como funciona**
Para correr el programa, se requiere usar el archivo Makefile, en este caso como se trata de python, el makefile no es tan extenso y su facilidad de manejar es considerable. Para empezar, no estan presentes los comandos de limpiar ni de compilar por la naturaleza del lenguaje. Entonces, en este caso para que se ejecute el programa en su totalidad solamente es necesario el comando de run, que ejecuta el archivo en donde esta el resto del codigo, en este caso es la interfaz grafica, por lo tanto con tan solo el comando mingw32-make es suficiente para correr el codigo, sin embargo la alternativa de mingw32-make run tambien es valida.

**Sección de análisis**


### Seguidamente se pasa a la parte de preguntas y respuestas 
**1.	Explique la diferencia entre una lista y una tupla en Python.**  
Empezando, una lista es una estructura de datos mutable en Python, lo que significa que puede cambiar después de que se crea. Puedes agregar, eliminar o modificar elementos de una lista. Una tupla, por otro lado, es inmutable. Una vez creada, no se puede cambiar. Los elementos de una tupla no pueden ser modificados, agregados ni eliminados después de la creación. Las tuplas se definen utilizando paréntesis () en lugar de corchetes [] como en el caso de las listas.  
**2.	¿Qué es la sobrecarga de operadores en Python y cómo se implementa?**  
La sobrecarga de operadores en Python se refiere a la capacidad de los objetos para cambiar el significado de los operadores incorporados de Python. Esto permite a los objetos de clases definidas por el usuario utilizar operadores como +, -, *, /, etc., con significados personalizados.    
Se implementa definiendo métodos especiales en la clase que comienzan y terminan con doble guion bajo que representan el operador que se desea sobrecargar. Por ejemplo, para sobrecargar la adición (+), se define el método __add__. De esta manera, cuando se utiliza el operador + con instancias de la clase, Python llama automáticamente al método __add__ de esa clase.  
**3.	Explique el concepto de “alcanzabilidad” (scope) de una variable en Python.**  
El alcance de una variable en Python se refiere a la región del código donde esa variable es accesible. Python sigue reglas de alcance léxico, lo que significa que la visibilidad de una variable está determinada por la ubicación física en el código fuente.  
El alcance de una variable se define por la ubicación de la variable dentro del código. Las variables pueden tener alcance global, que significa que son accesibles en todo el programa, o alcance local, que significa que solo son accesibles dentro de una función o bloque específico.  
**4.	¿Qué es un decorador en Python y cuál es su función principal?**   
Un decorador en Python es una función que toma otra función como argumento y extiende su funcionalidad sin modificar su código explícitamente. Los decoradores permiten agregar funcionalidades a funciones existentes de manera modular y reutilizable.
El propósito principal de un decorador es envolver una función y modificar su comportamiento sin cambiar su definición. Esto es útil para tareas como registro, control de acceso, validación de entrada, etc.  
**5.	¿Cómo se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally.**  
En Python, las excepciones se gestionan mediante bloques try, except y opcionalmente finally. El bloque try se utiliza para probar un bloque de código en busca de errores. El bloque except se utiliza para manejar las excepciones que ocurren dentro del bloque try. El bloque finally se utiliza para ejecutar código, independientemente de si se produce una excepción o no, este brinda el mensaje de una u otra forma.  
```
try:
    numerator = 10
    denominator = 0
    result = numerator / denominator
    print(result)
except ZeroDivisionError:
    print("Error: El denominador no puede ser 0.")
finally:
    print("Este es el bloque de finalizacion")
``` 
**6.	¿Qué son los generadores en Python y para qué se utilizan?**   
Los generadores en Python son funciones que producen secuencias de valores utilizando la declaración yield en lugar de return. Permiten la iteración sobre grandes conjuntos de datos de manera eficiente al generar valores sobre la marcha en lugar de almacenarlos todos en la memoria. Los generadores se utilizan cuando se necesitan iteradores, pero no es necesario almacenar todos los valores en la memoria al mismo tiempo. Esto es especialmente útil cuando se trabaja con conjuntos de datos enormes o se generan valores en tiempo real. Uno de sus principales ventajas es que permite la generación de valores al vuelo, sin que todos estén almacenados en memoria.  
Obtenido de: https://ellibrodepython.com/yield-python     
**7.	Explique la diferencia entre __init__ y __call__ en clases de Python.**   
Entonces, el “__init__” es un método especial en Python que se llama automáticamente cuando se instancia un objeto de una clase. Se utiliza para inicializar las variables de instancia de la clase, adicionalmente se comporta como un constructor en otros lenguajes de programación.
El “__call__” es otro método especial en Python que permite que una instancia de clase se comporte como una función y sea invocada utilizando paréntesis. Es decir, cuando se llama al objeto, Python llama al método __call__ de esa instancia.    
Obtenido de: https://www.geeksforgeeks.org/what-is-the-difference-between-__init__-and-__call__/  
**8.	¿Cómo se organizan los módulos y paquetes en Python? ¿Qué es __init__.py?**   
En Python, los módulos son archivos individuales que contienen código Python, mientras que los paquetes son directorios que contienen uno o más módulos, y un archivo especial llamado __init__.py.  
El archivo __init__.py indica que el directorio debe considerarse un paquete de Python, incluso si no contiene ningún módulo directamente. Puede contener código de inicialización para el paquete. Los paquetes permiten organizar y estructurar grandes proyectos de Python en módulos y submódulos, facilitando la reutilización y la mantenibilidad del código.  
**9.	Explique la diferencia entre métodos append() e extend() en listas de Python.**  
El método “append()” se encarga de agregar un solo elemento al final de la lista. Si el argumento es una lista, la lista se agregará como un solo elemento al final de la lista original.
El método “extend()” se encarga de agregar todos los elementos de una lista (u otra iterable) al final de la lista. Es decir, extiende la lista original con los elementos de la lista pasada como argumento.  
Obtenido de: Python Lista Append vs. Python Lista Extend - Su Diferencia Explicada con Ejemplos de Métodos de Listas (freecodecamp.org)  
**10.	¿Cuál es la diferencia entre un método de clase y un método estático en Python?**   
El método de clase, en Python está asociado con la clase y no con las instancias de la clase. Recibe automáticamente la clase como primer argumento, comúnmente llamado cls. Puede acceder a los atributos de la clase, pero no a los atributos de las instancias. Se necesita una instancia de clase para poder ser utilizado y obtener resultados específicos para esa instancia.  
El método estático, no recibe automáticamente ni la instancia de la clase ni la clase como argumento. Se comporta como una función regular, pero está definido dentro del alcance de la clase por razones de organización y encapsulación. No necesita parámetros específicos y no puede acceder ni modificar el estado de la clase.  
Obtenido de: https://atareao.es/pyldora/los-metodos-de-clase-y-los-metodos-estaticos-en-python/  
**11. Hable sobre las diferencias entre herencia simple y herencia múltiple en Python**   
Para la herencia simple, en Python, una clase puede heredar de una sola clase base. Esto significa que puede heredar atributos y métodos de una sola clase padre. La sintaxis es simple y directa.
Para la herencia múltiple, python permite que una clase herede de múltiples clases base. Esto significa que una subclase puede heredar atributos y métodos de más de una clase padre. Sin embargo, la herencia múltiple puede llevar a complejidades y problemas de diseño si no se gestiona cuidadosamente. En la herencia múltiple, las características de todas las clases base se heredan en la clase derivada.  
**12.	¿Cómo se manejan los errores de importación de módulos en Python?**  
Se manejan los errores de importación de módulos arrojando la excepción “ModuleNotFoundError” cuando un módulo que se está intentando importar no se encuentra en el sistema.
Para manejar este tipo de errores, se pueden usar bloques try-except para capturar la excepción “ModuleNotFoundError” y tomar las medidas adecuadas, como imprimir un mensaje de error.  
**13.	¿Cuál es la diferencia entre una clase y un objeto en Python?**  
Una clase es una plantilla genérica para crear objetos. Proporciona variables iniciales de estado (donde se guardan los atributos) e implementaciones de comportamiento (métodos), en otras palabras, definen las propiedades y comportamientos que los objetos de esa clase tendrán.
Un objeto, por otro lado, es una instancia de una clase. Cada objeto es una entidad específica que tiene su propio estado y comportamiento definido por la clase. Estos objetos pueden interactuar con otros objetos.  
Obtenido de: https://pythondiario.com/2014/10/clases-y-objetos-en-python-programacion.html  
**14.	Hable sobre la diferencia entre una clase abstracta y una interfaz en Python.**   
Una clase abstracta en Python puede tener métodos que son abstractos o que no lo sean, mientras que las interfaces sólo y exclusivamente pueden definir métodos abstractos. Una clase abstracta puede heredar de una sola clase (abstracta o no) mientras que una interfaz puede extender varias interfaces de una misma vez. Adicionalmente la clase abstracta no se puede instanciar directamente y los métodos abstractos deben ser implementados por clases derivadas.  
**15.	Explique el concepto de sobreescritura de métodos en Python y cómo se realiza.**  
La sobreescritura de métodos en Python es la capacidad de una subclase para proporcionar una implementación específica de un método que ya está definido en una clase base. Para realizar la sobreescritura de un método, simplemente se define un método con el mismo nombre en la subclase que el método que se quiere sobrescribir en la clase base. Cuando se llama al método desde una instancia de la subclase, se ejecuta la implementación definida en la subclase en lugar de la implementación en la clase base.  