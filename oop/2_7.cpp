#include<iostream>
using namespace std;
class  Copy{
    int id;
    public:
    Copy() { }// constructor
    Copy(int x) //constructor
    {
        id = x;
    } 	
    Copy(Copy & y) //copy constructor
    {
        id = y.id;
    }
    void display()
    {
        cout<<id << endl;
    }
};
int main()
{
    Copy A (20);
    Copy B(A);
    Copy C = A;
    Copy D;
    D = A;
    cout<<"\n id of A: ";
    A.display();
    cout<<"\n id of B: ";
    B.display();
    cout<<"\n id of C: ";
    C.display();
    cout<<"\n id of D: ";
    D.display();
    cout << "Programmed by Pierce" << endl;
}
