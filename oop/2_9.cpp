#include <iostream>
using namespace std;
int count = 0;
class destruct {
public:
    destruct() {
        count++;
        cout << "\nNo. of objects created: " << count;
    }
    ~destruct() {
        cout << "\nNo. of objects destroyed: " << count;
        cout << endl;
        count--;
    }
};
void display() {
    cout << endl << "Programmed by Pierce" << endl;
}
int main() {
    destruct d1, d2, d3;
    display();
    return 0;
}
