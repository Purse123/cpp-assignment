#include <iostream>
using namespace std;
class algo {
  int x, y, tempx, tempy;
  int s, s1, s2;
  int t, t1, t2;

public:
  void getData();
  void extgcd();
  void display();
};

void algo::getData() {
  cout << "Enter any two number: " << endl;
  cin >> x >> y;
  tempx = x;
  tempy = y;
}

void algo::extgcd() {
  int r, q;
  s = 1, s1 = 0;
  t = 0, t1 = 1;
  while (y != 0) {
    q = x / y;
    r = x % y;
    x = y;
    y = r;
    s2 = s - q * s1;
    t2 = t - q * t1;
    s = s1;
    s1 = s2;
    t = t1;
    t1 = t2;
  }
}

void algo::display() {
  cout << "The GCD of " << tempx << " and " << tempy << " is " << x << endl
       << " S " << " is " << s << endl
       << " T " << " is " << t << endl;
}
int main() {
  algo a;
  a.getData();
  a.extgcd();
  a.display();
}
