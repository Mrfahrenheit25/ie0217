#include <iostream>
#include <stdlib.h>
using namespace std;

#define MAX 10

int size = 0;

// Creando una pila
struct stack {
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}

// Verificar si la pila está llena
int isFull(st *s) {
    if ( s->top == MAX - 1)
        return 1;
    else
        return 0;
}

// Verificar si la pila está vacía
int isEmpty(st *s) {
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Agregar elementos a la pila
void push(st *s, int newItem) {
    if (isFull(s)) {
        cout << "STACK FULL" << endl;
    } else {
        s->top++;
        s->items[s->top] = newItem;
    }
    size++;
}

// Eliminar elemento de la pila
void pop(st *s) {
    if (isEmpty(s)) {
        cout << "\n STACK EMPTY \n";
    } else {
        cout << "Item popped = " << s->items[s->top] << endl;
        s->top--;
    }
    size--;
    cout <<endl;
}

// Imprimir elementos de la pila
void printStack(st *s) {
    cout << "Stack: ";
    for (int i = 0; i < size; i++) {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// Código del programa principal
int main() {
    int choice;
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    cout << "\nAfter popping out\n";
    printStack(s);

    return 0;
}
