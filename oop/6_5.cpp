#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter the values of a and b\n";
  cin >> a >> b;
  int x = a - b;
  try {
    if (x != 0)
      cout << "Rest (a/x)= " << a / x << endl;
    else
      throw(x);
  } catch (int i) {
    cout << "Exception caught: x = " << x << endl;
  }
}
