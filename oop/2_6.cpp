#include<iostream>
using namespace std;
class param {
    int a, b;
    public:
    param(int, int);
    void display(){
        cout << a << " " << b << endl;
    }
};
param::param(int x, int y) {
    a = x;
    b = y;
}
int main()
{
    param p = param(30, 73);
    param p1(32, 65);
    p.display();
    p1.display();
    cout << "Programmed by Pierce" << endl;
}
