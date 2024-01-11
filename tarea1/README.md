# ie0217
## Este es el archivo README de Aurelio Cordoba Valerio, C12326

**En este archivo se presentan las instrucciones necesarias para la ejecusión de la tarea número 1, posteriormente se presentan las preguntas y respuestas solicitadas en las sección de teoría.**

**Sección de como funciona**
    Para correr el juego, se requiere usar el archivo Makefile, en este caso si se quiere jugar se tiene que usar el comando ya sea make all o mingw32-make all, este lo que hara sera hacer el ejecutable y seguidamente correrlo. Una vez se esta en el juego se sigen las instrucciones para que todo vaya sobre ruedas.  
    Si se quiere eliminar el archivo ejecutable, se puede usar el comando make clean o mingw32-make clean, con esto ya no se podria correr el juego. Si se quiere correr el ejecutable ya creado se puede usar el comando make run o mingw32-make run.
### Seguidamente se pasa a la parte de preguntas y respuestas 
**Se empezará con la parte de teórica de C y luego se hará la parte teórica de la automatización**

**1.¿Cuál es la principal diferencia entre C y C++?**  
Entre estos dos lenguajes de programación, existen diferencias notables uno con el otro, sin embargo, la principal diferencia se trata de que C++ si permite la programación orientada a objetos, mientras que C no es capaz de manejar tal función. Esto es interesante ya que C++ es una extensión de C, de hecho, en un inicio se llamó “C with clases”, es lenguaje basado en C, pero con más capacidad. Adicionalmente C es un lenguaje de programación solamente procedural, mientras que C++ es procedural y orientado a objetos.
**Obtenido de : https://fp.uoc.fje.edu/blog/tipos-de-lenguaje-de-programacion-diferencias-entre-c-c-c/**    
**2.¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.**  
El lenguaje de programación compilado, el código de la fuente se traduce por completo a lenguaje máquina antes de la ejecución y se genera un código ejecutable o un binario, en cambio, el interpretado se utiliza otro programa conocido como el interprete(programa externo) para ejecutar el programa, acá no se produce un ejecutable externo.  
Generalmente se tiene que los lenguajes compilados son considerablemente más rápidos que los interpretados, entonces un ejemplo de un buen uso de los lenguajes compilados sería en el desarrollo de  sistemas embebidos en los cuales el rendimiento y la eficacia sean primordial, por ejemplo en el desarrollo de controladores. Adicionalmente también se dice que los compilados están mejor optimizados para manejar el lenguaje ensamblador para aprovechar los recursos del hardware. Para el lenguaje interpretado, estos son más flexibles y dinámicos, estos lenguajes serían buenos para la automatización o el procesamiento de datos, adicionalmente, pueden ser utilizados en trabajos donde se tenga en cuenta la facilidad de mantenimiento sobre la máxima eficiencia ejecutiva, por ejemplo, proyectos pequeños o a corta escala.  
**Obtenido de: https://www.freecodecamp.org/espanol/news/lenguajes-compilados-vs-interpretados/#:~:text=En%20un%20lenguaje%20compilado%2C%20la,el%20código%20y%20lo%20ejecuta.**  
**3.Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**  
El linker o enlazador se trata de el programa que tiene como función tomar todos los archivos de objeto (.o) que genera el compilador o las bibliotecas, juntarlos y generar el archivo ejecutable, este optimiza, toma lo que necesita y descarta lo que no, enlaza el código objeto con sus biblioteca, y finalmente produce el ejecutable. En el caso de Windows sería el archivo.exe. Entonces este se encarga de general el ejecutable, resuelve dependencias y optimiza el código.  
**Obtenido de: https://ainotes298786558.wordpress.com/2021/05/24/que-es-el-linker/**  
**4.Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.**  
Los tipos de datos primarios se tratan de los datos básicos con los cuales el usuario puede definir las variables, estos se encuentran integrados en C++, hay varios ejemplos: los flotantes, los enteros, los booleanos, los caracteres …  
En cambio los datos derivados, como su nombre lo implica, derivan de los datos primarios, los datos derivados son creados combinado datos primitivos, estos datos derivados son: las funciones, los arreglos, los punteros, y las referencias.  
**Obtenido de: https://www.scaler.com/topics/cpp/data-types-in-cpp/**  
**5.Defina qué significa inicializar y declarar una variable.**  
Declarar una variable significa especificar su tipo y su nombre para que el compilador sepa de la existencia de la variable, pero no asigna un valor a esta variable. En su lugar, inicializar la variable implica asignar un valor en particular a la variable en el momento de su creación o declaración.  
**6.¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**  
La sobrecarga de funciones se trata de el proceso mediante el cual se establecen diversas funciones con un mismo nombre, pero con distintos conjuntos de parámetros, debido al tipo de dato que se le ingresa, esta trabaja con la función asignada. Dentro de los posibles beneficios pueden estar el usar un mismo nombre para funciones similares, haciendo que el código sea más sencillo de leer e interpretar y que la sintaxis del código sea considerablemente más consistente; adicionalmente, permite hacer varias funciones con un mismo nombre para resolver un problema según se requiera este tipo de dato.  
**Obtenido de: https://learn.microsoft.com/es-es/cpp/cpp/function-overloading?view=msvc-170**  
**7.¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**  
Un puntero se trata de una variable que almacena la dirección en la memoria de dónde se guardó un objeto o una variable. Generalmente se utilizan para iterar sobre elementos, pasar funciones a otras funciones o asignar nuevos objetos en un grupo.  
Un ejemplo de la vida real, puede ser tener una cantidad grande de gavetas rotuladas cada una con un identificador distinto, ahora en una de estas gavetas, por ejemplo, en la gaveta número 3, se introduce una pelota. Si se pregunta por el contenido de la gaveta número 3, está la pelota. Si se pregunta por en dónde se almacenó la pelota o dónde está almacenada, este valor corresponde al identificador, que en este caso es el número 3.  
**Obtenido de: https://learn.microsoft.com/es-es/cpp/cpp/pointers-cpp?view=msvc-170**  
**8.¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos**  
En una variable global, se opera directamente sobre la función y no sobre su copia, está almacena el valor original y las operaciones realizadas a esta función afectarán directamente a este valor. Cuando se utilizan las variables globales en una función, cuando se utilizan dentro de una función, si la función acepta la variable por referencia, puede modificar directamente la variable global original, ya que se le proporciona la dirección de memoria de esa variable.  
Ahora bien, estas variables son preferibles de utilizar cuando se tienen que usar datos en más de una sola función, esto para que sean más libres y sean compatibles entre sí.  
**9.Investigue y explique tres métodos comunes de la biblioteca string en C++.**  
Para empezar, se puede hablar del método o la función ´´size()´´, esta es la encargada de devolver el número de caracteres que contiene esas cadena en particular. Otra función interesante se trata de la función “at()” que retorna una referencia a dónde está esta posición dentro de la cadena. Finalmente, se tiene el “find()”, esta   busca la primera ocurrencia de la subcadena dentro de la cadena original y devuelve la posición del primer carácter de la primera ocurrencia.  
**Obtenido de : https://julioecheverri.wordpress.com/2014/07/23/el-tipo-string-y-sus-metodos-mas-importantes-en-c/**  
**10.¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?**  
En pocas palabras, la diferencia entre uno y el otro es que el bloque “do-while” se encuentra garantizado a ejecutarse por lo menos una vez al inicio. La principal diferencia entre ambos está en el momento en que se evalúa la condición que controla la ejecución del bucle. En el “while”, la condición se evalúa antes de que se ejecute el bloque de código dentro del bucle. si la condición es falsa desde el principio, el bloque de código puede no ejecutarse en absoluto. En el “do-while”, el bloque de código se ejecuta al menos una vez antes de evaluar la condición, después de ejecutar el bloque, se verifica la condición. Si es verdadera, el bucle se repite; de lo contrario, se termina.  
**11.¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta**  
No, no es posible almacenar funciones de manera directa en una estructura, se puede hacer algo similar a esto con punteros, pero directamente en la estructura no. En cuanto a los datos, es posible encapsular datos tanto en miembros privados como en miembros públicos dentro de una estructura en C++. Por lo tanto, la seguridad de los datos no se ven comprometidos según sea necesario uno u otro.  
**12.Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.**  
Generalmente se divide el código por razones de organización y mantenimiento del mismo, por su naturaleza segmentada, este código es más sencillo de reutilizar, si se ocupa una parte en particular, se puede ir hacía ella y copiarla, no hay que buscar entre un archivo grande y complejo, adicionalmente se reducen las dependencias entre las diferentes partes del código, esto al tener una interfaz clara en los archivos .hpp .  
El archivo .hpp es el encargado de definir la interfaz, contiene las declaraciones de las clases, estructuras y funciones que se van a utilizar dentro de los otros archivos. El .cpp se encarga de tener las definiciones e implementaciones detalladas de las clases y funciones declaradas en el archivo .hpp, es una especie de expansión o una definición formal de lo presentado inicialmente en el .hpp.     Finalmente, el main es el cuerpo del programa, esta parte es la encargada de llamar a las otras funciones, clases, variables o estructuras definidas en los otros archivos, esta es solo la base sobre la cual colocar todas las funciones y demás aspectos trabajados en los otros archivos.     
**13.Defina que es el Typecasting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Typecasting y cómo se realiza.**  
El typecasting se refiere al proceso en el cuál se convierte un tipo de variable a otra según sea conveniente, esto puede ser conveniente para cuando se requiera asignar valores entre variables de distintos tipos. Esta herramienta permite una mayor libertad y más comodidad a la hora de trabajar con distintos tipos de datos. Ahora, el typecasting en C puede ser de dos modos principales, explicito e implicito a continuación se presentan ejemplos de ambos.  
```
short a=2000;
int b;
b=a;

```
Para el typecasting implícito, se puede hacer directamente de esta manera, sin la necesidad de usar un operador extra, este tipo de typecast es muy util para convertir variables de short a int o de int a float.  
```
short a=2000;
int b;
b = (int) a;    // c-like cast notation
b = int (a);    // functional notation 
```
Ahora bien, para el typecast explícito, es necesario indicar a qué tipo de variable se quiere cambiar una vez se hace el proceso, esto es más común con cambios que requieren una diferente interpretación del valor .  
**Obtenido de : https://cplusplus.com/doc/oldtutorial/typecasting/**  
**14.¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto**  
Esta secuencia no es recomendada debido a que en la mayoría de ocasiones lleva a hacer código cuyo flujo es difícil de seguir y mantener, generalmente esta herramienta se usaba en el pasado puesto que era lo que se tenía para lógica, no habían otras alternativas para ir de lugares a otros. Ahora bien, otra forma de lograr lo mismo puede ser con los ciclos de while o de for, con los condicionales o con distintos métodos para saber exactamente dónde va a ir el el programa de manera segura siempre.   
**15.¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales**  
En este lenguaje de programación las variables se crean en distintos específicos de la memoría según sea su ámbito y su duración (estática, dinámica o automática), generalmente se guardan en la RAM. Ahora bien, las variables locales sólo son accesibles dentro del bloque en el que están definidas y existen solo mientras se ejecuta el bloque de código correspondiente, mientras que las variables globales son accesibles desde cualquier lugar del programa.  
Las variables locales generalmente se almacenan en la pila, lo que permite una asignación y liberación eficientes de memoria. Las variables globales se almacenan en el segmento de datos o BSS, lo que implica una duración más larga y una asignación estática de memoria, puesto que están planeadas para usos más extensos o perduraderos.  
**16.¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**  
Cuando se pasa por valor, la información de la variable se almacenan en una dirección de memoria distinta al recibirla en la función, esto implica que cambios a la variable original no va a afectar al parámetro pasado por valor. Este es una especie de copia de un valor pasado.  
Cuando se pasa por referencia, la variable que se recibe como parámetro en la función apunta exactamente a la misma dirección de memoria que la variable original, si se modifica el parámetro original, también se va a modificar la pasada por referencia. Básicamente se recibe una referencia del valor original del argumento.  
Cuando se pasa por puntero, básicamente se recibe la dirección en la cuál está guardada esa variable en la memoría, ahora si se hacen modificaciones con el contenido de lo que apunta el puntero, cómo pasa con la de referencia, está también cambiará la original, lo que pasa es que se usa un puntero para acceder y modificar el valor.  
**17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.**  
Inicialmente el puntero apuntará a la dirección en la cuál inicia el arreglo, es decir, la dirección del primer valor ingresado en el mismo. Ahora bien, para acceder a más datos lo que se podría hacer es recorrer el array, para esto se podría o desplazar el puntero o utilizar la notación del array. En este caso puede ser conveniente definir un ciclo for, el cual sea encargado de recorrer el arreglo hasta hasta que la cantidad de valores recorridos sea la máxima cantidad de valores del array, definiendo esto como la variable i.

