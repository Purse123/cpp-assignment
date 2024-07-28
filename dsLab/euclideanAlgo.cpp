#include <iostream>
using namespace std;
class algo {
  int x, y, tempx, tempy;

public:
  void getData();
  int gcd();
  void display(int);
};

void algo::getData() {
  cout << "Enter any two number: " << endl;
  cin >> x >> y;
  tempx = x;
  tempy = y;
}

int algo::gcd() {
  int r;
  while (y != 0) {
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

void algo::display(int a) {
  cout << "The GCD of " << tempx << " and " << tempy
      << " is " << a << endl;
}
int main() {
  algo a;
  a.getData();
  int temp = a.gcd();
  a.display(temp);
}
