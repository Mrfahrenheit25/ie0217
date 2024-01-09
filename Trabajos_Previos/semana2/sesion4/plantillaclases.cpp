#include <iostream>

using namespace std;

class Molde {
public:
    double largo;
    double ancho;
    double altura;
    Molde(double largo_p, double ancho_p, double altura_p) : largo(largo_p),ancho(ancho_p), altura(altura_p) {}
    
    double calcularArea() {
        return largo * ancho;
    }

    double calcularVolumen() {
        return largo * ancho * altura;
    }
};

int main() {
    /* Instanciar un objeto llamado pared basado en la clase Molde. */
    Molde pared(10,20,35);
    
    /* Calcular y desplegar el area y volumen. */
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}
