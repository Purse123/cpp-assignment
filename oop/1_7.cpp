#include<iostream>
using namespace std;
void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 6;
    int y = 3;
    cout << "Before Swap" << endl
         << "x: " << x << endl
         << "y: " << y << endl;
    swap(&x, &y);
    cout << "After Swap" << endl
         << "x: " << x << endl
         << "y: " << y << endl;
    cout << "Programmed by Pierce" << endl;
}
