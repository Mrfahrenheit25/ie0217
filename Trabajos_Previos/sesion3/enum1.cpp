#include <iostream>
using namespace std;
enum seasons{
    spring = 34,
    summer = 4, 
    fall = 9,
    winter = 32
};

int main(){

    seasons s;
    s = summer;
    cout << "Summer es " << s << endl;

    return 0;
}