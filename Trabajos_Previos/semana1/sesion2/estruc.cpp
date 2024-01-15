#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main(){
    Person p1;
    cout << "enter the complete name: ";
    cin.get(p1.name, 50);
    cout << " enter the age: ";
    cin >> p1.age;
    cout << "enter the salary";
    cin >> p1.salary;

    cout << "\n Displaying info" << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}