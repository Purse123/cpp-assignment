#include<iostream>
using namespace std;
class checkLarg {
    int x, y;
    public:
    int process();
    void getData();
    void display();
};
void checkLarg::getData() {
    cout << "Enter any two number: " << endl;
    cin >> x >> y;
}
int checkLarg::process() {
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}
void checkLarg::display() {
    cout << "Largest: " << process() << endl;
}
int main() {
    checkLarg l;
    l.getData();
    l.display();
    cout << "Programmed by Pierce" << endl;
}
