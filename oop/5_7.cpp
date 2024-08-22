#include <iostream>
using namespace std;

class test {
  int nonstatic;
  static int count;

public:
  void set_static() { count = ++count; }
  static void showcount() { cout << "Count: = " << count << endl; }
  void shownonstat() { cout << "non static = " << nonstatic << endl; }
};

int test::count;

int main() {
  test t1, t2;
  t1.set_static();
  t2.set_static();
  test::showcount();
  test t3;
  t3.set_static();
  test::showcount();
  t1.shownonstat();
  t2.shownonstat();
  t3.shownonstat();
}
