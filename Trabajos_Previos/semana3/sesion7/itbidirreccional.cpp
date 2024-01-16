#include <iostream>
#include <list>
using namespace std;


int main(){
    list<int> nums {1,2,3,4,5};
    // inicializar el iterador para que comience con los numeros
    list<int>::iterator itr = nums.begin();

    cout<< "Moving forward: "<< endl;
    // Mostrar los elementos en orden para adelante
    while (itr != nums.end())
    {
    cout << *itr << ", ";
    itr++;

    }
    cout << "Moving backwards" << endl;
    // Mostrar los elementos en orden para atras
    while (itr != nums.begin())
    {
    if (itr != nums.end()){
        cout << *itr << ", ";
    }
    
    itr--;

    }
    cout << *itr << endl;
    return 0;
}