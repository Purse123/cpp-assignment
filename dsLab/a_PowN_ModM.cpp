// Copyright C "Purse" from internal-pointer-variable
#include <iostream>
int power(int base, int n) {
  if (n != 0) {
    return base * power(base, n-1);
  }
  else {
    return 1;
  }
}
int main() {
  int a, n, m, b;
  std::cout << "Enter base number a: ";
  std::cin >> a;
  std::cout << "Enter base number b: ";
  std::cin >> b;
  std::cout << "Enter power: ";
  std::cin >> n;
  std::cout << "Enter mod number: ";
  std::cin >> m;
  int temp1 = power(a, n) % m;
  std::cout << "result (a^n % m): "<< temp1 << std::endl;
  int temp2 = power(b, n) % m;
  std::cout << "result (a^n % m): "<< temp2 << std::endl;
}
