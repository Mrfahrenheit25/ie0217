#include <iostream>
using namespace std;
int main(){
    //asignar un valor a num_int
    int num_int = 9;
    // declaro una variable de tipo doble
    double num_double;

    // realizo la conversion implicita 
    num_double = num_int;

    cout << "num int = " << num_int << endl;
    cout << "num double = " << num_double << endl;

    return 0;
    
}