**18.Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.**  
Los punteros dobles son utilizados cuando se quiere o se necesita saber la ubicación en memoría de otro puntero. Esta herramienta puede venir de ayuda o ser conveniente a la hora de trabajar aspectos como las listas enlazadas, en las cuales donde cada nodo contiene un puntero al siguiente nodo, los punteros dobles son necesarios para modificar los enlaces entre nodos. También pueden ser útiles a la hora de pasar matrices a funciones. Cuando se pasa una matriz a una función y se desea modificar su contenido, se pueden utilizar punteros dobles para reflejar los cambios fuera de la función.  
**19.¿Cuál es la diferencia entre un break y un continue en los bucles de C++?**  
Para empezar, la instrucción break termina la instrucción de iteración contenedora más próxima (es decir, los bucles for, foreach, while o do) o la instrucción switch. La instrucción break transfiere el control a la instrucción que hay a continuación de la instrucción finalizada, si existe. Es importante mencionar que en bucles anidados, el break solamente termina el bucle más interno que la contiene.  
El continue inicia una nueva iteración de la instrucción de iteración contenedora más próxima (es decir, los bucles for, foreach, while o do), se puede usar para saltar a la siguiente iteración del bucle, omitiendo el resto del código dentro del bucle para la iteración actual. Cuando se encuentra la instrucción continue, el control del programa vuelve al inicio del bucle y se evalúa la condición del bucle para la siguiente iteración.  
**Obtenido de : https://learn.microsoft.com/es-es/dotnet/csharp/language-reference/statements/jump-statements**  
**20.¿Para qué se utiliza la directiva #ifndef?**  
Lo que hace está directiva es que revisa si el token utilizado ha sido definido con anterioridad en un archivo o en un archivo incluido en donde se está utilizando, si no está definido incluye el código en este y se define, si ya está definido no pasa por la directiva y va directamente al else. Esta directiva comprueba si el token dado ha sido #definido anteriormente en el archivo o en un archivo incluido; si no, incluye el código entre este y el cierre #else o, si no hay #else presente, la declaración #endif. #ifndef se usa a menudo para hacer que los archivos de encabezado sean idempotentes definiendo un token una vez que se ha incluido el archivo y verificando que el token no esté configurado en la parte superior de ese archivo.  
**Obtenido de: https://www.cprogramming.com/reference/preprocessor/ifndef.html#:~:text=%23ifndef%20checks%20whether%20the%20given,is%20present%2C%20%23endif%20statement.**  
**21. ¿Qué es el puntero this en C++?**  
El puntero ¨this¨ es un puntero accesible sólo dentro de las funciones miembro no estáticas de un tipo class, struct o unión. Señala al objeto para el que se llama a la función miembro. Las funciones miembro estáticas no tienen un puntero "this". El puntero this apunta a la instancia actual de la clase y permite acceder a los miembros de esa instancia.  
**Obtenido de : https://learn.microsoft.com/es-es/cpp/cpp/this-pointer?view=msvc-170**  
**22.¿Qué es un puntero nullptr?**  
El término nullptr representa un valor de puntero nulo. Use un valor de puntero nulo para indicar que un tipo de identificador de objeto, puntero interior o puntero nativo no apunta a un objeto.  
**https://learn.microsoft.com/es-es/cpp/extensions/nullptr-cpp-component-extensions?view=msvc-170**  
**23.¿Cuál es la diferencia entre un arreglo y una lista en C++?**  
Existen varias diferencias entre ambos tipos de estructuras de datos, los arreglos tienen un tamaño fijo dado por el tiempo de compilación, mientras que las listas pueden cambiar su tamaño con el tiempo de ejecución. Los arreglos se almacenan de manera contigua en memoria, mientras que las listas no se almacenan de este modo, los arreglos poseen índices directos por lo tanto son eficientes en el acceso, mientras que las listas son más eficientes en operaciones de inserciones y eliminaciones.  
**24.¿Qué es una función prototipo?**  
Una declaración de función precede a la definición de función y especifica el nombre, el tipo devuelto, la clase de almacenamiento y otros atributos de una función. Yendo un poco más lejos, para ser un prototipo, la declaración de función también debe establecer tipos e identificadores para los argumentos de la función. El prototipo tiene la misma forma que la definición de función, excepto que termina con un punto y coma inmediatamente después del paréntesis de cierre y, por consiguiente, no tiene ningún cuerpo.  
**Obtenido de: https://learn.microsoft.com/es-es/cpp/c-language/function-prototypes?view=msvc-170**  
**25.¿Investigue qué es un memory leak?**  
Este se trata de un error de software que ocurre cuando un bloque de memoria reservada no es liberada en un programa de computación. Comúnmente ocurre porque se pierden todas las referencias a esa área de memoria antes de haberse liberado. En C++ generalmente ocurre cuando los programadores asignan memoria usando la nueva palabra clave y olvidan desasignar la memoria usando la función eliminar () o el operador eliminar []. Una de las mayores pérdidas de memoria se produce en C++ al utilizar un operador de eliminación incorrecto.  
El operador de eliminación debe usarse para liberar un único espacio de memoria asignado, mientras que el operador de eliminación [] debe usarse para liberar una matriz de valores de datos.  
**Obtenido de : https://www.geeksforgeeks.org/memory-leak-in-c-and-how-to-avoid-it/**  
**Parte teórica de Automatización**  
**1.¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?**  
Estas variables son generalmente utilizadas para asegurar la compilación del programa, para empezar el CC indica el compilador que se vaya a utilizar, por ejemplo, puede ser gcc. Las C flags son utilizadas para contener las opciones de compilación para el compilador, estas pueden incluir indicaciones de optimización o advertencias entre otras. Las CXXflags son similares a las Cflags, solamente que se utilizan específicamente para las opciones de C++ si se usa un compilador de C++. Finalmente, las LDFLAGS son usadas para almacenar las opciones de enlace, como las rutas específicas de las bibliotecas.  
**2.¿De qué se compone una regla en un Makefile?**  
Estás se componen de 3 partes o secciones principales, el target u objetivo, las dependencias y las recetas. El objetivo es lo que se desea construir o en ciertos casos actualizar, algo muy común son los ejecutables u un archivo objeto. Las dependencias se tratan de los archivo u objetos de los cuales depende el objetivo actual. Finalmente se tienen las recetas, las cuales corresponden a la serie de comandos utilizados para construir o actualizar un objetivo. 
**3.Defina qué es un target y cómo se relaciona con sus prerrequisitos**  
Si bien esto se tocó un poco en el punto anterior, acá se va a clarificar el punto, es importante mencionar que los prerrequisitos también son denominados dependencias. Las dependencias son los archivos requeridos para que se pueda completar el target, que es el resultado o el archivo que se quiere construir con el makefile. Ahora bien, si los prerrequisitos no están actualizados o se modificó alguno desde la última vez que se corrio el make, el make entenderá que el archivo no está actualizado y ejecutará las recetas necesarias para actualizarlo.  
**4.¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?**  
Para empezar, la bandera -I especifica un directorio donde el compilador busca los archivos de encabezados, generalmente es utilizado para hacer rutas de búsqueda adicionales para los encabezados. La bandera -C Indica al compilador que solo realice la fase de compilación, generando archivos objeto (.o) sin realizar la fase de enlace, es útil cuando se compilan archivos fuente individualmente antes de la fase de enlace. Para terminar, se tiene el -o, que se encarga de especificar el nombre del archivo de salida o ejecutable generado por el compilador. Se utiliza para especificar el nombre del archivo de salida.  
**5.¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**  
Para explicar de mejor manera el punto anterior, se proporcionará un poco de código.
```
CC = gcc
CFLAGS = -Wall -O2

mi_programa: mi_programa.o otra_fuente.o
    $(CC) $(CFLAGS) -o mi_programa mi_programa.o otra_fuente.o

mi_programa.o: mi_programa.c
    $(CC) $(CFLAGS) -c mi_programa.c

otra_fuente.o: otra_fuente.c
    $(CC) $(CFLAGS) -c otra_fuente.c
```
Para este caso en particular, la variable CC contiene el compilador que se va a utilizar, y CFLAGS las opciones de compilación, aparte, se puede acceder o utilizar la variable con la siguiente sintaxis, “$(variable)”. Adicionalmente, su utilidad radica en la reutilización de código, la facilitación del mantenimiento del código cambiando valores en un solo lugar, y adicionalmente brindan más legibilidad al código realizado.  
**6.¿Qué utilidad tiene un @ en un Makefile?**  
Su uso en el make está ligado a la supresión de la impresión de la regla ejecutada actualmente, se usa para mejorar la salida y hacer la ejecución del makefile sea más limpia, eliminando la visualización detallada de los comandos en la salida estándar. Cuando el make ejecuta una regla, se imprime el comando que está siendo ejecutado. Utilizando @, es posible evitar que se muestre el comando en la salida estándar, lo cual es útil para reducir el ruido visual cuando se está construyendo un proyecto.  
**7.¿Para qué se utiliza .PHONY en un Makefile?**  
El “.PHONY” en el makefile se usa para especificar objetivos que no representan archivos reales, son más bien acciones que deben de ser realizadas, por ello también se conocen como objetivos phony. La inclusión de estos ayuda a evitar  conflictos con archivos reales que puedan tener el mismo nombre que los objetivos en el Makefile y garantiza que las reglas se ejecuten incluso si hay archivos con el mismo nombre presentes en el sistema de archivos.  
