# ie0217
## Este es el archivo README de Aurelio Cordoba Valerio, C12326

**En este archivo se presentan las instrucciones necesarias para la ejecusión de la tarea número 2, posteriormente se presentan las preguntas y respuestas solicitadas en las sección de teoría.**

**Sección de como funciona**

### Seguidamente se pasa a la parte de preguntas y respuestas 

**1.	Define qué es la programación orientada a objetos y explica sus principios fundamentales.**  
El encapsulamiento, permite proteger los datos y ocultar la información interna de un objeto, de manera que solo se pueda acceder a ellos a través de métodos públicos y seguros. Los datos y métodos privados de un objeto no están disponibles para otros objetos, lo que garantiza la integridad de la información y evita que sea alterada o corrompida accidental o intencionalmente. Con esto se logra mantener a salvo el estado de usos indebidos que puedan ocasionar resultados inesperados.  
Abstracción: La abstracción es el principio que permite simplificar y clarificar los conceptos y comportamientos complejos mediante la creación de modelos o representaciones abstractas y simplificadas. Son modelos resumidos que solo contienen las partes importantes o los aspectos relevantes de un sistema u objeto, eliminando los detalles confusos. Este principio se puede definir como las características específicas el objeto, los mismos que lo distinguen de los demás tipos de objetos.  
Herencia, esta permite crear nuevas clases a partir de clases existentes, reutilizando el código y los comportamientos de sus ancestros. La nueva clase se conoce como subclase o derivada, mientras que la clase original se llama superclase o base. Tiene la capacidad de crear objetos especializados a partir de objetos más generales, y añadir o modificar sus propiedades y comportamientos de manera independiente.  
Polimorfismo, la capacidad de responder de diferentes maneras a un mismo mensaje o método, según su tipo o contexto. Es decir, un objeto puede comportarse de forma distinta según la situación, sin necesidad de conocer su tipo específico. Esto aumenta la flexibilidad y compatibilidad de los objetos, permite interactuar con ellos de manera genérica y de formas más predecibles.  
Obtenido de: https://webdesigncusco.com/los-4-principios-fundamentales-de-la-programacion-orientada-a-objetos-poo/#:~:text=Conclusión%3A-,La%20programación%20orientada%20a%20objetos%20es%20un%20paradigma%20de%20programación,%2C%20herencia%2C%20polimorfismo%20y%20abstracción.   
**2.	Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.**  
Si bien esto se tocó con anterioridad, ahora se abarcará con más profundidad, básicamente, se trata del principio de heredar propiedades y comportamientos de otra clase. La clase que hereda se llama "subclase" o "clase derivada", y la clase de la cual se heredan las propiedades se llama "superclase" o "clase base". La herencia facilita la reutilización de código y la creación de una jerarquía de clases. Ahora bien, esto de las clases se puede ver como por ejemplo, los subgéneros una película, por ejemplo, se tienen las películas de horror, está en las clase principal, la clase derivada serían los subgéneros como por ejemplo, las películas de gore o los slashers. Para un ejemplo de código se tiene lo siguiente:  

```
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    Dog dog1;
    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    return 0;
}
```

