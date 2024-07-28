#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
}; // p1;

int main()
{
    Person p1; // This is error in C. C declaration is struct Person p1; 
    
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;
    cout << "Programmed by Pierce" << endl;
}
