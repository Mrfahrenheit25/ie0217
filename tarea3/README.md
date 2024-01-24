# ie0217
## Este es el archivo README de Aurelio Cordoba Valerio, C12326

**En este archivo se presentan las instrucciones necesarias para la ejecusión de la tarea número 3, posteriormente se presentan las preguntas y respuestas solicitadas en las sección de teoría.**

**Sección de como funciona**
Para correr el programa, se requiere usar el archivo Makefile, en este caso si se quiere jugar se tiene que usar el comando ya sea make all o mingw32-make all, este lo que hara sera hacer el ejecutable y seguidamente correrlo. Una vez se esta en el juego se sigen las instrucciones para que todo vaya sobre ruedas.  
Si se quiere eliminar el archivo ejecutable, se puede usar el comando make clean o mingw32-make clean, con esto ya no se podria correr el juego. Si se quiere correr el ejecutable ya creado se puede usar el comando make run o mingw32-make run.  
Ahora bien, es importante aclarar que la tarea se logro resolver hasta cierta parte, no fue posible implementar de manera adecuada la clase de ordenar marterial ni la de material precio, esto por una falta de tiempo. Ahora bien, el main prueba que las clases y metodos implementados funcionan adecuadamente.  

### Seguidamente se pasa a la parte de preguntas y respuestas 
**Definición de Templates: Explique el concepto de templates en C++ y proporcione un ejemplo simple**  
Se refieren a estructuras utilizadas en C++, para generar código genérico, capaz de trabajar con distintos tipos de datos y estructuras.  Este tipo de herramienta permite escribir funciones y clases que pueden ser usadas con distintos tipos de datos sin necesidad de escribir código específico para cada tipo. Como se puede apreciar, esta opción aporta mucha flexibilidad al código creado y generado por el usuario. Un ejemplo de un template podría ser el siguiente : 
 ```
#include <iostream>
// Definición de la función template
template <typename T>
void intercambiar(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    // Ejemplo de uso con enteros
    int num1 = 5, num2 = 10;
    std::cout << "Antes de intercambiar: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    intercambiar(num1, num2);
    std::cout << "Después de intercambiar: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    // Ejemplo de uso con caracteres
    char char1 = 'A', char2 = 'B';
    std::cout << "Antes de intercambiar: char1 = " << char1 << ", char2 = " << char2 << std::endl;
    intercambiar(char1, char2);
    std::cout << "Después de intercambiar: char1 = " << char1 << ", char2 = " << char2 << std::endl;
    return 0;
}
```  
Obtenido de: https://www.geeksforgeeks.org/templates-cpp/
**Sobrecarga de Plantillas: ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?**  
La capacidad de definir múltiples versiones de una plantilla de función o clase, cada una con un conjunto diferente de parámetros o tipos de datos. 
```
#include <iostream>
// Versión genérica de la plantilla
template <typename T>
void imprimir(const T &valor) {
    std::cout << "Valor genérico: " << valor << std::endl;
}

// Sobrecarga de la plantilla para enteros
template <>
void imprimir<int>(const int &valor) {
    std::cout << "Valor entero: " << valor << std::endl;
}

// Sobrecarga de la plantilla para caracteres
template <>
void imprimir<char>(const char &valor) {
    std::cout << "Valor caracter: " << valor << std::endl;
}

int main() {
    // Uso de la plantilla con diferentes tipos de datos
    imprimir(3.14);   // Llamada a la versión genérica
    imprimir(42);      // Llamada a la versión para enteros
    imprimir('A');     // Llamada a la versión para caracteres

    return 0;
}
```  
Obtenido de: https://www.geeksforgeeks.org/templates-cpp/  

