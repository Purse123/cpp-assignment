#include <iostream>

class base {
public:
  void getData() { std::cout << "getting data from base" << std::endl; }
  virtual void showData() { std::cout << "showing data from base" << std::endl; }
};

class derive : public base {
public:
  void getData() { std::cout << "getting data from derive" << std::endl; }

  void showData() { std::cout << "showing data from derive" << std::endl; }
};

int main() {
  base b, *btr;
  derive d;
  btr = &b;
  btr->getData();
  btr->showData();
  btr = &d;
  btr->getData();
  btr->showData();
}
