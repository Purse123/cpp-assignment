#include<iostream>
using namespace std;
class checker {
    int x, y;
    public:
    void getData();
    int small();
    void display();
};
void checker::getData() {
    cout << "Enter any two value: " << endl;
    cin >> x >> y;
}
int checker::small() {
    if (x > y) {
        return y;
    }
    else {
        return x;
    }
}
void checker::display() {
    cout << "Smallest: " << small() << endl;
}
int main() {
    checker c;
    c.getData();
    c.display();
    cout << "Programmed by Pierce" << endl;
}