**Plantillas de Clases: Explique cómo se pueden utilizar plantillas en la definición de clases en C++.**  
Bien, las plantillas de definición de clases son útiles para definir clases con datos genéricos, para explicar mejor el como utilizarlo, se brindará un ejemplo :  
```
#include <iostream>
using namespace std;

// Plantilla de clase con múltiples y parámetros predeterminados
template <class T, class U, class V = char>
class ClassTemplate {
private:
    T var1;
    U var2;
    V var3;

public:
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}

    void printVar() {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main() {
    // Crear objeto con tipos int, double y char
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    // Crear objeto con tipos double, char y bool
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}
```  
**Manejo de Excepciones: Describa los bloques try, catch y throw y cómo se utilizan para el manejo de excepciones en C++.**  
Para empezar el bloque try se utiliza para intentar realizar una acción, como su nombre lo indica, este bloque se utiliza para envolver el código en el que se pueden producir excepciones. Cuando ocurre una excepción dentro del bloque try, el control del programa se transfiere al bloque catch correspondiente (si está presente). Cuando ocurre una excepción dentro del bloque try, el control del programa se transfiere al bloque catch correspondiente (si está presente).  
Luego está el bloque de catch, que se encarga de manejar las excepciones lanzadas por el bloque de try, cada bloque catch debe especificar el tipo de excepción que puede manejar. Finalmente el throw se encarga de lanzar una excepción cuando se detecta un error, este no es siempre necesario, pero su importancia viene en que es la palabra clave que se utiliza para lanzar una excepción explícitamente. Puede lanzar cualquier tipo de dato, ya sea un tipo de datos básico, una clase, o un puntero.  
Obtenido de: https://www.w3schools.com/cpp/cpp_exceptions.asp  
**Excepciones Estándar: Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser útiles.**  
La primera excepción que se tocará se trata de ¨ logic error¨, este se trata de un error que surge o se puede detectar antes de correr el código. Esta viene bien cuando se quiere implementar por ejemplo la división y se coloca en el denominador un cero, o al hacer una función que obtenga las raíces cuadradas de un número y se brinde un valor negativo. La excepción de runtime error se trata de un error que no se puede identificar simplemente leyendo el archivo, este tiene su relevancia cuando por ejemplo, se quiere hacer un programa que lea archivos, y realice algún procesamiento sobre los datos. Si ocurre algún error durante la lectura del archivo, como si el archivo no existe o no se puede abrir, se puede lanzar este tipo de excepción.  
Finalmente se tiene la excepción de length error, si se quiere hacer una función que concatena dos cadenas de texto, limitando la cadena resultante, se puede encontrar el problema de superar un límite pre establecido. Ahí es donde length error es útil, puesto que la longitud del dato no va de acuerdo a lo esperado o establecido.  
Obtenido de: https://www.w3schools.com/cpp/cpp_exceptions.asp  
**Política de Manejo de Excepciones: ¿Que es una política de manejo de excepciones y porque es importante considerar al diseñar software?**  
Esta se refiere a las decisiones y estrategias que un programador o equipo de desarrollo elige para manejar las excepciones en un programa. Esta política aborda preguntas como cuándo y dónde lanzar excepciones, qué tipo de excepciones deberían ser lanzadas, cómo deben ser manejadas y cuándo se debe permitir que una excepción se propague sin ser manejada localmente. Dentro de los parámetros a importante se tienen: La claridad y mantenibilidad del código, la detección y el diagnóstico de errores, la robustez del código, el cumplmiento de requisitos, la escalabilidad y por último, la interoperabilidad.  
**Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++.**  
Se utiliza para especificar que una función no lanzará excepciones durante su ejecución. Se puede aplicar tanto a funciones como a operadores. La presencia de noexcept indica al compilador que la función está diseñada para no generar excepciones, lo que puede permitir optimizaciones en tiempo de compilación. El propósito principal de noexcept es proporcionar información al compilador y al programador sobre la garantía de no lanzar excepciones en una función o una parte específica del código. Esto puede ser útil en varios contextos, por ejemplo las optimizaciones del código. Este es el ejemplo:
```
#include <iostream>

// Función que no lanza excepciones
void funcionNoLanza() noexcept {
    std::cout << "Esta función no lanza excepciones." << std::endl;
}

// Función que lanza excepciones
void funcionLanzaExcepciones() {
    throw std::runtime_error("¡Esta función lanza una excepción!");
}

int main() {
    try {
        // Llamada a la función que no lanza excepciones
        funcionNoLanza();

        // Llamada a la función que lanza excepciones
        funcionLanzaExcepciones();
    } catch (const std::exception& e) {
        std::cerr << "Excepción atrapada: " << e.what() << std::endl;
    }

    return 0;
}
```  
**Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.**  
Para empezar se tiene el contenedor de secuencia, que permite almacenar elementos a los que se puede acceder en orden secuencial. Internamente, los contenedores secuenciales se implementan como arreglos o estructuras de datos de listas. Entre ejemplos de sus usos están los vectores y las listas. Le sigue el contenedor asociativo, que permite almacenar elementos en orden. El orden no depende de cuándo se inserta el elemento. Ejemplos de su uso pueden ser los multiset o los map. Luego se tienen los Contenedores asociativos desordenados, que  proporcionan las versiones sin ordenar del contenedor asociativo. Internamente, se implementan como estructuras de datos de hash-tables. Ejemplos de su uso pueden ser unordered set.  
Luego se tienen los adaptadores de contenedor, que proporcionan una interfaz restringida para modificar el comportamiento de un contenedor existe, un claro ejemplo de esto viene a ser la pila.  
**Iteradores en STL: Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.**  
Un iterador es un objeto similar a un puntero que representa la posición de un elemento en un contenedor. Se utiliza para iterar sobre elementos en un contenedor.Los iteradores permiten acceder a los elementos almacenados en un contenedor de manera genérica, independientemente de la implementación interna del contenedor. Estos pueden acceder a los datos con operaciones de desplazamiento, como lo podría ser el uso de los vectores nums.begin para ver donde empieza el vector o la lista, y nums.end que apunta a un espacio luego del último valor válido recibido.  
**Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.**  
El algoritmo de búsqueda,  busca un valor en un rango y devuelve un iterador al primer elemento encontrado o al final del rango si no se encuentra. En donde find busca el elemento del rango, binary_search se encarga de realizar una búsqueda binaria en un rango ordenado; count cuenta el número de ocurrencias de un elemento en un rango. Y finalmente find if busca el primer elemento que cumple el criterio. Luego está el algoritmo de ordenamiento, en donde sort, ordena un rango de elementos, stable sort ordena un rango de elementos manteniendo el orden relativo de los elementos con claves iguales. partial sort se encarga de ordenar los primeros elementos en un rango y nth_element coloca el elemento n-ésimo en su posición correcta en un rango.  
Luego está el algoritmo de eliminación y modificación, en este el remove se encarga de eliminar elementos específicos de un rango, el replace reemplaza elementos específicos en un rango. Y el reverse invierte el orden de los elementos en un rango.  
**Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL?**  
Es posible utilizar algoritmos personalizados definiendo funciones personalizadas que se ajusten a la interfaz requerida por los algoritmos de la STL. La STL se basa en el concepto de iteradores, por lo que tu algoritmo personalizado deberá trabajar con iteradores. Estos pueden ser para distintos propositos, ejemplos puntuales se me ocurren transformaciones, filtrado, comparaciones personalizadas. Es necesario cerciorarse que la función se ajuste a las interfaces definidas por el algoritmo de interés.  
Definición de Expresiones Regulares: Defina qué son las expresiones regulares y proporcione un ejemplo simple.  
**Definición de Expresiones Regulares: Defina qué son las expresiones regulares y proporcione un ejemplo simple.**  
Se tratan de patrones de búsqueda y manipulación de cadenas de texto. Estos patrones son utilizados para realizar búsquedas, comparaciones, extracciones y reemplazos de cadenas de texto de manera eficiente y flexible. En términos más técnicos, una expresión regular es una secuencia de caracteres que define un patrón de búsqueda. Estos patrones pueden incluir caracteres literales (como letras y números) y metacaracteres que representan clases de caracteres o cuantificadores.  
	Un ejemplo de las mismas puede ser el siguiente:  
