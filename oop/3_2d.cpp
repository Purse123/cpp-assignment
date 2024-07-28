#include <iostream>
using namespace std;
class overload {
  int h, m;

public:
  overload(int, int);
  overload();
  void operator++();
  void operator++(int);
  void display();
};
overload::overload() : h(0), m(0) {}
overload::overload(int x, int y) : h(x), m(y) {}
void overload::operator++() {
  ++m;
  if (m >= 60) {
    m -= 60;
    ++h;
  }
  if (h >= 24) {
    h = 0;
  }
}
void overload::operator++(int) {
  m++;
  if (m >= 60) {
    m -= 60;
    h++;
  }
  if (h >= 24) {
    h = 0;
  }
}
void overload::display() { cout << "Time: " << h << ":" << m << endl; }
int main() {
  int hh, mm;
  cout << "Enter hour and minute: " << endl;
  cin >> hh >> mm;
  overload o1(hh, mm), o2;
  o2 = o1;
  cout << "Before increment: " << endl;
  o1.display();
  cout << "After pre increment: " << endl;
  ++o1;
  o1.display();
  cout << "After post increment: " << endl;
  o2++;
  o2.display();
}