**3.	¿Qué es el encapsulamiento en OOP y por qué es importante? Proporciona ejemplos de cómo se implementa en C++.**  
De la misma forma, sí bien este tema se cubrió en la pregunta 1, ahora se va a aclarar un poco más, este consiste en ocultar los detalles internos de un objeto y exponer solo lo que es necesario para el exterior. En otras palabras, se agrupan datos (atributos) y los métodos (funciones) que operan en esos datos en una única unidad, y se controla el acceso a dicha unidad. Esto ayuda a mantener la integridad y la coherencia del objeto, y proporciona una interfaz clara y definida para interactuar con él.
En C++, el encapsulamiento se logra mediante el uso de clases y modificadores de acceso, como public, private y protected. Un ejemplo de la vida real puede ser la información clasificada en las agencias gubernamentales, donde solo cierta información se expone dependiendo del rango del individuo.
Aquí hay un ejemplo que ilustra cómo se implementa el encapsulamiento en C++:  
```
#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string color;

protected:
    string type;

public:
    void run() {
        cout << "I can run -- BASE!" << endl;
    }

    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }

    void setColor(string clr) {
        color = clr;
    }

    string getColor() {
        return color;
    }
};

class Dog : public Animal {
public:
    void run() {
        cout << "I can run -- DERIVED!" << endl;
    }

    void setType(string tp) {
        type = tp;
    }

    void displayInfo(string c) {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    Dog dog1;
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");
    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());

    return 0;
}

```
**4.	Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.**  
De igual, manera, esto se cubre en la pregunta 1, pero aún así. El polimorfismo habla de la capacidad de un objeto en particular de tomar varias formas, hay dos tipos, el de operador y el de tipo. un objeto puede comportarse de forma distinta según la situación, sin necesidad de conocer su tipo específico. Esto aumenta la flexibilidad y compatibilidad de los objetos, permite interactuar con ellos de manera genérica y de formas más predecibles.Con un ejemplo de la vida real, se puede relacionar a por ejemplo, el significado de una palabra dependiendo de dónde y cuándo se utilice, no es lo mismo decir una palabra cómo 'puravida' luego de recibir un golpe a decir 'pura vida' al iniciar una conversación, una de ellas es para mostrar que estámos bien y la otra es un saludo para comenzar la conversación. Acá está el ejemplo:   
```
#include <iostream>
using namespace std;

class Animal {
public:
    void info() {
        cout << "I am an animal." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I am a Dog. Woof woof." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "I am a Cat. Meow." << endl;
    }
};

int main() {
    // Create object of Dog class
    Dog dog1;
    cout << "Dog Class: " << endl;
    dog1.info();  // Parent Class function
    dog1.bark();

    // Create object of Cat class
    Cat cat1;
    cout << "\nCat Class: " << endl;
    cat1.info();  // Parent Class function
    cat1.meow();

    return 0;
}
```
**5.	¿Cómo se relaciona la abstracción con la programación orientada a objetos? ¿Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación?**  
Cómo pasa igual con la pregunta 2,3 y 4. La abstracción se refiere a la simplificación de la realidad mediante la identificación de las características esenciales y la supresión de los detalles innecesarios. Este enfoque facilita la creación de sistemas más comprensibles, mantenibles y eficientes.Ejemplo de esto en la vida real, podría ser el uso de mapas conceptuales o esquemas para facilitar el entendimiento de distintos conceptos. 
**6.	Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno:**  
Para empezar, Una clase es una plantilla o un plano para crear objetos. Define la estructura y el comportamiento común para todos los objetos de esa clase. La clase actúa como un modelo que especifica cómo deben ser los objetos, pero no representa instancias concretas. Se puede ver como una abstracción que encapsula atributos y métodos comunes que comparten los objetos de esa categoría.  
Luego, un objeto se trata de una instancia particular de una clase. Representa una entidad concreta basada en el modelo proporcionado por la clase. Los objetos tienen sus propios valores para los atributos de la clase y pueden utilizar los métodos definidos en la clase.  

