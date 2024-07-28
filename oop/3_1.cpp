#include<iostream>
using namespace std;
class oppOver {
  int x, y;
  public:
  void getData();
  void display();
  void operator -();
};
void oppOver::getData() {
  cout << "Enter any two number: " << endl;
  cin >> x >> y;
}
void oppOver::operator -() {
  x = -x;
  y = -y;
}
void oppOver::display() {
  cout << "x: " << x << endl
       << "y: " << y << endl;
}
int main() {
  oppOver o;
  o.getData();
  -o;
  o.display();
}
