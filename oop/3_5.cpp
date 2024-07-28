#include <cmath>
#include <iostream>
using namespace std;
class rect {
  float x, y;

public:
  rect(float a, float b) : x(a), y(b) {}
  float getX() { return x; }
  float getY() { return y; }
};
class polar {
  float radius, thita;

public:
  void show();
  polar(rect r) {
    float tempx = r.getX();
    float tempy = r.getY();
    radius = sqrt(tempx * tempx + tempy * tempy);
    thita = atan(tempy / tempx);
  }
};
void polar::show() {
  cout << "(r, Q) = " << "(" << radius << ", " << thita << ")" << endl;
}
int main() {
  float x, y;
  cout << "Enter x and y: " << endl;
  cin >> x >> y;
  rect r1(x, y);
  polar p(r1);
  p.show();
}
