#include<iostream>
using namespace std;
class addition {
    int a, b, sum;
    public:
    void getData();
    void processing();
    void display();
};
void addition::getData() {
    cout << "Enter any two number: \n";
    cin >> a >> b;
}
void addition::processing() {
    sum = a+b;
}
void addition::display(){
    cout << "Sum: "<< sum<< endl;
}
int main() {
    addition a;
    a.getData();
    a.processing();
    a.display();
    cout << "Programmed by Pierce" << endl;
}
