#include<iostream>
#include<cstring>
using namespace std;
class city {
    string cityName;
    float distance;
    float dis_Ktm;
    public:
    void getData(string, float);
    void display();
    void addDistance(city, city);
};
void city::getData(string x, float d) {
    cityName = x;
    dis_Ktm = d;
}
void city::addDistance(city c1, city c2) {
    distance = c1.dis_Ktm + c2.dis_Ktm;
    cout << "Total distance: "<< distance << endl;
}
void city::display() {
    cout << "City name: "<< cityName << endl
         << "Distance: " << dis_Ktm << endl;
}
int main()
{
    city a, b, c;
    string city1 = "Pokhara";
    string city2 = "Dhangadi"; 
    a.getData(city1, 250.5);
    b.getData(city2, 350.5);
    a.display();
    b.display();
    c.addDistance(a, b);
    cout << "Programmed by Pierce" << endl;
}
