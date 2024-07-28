#include<iostream>
using namespace std;
class oppOver {
  int x, y;
  public:
  void getData();
  void display();
  oppOver operator+(oppOver);
};
void oppOver::getData() {
  cout << "Enter real and imaginery value: " << endl;
  cin >> x >> y;
}
oppOver oppOver::operator +(oppOver o3) {
  oppOver temp;
  temp.x = x + o3.x;
  temp.y = y + o3.y;
  return temp;
}
void oppOver::display() {
  cout << x << "+i"<< y << endl;
}
int main() {
  oppOver o1, o2, o;
  o1.getData();
  o2.getData();
  o = o1 + o2;
  o1.display();
  o2.display();
  o.display();
}
