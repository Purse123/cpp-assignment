#include <iostream>
class algo {
  int r, n, temp;

public:
  int result;
  algo(int x, int y) : n(x), r(y) {}
  void perm();
  int factorial(int);
  void comb();
};

void algo::perm() {
  result = factorial(n) / factorial(n - r);
}

void algo::comb() {
  result = factorial(n) / (factorial(n - r) * factorial(r));
}

int algo::factorial(int a) {
  if (a == 0) {
    return 1;
  } else if (a == 1) {
    return 1;
  } else {
    return a * factorial(a - 1);
  }
}

int main() {
  int r, n;
  std::cout << "Enter value of n: ";
  std::cin >> n;
  std::cout << "Enter value of r: ";
  std::cin >> r;
  algo a(n, r);
  a.perm();
  std::cout << "permuation: " << a.result << std::endl;
  a.comb();
  std::cout << "combination: " << a.result << std::endl;
}
