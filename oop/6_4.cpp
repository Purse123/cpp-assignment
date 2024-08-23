#include <iostream>
using namespace std;

template <typename T> T add(T a, T b) { return a + b; }

template <typename T> T add(T a, T b, T c) { return a + b + c; }

int main() {
  int resultint = add(5, 10);
  double resultdouble = add(2.5, 3.5, 1.5);
  cout << "R1: " << resultint << endl;
  cout << "R2: " << resultdouble << endl;
}
