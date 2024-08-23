#include <iostream>
using namespace std;

template <class T1> class test {
  T1 a;

public:
  void add(T1 x, T1 y) { a = x + y; }
  void multiply(T1 x, T1 y) { a = x * y; }
  void division(T1 x, T1 y) { a = x / y; }
  void subtraction(T1 x, T1 y) { a = x - y; }
  void show() { cout << a << endl; }
};

int main() {
  test<float> testf;
  test<int> testi;
  testf.add(5.23, 6.43);
  testf.show();
  testf.division(8.4, 2.0);
  testf.show();
  testi.multiply(20, 32);
  testi.show();
  testi.subtraction(200, 150);
  testi.show();
}
