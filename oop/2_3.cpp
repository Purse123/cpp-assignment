#include<iostream>
using namespace std;
class details {
    string name, address, faculty;
    int roll;
    public:
    void getData();
    void display() {

        cout << endl 
             << "Your Info: " << endl 
             << "Name: " << name << endl
             << "Address: " << address << endl
             << "Faculty: " << faculty << endl
             << "Roll no: " << roll << endl;
    }
};
void details::getData() {
    cout << "Enter your Name, Address, faculty and rollNo: " << endl;
    cin >> name >> address >> faculty >> roll;
}
int main() {
    details s1;
    s1.getData();
    s1.display();
    cout << "Programmed by Pierce" << endl;
}
