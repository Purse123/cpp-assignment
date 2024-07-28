#include <iostream>
#include <math.h>
#define PI 3.1415
using namespace std;
class rect {
  float x, y;
public:
  rect() {}
  rect(float a, float b) {
    x = a;
    y = b;
  }
  void show();
};
void rect::show() {
  cout << "(x, y) = " << "(" << x << ", " << y << ")" << endl;
}
class polar {
  double radius, thita;
public:
  double a, b;
  polar() {
    radius = 0;
    thita = 0;
  }
  polar(double A, double B) {
    radius = A;
    thita = B;
  }
  void show();
  operator rect() {
    a = radius * cos(thita);
    b = radius * sin(thita);
    return (rect(a, b));
  }
};
void polar::show() {
  cout << "(r, Q) = " << "(" << radius << ", " << thita << ")" << endl;
}
int main() {
  rect r;
  polar p(10.81, 60 * PI / 180);
  r = p;
  cout << "Polar coordinate: ";
  p.show();
  cout << "Rectangle coordinate: ";
  r.show();
}
