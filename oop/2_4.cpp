#include<iostream>
#include<cstring>
using namespace std;
class student {
    char name[50];
    char address[50];
    int roll;
    public:
    void inputData(char[], char[], int);
    void displayData();
};
void student::inputData(char x[], char y[], int r) {
    strcpy(name, x);
    strcpy(address, y);
    roll = r;
}
void student::displayData() {
    cout << "Student info: " << endl
         << "Name: " << name << endl
         << "Address: " << address << endl
         << "Roll: " << roll << endl;
}
int main()
{
    student s;
    char a[50];
    char n[50];
    cout << "Enter name: ";
    cin.getline(n, 50);
    cout << "Enter address: ";
    cin.getline(a, 50);
    s.inputData(n, a, 116);
    s.displayData();
    cout << "Programmed by Pierce" << endl;
}
