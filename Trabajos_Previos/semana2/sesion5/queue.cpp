#include <iostream>
#define SIZE 5
using namespace std;

class Queue {
private:
    int items[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1)
                front = 0;
            rear++;
            items[rear] = element;
            cout << endl
            << "Inserted " << element << endl;
        }
    }

    int dequeue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return (-1);
        } else {
            element = items[front];
            if (front >= rear) {
                front = -1;
                rear = -1;
            } // Q solamente tiene un elemento, se recetea la cola una vez se borra
            else {
                front++;
            }
            cout << endl
            << "Deleted -> " << element << endl;
            return (element);
        }
    }

    void display() {
        // funcion para mostrar la cola 
        int i;
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
        } else {
            cout << "Front index-> " << front << endl;
            cout << "Items -> ";
            for (i = front; i <= rear; i++)
                cout << items[i] << " ";
            cout << endl << "Rear index-> " << rear << endl;
        }
    }
};

int main() {
    Queue q;

    // deQueue no es posible en una cola vacía
    q.dequeue();

    // enQueue 5 elementos
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    // No se puede agregar el 6to elemento porque la cola está llena
    q.enqueue(6);

    q.display();

    // deQueue elimina el elemento ingresado primero, es decir, 1
    q.dequeue();

    // Ahora tenemos solo 4 elementos
    q.display();

    return 0;
}
