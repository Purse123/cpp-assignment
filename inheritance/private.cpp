#include <iostream>
class Base {
public:
  int x = 5;

protected:
  int y = 5;

private:
  int z = 5;
};
class Derived : private Base {
public:
  void modify() {
    x = 2;
    y = 2;
    /*z = 2;*/
  }
};
int main() {
  Derived d;
  d.modify();
  /*std::cout << "x: " << d.x << std::endl;*/
  /*std::cout << "y: " << d.y << std::endl;*/
  /*std::cout << "z: " << d.z << std::endl;*/
}
