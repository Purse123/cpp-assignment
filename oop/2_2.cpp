#include<iostream>
using namespace std;
class calc {
    int am, pm, total;
    public:
    void setMark() {
        cout << "Enter Assessment mark: ";
        cin >> am;
        cout << "Enter Practical mark: ";
        cin >> pm;
    }
    int publishment() {
        return total = am+pm;
    }
};
int main() {
    calc c;
    c.setMark();
    cout << "Total Mark: " << c.publishment() << endl;
    cout << "Programmed by Pierce" << endl;
}
