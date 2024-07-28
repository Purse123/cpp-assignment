#include<iostream>
using namespace std;
class weight {
    public:
    void calc(float mass,float g=9.8)
    {
        float w = mass * g;
        cout << "weight: " << w << endl;
    }
};
int main() 
{
    weight w1;
    float m;
    cout<<"Enter mass: ";
    cin>>m;
    w1.calc(m);
    cout << "Programmed by Pierce" << endl;
}
