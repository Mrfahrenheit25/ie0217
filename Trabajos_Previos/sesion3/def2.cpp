#include <iostream>
using namespace std;

#define MI_PRIMER_DEFINE 925

enum seasons{
    spring = 34,
    summer = 4, 
    fall = 9,
    winter = 32
};

enum enumcito{
    carro = 40,
    arbol, 
    casa,
    patio
};


int main(){

    seasons s;
    s = summer;
    cout << "Summer es " << s << endl;
    cout << "El define es " << MI_PRIMER_DEFINE << endl;
    cout << "arbol es " << arbol << endl;

    return 0;
}