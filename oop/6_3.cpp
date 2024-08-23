#include <iostream>
using namespace std;

template <class T> void swaps(T &x, T &y) {
  T temp = x;
  x = y;
  y = temp;
}

int main() {
  int m = 10, n = 20;
  cout << "Before swap: m: " << m << " n: " << n << endl;
  swaps(m, n);
  cout << "After swap: m: " << m << " n: " << n << endl;
}
