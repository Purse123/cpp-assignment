#include <cmath>
#include <iostream>
using namespace std;
class Polar {
  int radius, thita;

public:
  Polar() {}
  Polar(float r, float a) : radius(r), thita(a) {}
  void show();
};
void Polar::show() {
  cout << "(r, Q) = " << "(" << radius << ", " << thita << ")" << endl;
};

class Rect {
  float x, y;

public:
  void show();
  Rect() : x(0), y(0) {}
  Rect(int a, int b) {
    x = a;
    y = b;
  }
  operator Polar() {
    float r = sqrt(x * x + y * y);
    float Q = atan(y / x);
    return Polar(r, Q);
  }
};
void Rect::show() {
  cout << "(r, Q) = " << "(" << x << ", " << y << ")" << endl;
};

int main() {
  Polar p;
  Rect r(6, 19);
  p = r;
  cout << "Rectangle coordinate: ";
  r.show();
  cout << "Polar coordinate: ";
  p.show();
}
