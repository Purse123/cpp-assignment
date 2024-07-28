#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    string sh;
    cout << "Enter your name: " << endl;
    cin >> setw(10) >> sh;

    cout << "Your name: " 
         << setw(10) 
         << sh
         << endl;
    cout << "Programmed by Pierce" << endl;
}
