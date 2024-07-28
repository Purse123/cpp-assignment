#include<iostream>
using namespace std;
class classType {
  int x;
  char y;
  public:
  classType(){}
  classType(char);
  void display();
};
classType::classType(char c) {
  x = (int)c;
  y = c;
}
void classType::display() {
  cout << "X: "<< x << endl
       << "Y: "<< y << endl;
}
int main() {
  char s = 'a';
  classType o1;
  o1 = s;
  o1.display();
}
