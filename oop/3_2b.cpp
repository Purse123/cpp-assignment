#include<iostream>
using namespace std;
class oppOver {
  int x;
  public:
  oppOver() {}
  oppOver(int num) {
    x = num;
  }
  void display();
  void operator =(oppOver&);
};
/* 
  In the case of a non-static member function, the binary operator should have only one argument and the unary should not have an argument.
  In the case of a friend function, the binary operator should have only two arguments and the unary should have only one argument.
*/
void oppOver::operator =(oppOver& o1) {
  x = o1.x;
}
void oppOver::display() {
  cout << x << endl;
}
int main() {
  int val = 4;
  oppOver f;
  oppOver o(val);
  f=o;
  o.display();
  f.display();
}
