#include<iostream>
using namespace std;
inline int cube(int s) {
    return s*s*s;
}
int main ()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;
    cout << "The cube of "<< n << " is " << cube(n) << endl;
    cout << "Programmed by Pierce" << endl;
}
