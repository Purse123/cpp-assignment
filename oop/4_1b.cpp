#include <iostream>
class B {
  int a;

public:
  int b;
  void getData() {
    a = 5;
    b = 10;
  }
  int sendA() {
    return (a);
  }
};
class D: private B {
  int c;

public:
  void mult();
  void display();
};
void D::mult() {
  c = sendA() * b;
}
void D::display() {
  std::cout << "a: " << sendA() << std::endl
            << "b: " << b << std::endl
            << "c: " << c << std::endl;
}
int main() {
  D d;
  d.getData();
  d.mult();
  d.display();
}