El ejemplo de clase se presenta a continuación:  
```
// Clase que representa un automóvil
class Automovil {
public:
    // Atributos
    std::string marca;
    std::string modelo;
    int anio;

    // Métodos
    void arrancar() {
        std::cout << "El automóvil está arrancando." << std::endl;
    }

    void detener() {
        std::cout << "El automóvil se ha detenido." << std::endl;
    }
};

// Crear una instancia (objeto) de la clase Automovil
Automovil miAuto;
miAuto.marca = "Toyota";
miAuto.modelo = "Corolla";
miAuto.anio = 2022;
miAuto.arrancar();

```
El ejemplo de objeto es el siguiente:  
```
// Crear una instancia (objeto) de la clase Automovil
Automovil miAuto;
miAuto.marca = "Honda";
miAuto.modelo = "Civic";
miAuto.anio = 2021;
miAuto.arrancar();

```
**7.	Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo.**  
Los métodos visuales son vitales para los polimorfismos, Los métodos virtuales permiten la resolución dinámica de llamadas a funciones durante la ejecución del programa. Estos métodos permiten que las clases derivadas proporcionen implementaciones específicas y que se resuelva dinámicamente qué método debe ejecutarse durante la ejecución del programa.  
Dentro de las razones está, por ejemplo, la interfaz común en una clase base. Esta interfaz define un conjunto de métodos virtuales que pueden ser implementados de manera diferente por clases derivadas. La clase base puede tener métodos virtuales puros, sin implementación. Luego está la flexibilidad y extensibilidad, al ser capaz de añadir nuevas clases derivadas sin modificar el código de la interfaz común. Esto hace que el sistema sea más flexible y extensible, ya que puedes agregar nuevas funcionalidades sin afectar el código existente. Finalmente, estos métodos son vitales para cuando se trabaja con herencias o se construyen jerarquías de clases, puesto que permiten que las clases derivadas proporcionen implementaciones específicas para los métodos virtuales declarados en la clase base.  
**8.	 ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.**  
Para inciar, el constructor se trata de un método especial de las clases, este se llama automáticamente cuando se crea una instancia u objeto de esa clase. Su propósito principal es inicializar los atributos de la clase y realizar cualquier configuración necesaria antes de que el objeto sea utilizado. El constructor tiene el mismo nombre que la clase. Adicionalmente, el destructor se refiere a otro método especial en una clase que se llama automáticamente cuando se destruye una instancia de esa clase, ya sea porque la instancia sale de ámbito o porque se libera explícitamente. Su propósito principal es liberar recursos y realizar tareas de limpieza antes de que la memoria asignada al objeto sea liberada. Un ejeplo de la vida real que se me ocurre, puede ser cuando se hace la lista del super en una libreta, al inicio se tiene que crear la lista con los items que se quieren comprar, ese es su uso, pero luego de que cumple su objetivo y se compran los objetos, se debe de desechar la pagina para que no haga que la libreta se vea abultada o sea incomodo cambiar de pagina.  
Ejemplos de esto podrían ser los siguientes códigos :  
```
#include <iostream>

class EjemploClase {
public:
    // Constructor
    EjemploClase() {
        std::cout << "Constructor llamado" << std::endl;
    }

    // Destructor
    ~EjemploClase() {
        std::cout << "Destructor llamado" << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase EjemploClase
    EjemploClase objeto;

    // El objeto se destruirá automáticamente al salir del ámbito
    return 0;
}

```
**10.	Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?**  
Los templates, como su nombre lo indica, se tratan de plantillas. Estás permiten escribir código genérico para trabajar con tipos de datos de manera flexible, dan las herramientas para definir funciones y clases que operan sobre tipos de datos no especificados de antemano, y el compilador genera las versiones específicas del código según el tipo de datos utilizado. Con esto, no se deben escribir diferentes versiones para cada tipo.  
Dentro de su funcionalidad, destaca su uso en algoritmos genéricos, puesto que muchas veces estos deben trabajar con variedad de datos y no se debe hacer un programa por tipo para manejarlos, se agiliza el proceso de creación. Esto no solo aplica para algoritmos, puede ser usado para contenedores, clases o librerías genéricas. Adicionalmente funciona bien con el polimorfismo, puesto que con el se alcanza el polimorfismo sin perdida de rendimiento, puesto que con las platillas se puede lograr polimorfismo sin el uso de punteros y la necesidad de herencia.  
Obtenido de: https://www.geeksforgeeks.org/templates-cpp/  
**11.	¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?**  
    La memoria dinámica hace alusión a la asignación y liberación de memoria durante la ejecución del programa en lugar de en tiempo de compilación. Se utiliza principalmente para gestionar el almacenamiento de datos en tiempo de ejecución y proporciona flexibilidad en la gestión de la memoria. La memoria dinámica tiene su uso, por ejemplo: cuando se tienen valores desconocidos o no se sabe exactamente el tamaño de la estructura de datos antes de su ejecución que se requiere antes del tiempo de ejecución del programa, luego se puede usar para manejar estructuras que pueden cambiar de tamaño de manera dinámica, como lo pueden ser las listas en lazadas, árboles, o colas.  
