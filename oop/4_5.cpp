#include <iostream>
using namespace std;
// Parent class Alpha
class Alpha {
public:
  int add(int a, int b) { return a + b; }
};
// Parent class Beta
class Beta {
public:
  int multiply(int a, int b) { return a * b; }
};
// Child class Gamma inheriting from Alpha and Beta
class Gamma : public Alpha, public Beta {
public:
  int calculate(int a, int b) {
    int sum = add(a, b);          // Using add() from Alpha
    int product = multiply(a, b); // Using multiply() from Beta
    return sum + product;
  }
};
int main() {
  Gamma obj;
  int num1 = 5, num2 = 3;
  cout << "Addition: " << obj.add(num1, num2) << endl;
  cout << "Multiplication: " << obj.multiply(num1, num2) << endl;
  cout << "Calculation (Sum + Product): " << obj.calculate(num1, num2) << endl;
}
