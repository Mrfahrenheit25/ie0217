#include <iostream>
using namespace std;

// variable global
int g;

int main(){
    // variable local:
    int a, b;

    //inicializacion 
    a = 10;
    b = 20;
    g = a + b;
    cout << g;
    return 0;
}