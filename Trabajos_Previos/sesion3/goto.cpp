#include <iostream>
using namespace std;

int main(){
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximo numero de entradas: ";
    cin >> n;

    for(i = 1; i <= n; ++i){
        cout << "ingrese n " << i << " : ";
        cin >> num;

        if(num < 0.0){
        // salto
        goto jump;
        } 
        sum += num;
    }
jump: 
    average = sum / (i -1);
    cout << "\n average "<< average << endl;
    return 0;    
}