```	
[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}
```
@: Representa el símbolo "@" que separa el nombre de usuario del dominio.  
[a-zA-Z0-9._%+-]+: Representa el nombre de usuario, que puede contener letras, números, puntos, guiones bajos, porcentajes y otros caracteres, y debe tener al menos un carácter.  
"\.": Representa el punto que separa el nombre del dominio de la extensión.  
[a-zA-Z]{2,}: Representa la extensión del dominio, que debe contener al menos dos letras.  
**Caracteres Especiales: Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.**  
El primer carácter a mencionar se trata de el punto o el ´.´, este representa cualquier carácter individual menos la nueva línea, funge como una especie de comodín que se moldea a la situación. El patrón a.b coincidirá con cadenas como "aab", "acb", "a1b", etc. Luego está el asterisco, este se encarga de indicar que el elemento anterior puede aparecer cero o más veces. Coincide con cero o más ocurrencias del elemento anterior. El patrón ´go*gle´ coincidirá con "ggle", "gogle", "google", etc. Finalmente se tiene el más o el ´+´, que indica una o más repeticiones del elemento anterior. El patrón ´co+l´ coincidirá con "col", "cool", "coool", etc.  
**Uso de Expresiones Regulares en C++: ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo.**  
Las expresiones regulares se proporcionan atravez de la librería regex en C++, la biblioteca proporciona clases y funciones para trabajar con expresiones regulares de manera adecuada. Un ejemplo de ello se presenta acontinuación:  
```
#include <iostream>
#include <regex>

int main() {
    auto const regex = std::regex("(my|your) regex");

    auto const myText = std::string("A piece of text that contains my regex.");
    bool const myTextContainsRegex = std::regex_search(myText, regex);

    auto const yourText = std::string("A piece of text that contains your regex.");
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    auto const theirText = std::string("A piece of text that contains their regex.");
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    std::cout << std::boolalpha
              << myTextContainsRegex << '\n'
              << yourTextContainsRegex << '\n'
              << theirTextContainsRegex << '\n';

    return 0;
}
```
**Validación de Patrones: ¿Por qué las expresiones regulares son útiles para la validación de patrones en cadenas de texto?**  
Existen varias razones, para empezar, brindan flexibilidad a la hora de definir los patrones, estas permiten definir patrones de búsqueda de manera flexible y precisa. Se puede especificar las secuencias de caracteres, rangos, cuantificadores y otros elementos para representar patrones complejos. Otra razón se trata de la busqueda de coincidencias complejas, se puede buscar coincidencias de patrones complejos, como direcciones de correo electrónico, números de teléfono, direcciones URL, fechas, y más. La capacidad de describir patrones detallados es esencial para la validación de datos estructurados, aunado a ello, estás se hacen con la rapidez y la optimización en mente, están diseñadas para el manejo de manera rápida y efectiva. Adicionalmente, se pueden reutilizar patrones a la hora de escribir código, facilitando la consistencia y la mantenibilidad del código.  
