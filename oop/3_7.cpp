#include <cmath>
#include <iostream>
#define PI 3.1415
using namespace std;
class Polar {
  float radius, thita;

public:
  void show();
  /*Polar(float r, float Q) {*/
  /*  radius = r;*/
  /*  thita = Q;*/
  /*}*/
  Polar(float r, float Q) : radius(r), thita(Q) {} // alternate to above comment
  float getX() { return radius; }
  float getY() { return thita; }
};
void Polar::show() {
  cout << "(r, Q) = " << "(" << radius << ", " << thita << ")" << endl;
}
class Rect {
  float rad, angle;

public:
  void show();
  Rect() {}
  Rect(Polar p) {
    rad = p.getX() * cos(p.getY());
    angle = p.getX() * sin(p.getY());
  }
};
void Rect::show() {
  cout << "(x, y) = " << "(" << rad << ", " << angle << ")" << endl;
}
int main() {
  Polar p(10.81, 60 * PI / 180);
  cout << "Polar coordinate: ";
  p.show();
  Rect r(p);
  cout << "Rectangle coordinate: ";
  r.show();
}
