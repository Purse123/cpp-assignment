#include<iostream>
using namespace std;
void change (int *x) {
    *x = 9;
}
int main() {
    int a = 5;
    cout << "Before Change:" << endl
         << "a: " << a << endl;
    change(&a);
    cout << "After Change: " << endl
         << "a: " << a << endl;
    cout << "Programmed by Pierce" << endl;
}
