// Copyright C "Purse" from internal-pointer-variable
#include <iostream>

class algo {
  int A = 1, B = 1;
  int result;

public:
  void operator++(int);
  void display();
  void andCalc();
  void AndDis();
  void OrCalc();
  void OrDis();
  void notCalc();
  void notDis();
};

void algo::operator++(int) {
  if (B > 0) {
    if (A >= 1) {
      A = 0;
    } else {
      A++;
    }
    B = 0;
  } else {
    B++;
  }
}

void algo::andCalc() { result = (A && B) ? 1 : 0; }
void algo::OrCalc() { result = (A || B) ? 1 : 0; }
void algo::notCalc() { result = B ? 0 : 1; }

void algo::display() {
  std::cout << "|  " << A << "  |  " << B << "  |    " << result << "    |"
            << std::endl;
}

void algo::AndDis() { display(); }
void algo::OrDis() { display(); }
void algo::notDis() {
  std::cout << "|  " << B << "  |    " << result << "    |" << std::endl;
}

int main() {
  algo a1;
  std::cout << "|  A  |  B  |  A ∧ B  |" << std::endl;
  for (int i = 0; i < 4; i++) {
    a1++;
    a1.andCalc();
    a1.AndDis();
  }
  std::cout << std::endl;
  std::cout << "|  A  |  B  |  A V B  |" << std::endl;
  for (int i = 0; i < 4; i++) {
    a1++;
    a1.OrCalc();
    a1.OrDis();
  }
  std::cout << std::endl;
  std::cout << "|  A  |   ~A    |" << std::endl;
  for (int i = 0; i < 2; i++) {
    a1++;
    a1.notCalc();
    a1.notDis();
  }
}