También puede tener un uso para la prevención de fugas de memoria o memory leaks, puesto que se debe de liberar la memoria cuando ya no se utiliza una de las acciones o funciones hechas.
Obtenido de: https://docs.hektorprofe.net/cpp/07-punteros-memoria/07-memoria-dinamica/
**12.	Explique la diferencia entre new y malloc en C++. ¿Cuándo debería utilizar uno sobre el otro?**  
SI bien ambas herramientas sirven para asignar memoria de manera dinámica, ambas tienen ciertas diferencias entre ellas, por ejemplo: ‘new’ es el operador usado para asignar memoria para tipos específicos y también invoca automáticamente el constructor del objeto si es un tipo de objeto; por otro lado, ‘malloc’ es una función de la biblioteca estándar de C y solo asigna un bloque de memoria sin inicializarla, adicionalmente este devuelve un puntero tipo void. Luego, ‘new’ invoca de manera automática el constructor del tipo de objeto para el que está asignando memoria. Esto es útil cuando se trabaja con objetos de clases personalizadas. ‘malloc’, por otro lado, no llama a los constructores y, por lo tanto, es más adecuado para asignar memoria para tipos de datos simples. ‘new’ no requiere especificar el tamaño del tipo de datos, ya que calcula el tamaño según el tipo, ‘malloc’ requiere que se proporcione de forma explícita el tamaño de los bytes a asignar. Adicionalmente, las opciones para liberar memoria en ambas son un tanto diferentes, para una se usa ‘delete’ y para la otra es ‘free’.  
**13.	¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en C++?**  
Si bien este concepto se tocó un poco en los puntos anteriores, ahora es posible aclarar un poco más a qué se refiere el término, Este se trata de un error de software que ocurre cuando un bloque de memoria reservada no es liberada en un programa de computación. Comúnmente ocurre porque se pierden todas las referencias a esa área de memoria antes de haberse liberado. En C++ generalmente ocurre cuando los programadores asignan memoria usando la nueva palabra clave y olvidan desasignar la memoria usando la función eliminar () o el operador eliminar []. Una de las mayores pérdidas de memoria se produce en C++ al utilizar un operador de eliminación incorrecto.  
El operador de eliminación debe usarse para liberar un único espacio de memoria asignado, mientras que el operador de eliminación [] debe usarse para liberar una matriz de valores de datos.  
Para poder evitarlo, se pueden tomar varias maneras preventivas para que no vaya mal el programa, por ejemplo, si bien se pueden usar los comando de ‘new’ and ‘delete’, estos pueden ser poco óptimos puesto que como humanos siempre estamos sujetos a un error, puede que se olvide de un ‘delete’ o algo similar, para solucionar esto se pueden usar los llamados smartpointers, En lugar de gestionar manualmente la memoria con ‘new’ y ‘delete’, se pueden utilizar smartpointers de la biblioteca estándar de C++ (como std::unique_ptr y std::shared_ptr). Estos objetos se encargan automáticamente de liberar la memoria cuando ya no se necesita. Dentro de otras recomendaciones incluyen no usar un ‘raw pointer’ a no ser de que se quiera interactuar con una biblioteca más antigua. De los mejores consejos es reducir el uso explícito de ‘new’ y ‘delete’ tanto como sea posible. Utiliza smart pointers, contenedores de la biblioteca estándar y otras construcciones de alto nivel para gestionar la memoria de manera automática.  
Obtenido de : https://www.geeksforgeeks.org/memory-leak-in-c-and-how-to-avoid-it/
**14.	Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.**  
Los punteros inteligentes o Smart pointers, son objetos en C++ que actúan como envolturas alrededor de punteros tradicionales. Proporcionan una gestión automática de la memoria al encargarse de la liberación de la memoria asignada cuando ya no se necesita. Los punteros inteligentes son parte de la biblioteca estándar de C++ y están diseñados para prevenir problemas comunes asociados con la gestión manual de memoria, como las fugas de memoria y acceso a memoria liberada. Dentro de ellos destacan 2. El primero es el ‘std::unique_ptr’, el cual posee la exclusividad de la memoria que gestiona. Solo puede tener un único propietario y se encarga de liberar la memoria automáticamente cuando el propietario único deja de existir o cuando se asigna a otro, un ejemplo de su uso sería el siguiente:   
```
#include <memory>
#include <iostream>

int main() {
    // Uso de std::unique_ptr para gestionar un entero en el montón
    std::unique_ptr<int> punteroUnico = std::make_unique<int>(42);

    // No hay necesidad de llamar a 'delete', la memoria se libera automáticamente

    // Transferir la propiedad a otro std::unique_ptr (movimiento)
    std::unique_ptr<int> otroPuntero = std::move(punteroUnico);

    return 0;
}
```
El otro tipo de puntero inteligente es el ‘std::shared_ptr’, este permite compartir la propiedad de la memoria entre varios std::shared_ptr. Lleva un contador de referencias interno y libera la memoria solo cuando el último std::shared_ptr que posee la memoria se destruye. Permitiendo así la gestión compartida de la memoria. Su ejemplo sería el siguiente:  
```
#include <memory>
#include <iostream>

int main() {
    // Uso de std::shared_ptr para gestionar un entero en el montón
    std::shared_ptr<int> punteroCompartido = std::make_shared<int>(42);

    // No hay necesidad de llamar a 'delete', la memoria se libera automáticamente cuando no se necesita

    // Crear otro std::shared_ptr que comparte la misma memoria
    std::shared_ptr<int> otroPuntero = punteroCompartido;

    return 0;
}

```
**15.	¿Cuál es la diferencia entre delete y delete [] en C++? ¿En qué contexto se utilizaría cada uno?**  
Si bien pueden parecer comandos bastante similares, su diferencia radica en cómo se utilizan para liberar la memoria asignada dinámicamente a través de ‘new’ y ‘new []’. Ambos operadores se utilizan para liberar memoria, pero están diseñados para trabajar con diferentes formas de asignación de memoria. Para empezar, ‘delete’ se usa para liberar la memoria asignada dinámicamente para un solo objeto. Debe utilizarse cuando la memoria fue asignada con el operador ‘new’. Ahora el ‘delete []’, este se utiliza para liberar la memoria asignada dinámicamente para un array de objetos. Debe utilizarse cuando la memoria fue asignada con el operador ‘new []’. Entonces, el ‘delete’ se usa cuando se asigna memoria para un solo objeto, mientras que ‘delete []’ es para cuando se asigna memoria a un array de objetos.   
Obtenido de: https://ccia.ugr.es/~jfv/ed1/c++/cdrom3/TIC-CD/web/tema13/teoria_4.htm#:~:text=El%20operador%20delete%20se%20usa,memoria%20dinámica%20reservada%20con%20new.&text=La%20expresión%20será%20normalmente%20un,liberar%20memoria%20de%20arrays%20dinámicas.  
**16.	¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?**  
Un algoritmo de ordenamiento es un conjunto de pasos o reglas definidas que se aplican a una lista de elementos con el objetivo de organizarlos en un orden específico, como ascendente o descendente, según algún criterio definido. Estos algoritmos son esenciales en programación porque permiten organizar datos de manera eficiente, facilitando la búsqueda y recuperación de información. Dentro de su importancia se puede mencionar que, utilizándolos se mejora el rendimiento de búsqueda al tener los datos ordenados se pueden usar algoritmos de búsqueda más eficientes, luego, Los algoritmos de ordenamiento son útiles para identificar y eliminar duplicados en una lista. Aparte, se mejoran los algoritmos de búsqueda existentes si se usa el ordenamiento.
**17.	Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cuál es su complejidad temporal en el peor caso?**  
Este es un sencillo algoritmo, que funciona comparando repetidamente pares de elementos adyacentes y realizando intercambios si están en el orden incorrecto. Este proceso se repite hasta que la lista esté ordenada. Entonces se comienza comparando el primer elemento con el siguiente, si el primer elemento es mayor que el siguiente, se intercambian. El proceso se repite para cada par de elementos adyacentes a lo largo de la lista. después de la primera pasada, el elemento más grande estará en la última posición, el mismo proceso se repite para el resto de la lista, excluyendo la posición ya ordenada. Cada iteración coloca el próximo elemento más grande en su posición correcta. El algoritmo continúa hasta que no se realicen más intercambios en una iteración, lo que indica que la lista está ordenada.  
En el peor caso, Bubble Sort tiene una complejidad temporal de O(n^2), donde n es el número de elementos en la lista. Esto se debe a que el algoritmo realiza comparaciones y posibles intercambios en cada par de elementos adyacentes durante cada pasada, y realiza un número total de pasadas igual al número de elementos en la lista.  
**18.	Describa el algoritmo de ordenamiento” QuickSort”. ¿Cuál es su ventaja principal sobre otros algoritmos de ordenamiento?**  
Es un algoritmo de ordenamiento eficiente y ampliamente utilizado que se basa en la técnica de "divide y vencerás". La principal ventaja de QuickSort es su eficiencia, especialmente en situaciones de uso común. Ahora, tocando su funcionamiento, para empezar selecciona un elemento de la lista como pivote, luego reelige los elementos de la lista de manera que los elementos menores que el pivote estén a la izquierda y los mayores estén a la derecha. El pivote ahora está en su posición final. Aplica el mismo proceso de manera recursiva a las sublistas de elementos menores y mayores que el pivote. Al final del proceso, todas las sublistas estarán ordenadas y se combinan para obtener la lista ordenada completa.  
Ahora de las ventajas, el algoritmo es eficiente en la práctica y generalmente supera a otros algoritmos de ordenamiento ordenando datos grandes, el algoritmo generalmente no requiere espacio adicional más allá de la recursión, lo que lo hace eficiente en términos de uso de memoria, aparte es fácil de implementar y su complejidad temporal es veloz y por ello es un algoritmo rápido.  
**19.	¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.**  
La diferencia entre un algoritmo de ordenamiento estable y uno inestable radica en cómo manejan los elementos con claves iguales durante el proceso de ordenamiento. La estabilidad se refiere a la preservación del orden relativo de los elementos con claves iguales después de la aplicación del algoritmo de ordenamiento. El ordenamiento estable se trata de los ordenamientos que al acomodar la lista que tiene elementos con claves iguales, el orden relativo de esos elementos se mantiene igual que antes de la ordenación. Ordenamiento inestable, no garantiza la preservación del orden relativo de los elementos de claves iguales. Ejemplos del inestable es el Quicksort y un ejemplo de estable es el Bubblesort.  
**Hable sobre el algoritmo de ordenamiento ”Merge Sort”. ¿Cuál es su complejidad temporal y en qué situaciones es preferible su uso?**  
Este es un algoritmo se basa en la técnica de divide y vencerás, es estable y eficaz, Una característica notable de Merge Sort es que garantiza una complejidad temporal de O(n log n) en todos los casos, lo que lo hace eficiente para conjuntos de datos grandes. Opera de la siguiente manera, divide la lista original en dos mitades de manera recursiva hasta que cada sublista tenga un solo elemento o esté vacía, luego, combina las sublistas en pares ordenados de manera recursiva. Este paso implica comparar y fusionar las sublistas para construir sublistas más grandes y ordenadas. Y finalmente combina las sublistas en una sola lista ordenada.  
Pasando al siguiente tema, el Merge Sort tiene una complejidad temporal de O(n log n) en todos los casos, tanto en el peor caso como en el mejor caso. Esto lo convierte en un algoritmo eficiente para grandes conjuntos de datos. Es preferible usarlos con conjuntos de datos grandes, cuando se requiere que el sistema tenga robustes o sea bien estable o para usar las listas enlazadas.  


