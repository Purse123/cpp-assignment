#include <iostream>
#include <ostream>
class student {
protected:
  int roll_number;
  public:
  void getRoll(int r) { roll_number = r; }
  void displayRoll();
};
void student::displayRoll() {
  std::cout << "Roll no: " << roll_number << std::endl;
}
class test : public student {
protected:
  float sub1, sub2;
  public:
  void getTest(float, float);
  void testData();
};
void test::getTest(float t1, float t2) {
  sub1 = t1;
  sub2 = t2;
}
void test::testData() {
  std::cout << "Mark in subject 1: " << sub1 << std::endl;
  std::cout << "Mark in subject 2: " << sub2 << std::endl;
}
class result : public test {
  public:
  void display() {
    float total = sub1 + sub2;
    displayRoll();
    testData();
    std::cout << "Total: " << total << std::endl;
  }
};
int main (){
  result r;
  r.getRoll(116);
  r.getTest(90,95);
  r.display();
}
