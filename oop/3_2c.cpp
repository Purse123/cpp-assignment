#include<iostream>
using namespace std;
class oppOver {
  public:
  int x;
  oppOver() {
    cout << "Enter any two number: ";
    cin >> x;
  }
  bool operator >(oppOver);
};
bool oppOver::operator >(oppOver o1) {
  if(x > o1.x) {
    return true;
  }
  else {
    return false;
  }
}
int main() {
  oppOver f, o;
  if(f > o) {
    cout << "Largest: " << f.x << endl;
  }
  else {
    cout << "Largest: " << o.x << endl;
  }
}
