#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creando una clase de nodo
class Node {
public:
    int value;
    Node* next;
};

int main() {
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Asignar 3 nodos en el heap
    one = new Node();
    two = new Node();
    three = new Node();

    // Asignar valores a los nodos
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Conectar los nodos
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Imprimir los valores de la lista enlazada
    head = one;
    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }

    return 0;
}
