#include <cstring>
#include <iostream>
class person {
  char name[50];
  int age;

public:
  person(char s[], int a) {
    strcpy(name, s);
    age = a;
  }
  person greater(person &x) {
    if (x.age >= age) {
      return x;
    } else {
      return *this;
    }
  }
  void display() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
  }
};
int main() {
  char name1[20] = "Pierce", name2[20] = "Rabin", name3[20] = "Ramesh";
  person p1(name1, 20), p2(name2, 19), p3(name3, 18);
  person p = p1.greater(p2);
  p = p.greater(p3);
  std::cout << "Eldest person is: ";
	p.display();
}
