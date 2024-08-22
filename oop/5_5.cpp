#include <iostream>

class Base {
protected:
public:
  int x, result;
  virtual void squr() = 0;
  void getData() {
    std::cout << "call from base " << std::endl << "Enter value of x: ";
    std::cin >> x;
  }
  void display() {
    std::cout << "call from base " << std::endl;
    std::cout << "Sqaure of x: " << result << std::endl;
  }
};

class Derive : public Base {
public:
  void squr() {
    std::cout << "Process from derive " << std::endl;
    result = x * x;
  }
};

int main() {
  Derive d;
  Base *b = &d;
  b->getData();
  d.squr();
  b->display();
}
