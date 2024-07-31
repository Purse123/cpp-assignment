#include <cmath>
#include <iostream>
using namespace std;

class algo {
  int a, b, rem = 0;
  int para, parb;

public:
  int sum = 0;
  int result = 0;
  int div_result = 0;
  void getData();
  int counter(int);
  void sumCalc();
  int sumCalc(int, int);
  int subCalc(int, int);
  void multCalc();
  int b_d(int);
  int d_b(int);
  int divCalc();
  void display(int);
};

void algo::getData() {
  cout << "Enter any binary number: ";
  cin >> a;
  cout << "Enter second binary number: ";
  cin >> b;
}

int algo::counter(int c) {
  int count = 0;
  while (c > 0) {
    count++;
    c /= 10;
  }
  return count;
}

void algo::sumCalc() {
  para = a;
  parb = b;
  sum = 0;
  rem = 0;
  int place = 1;
  while (para > 0 || parb > 0 || rem > 0) {
    int tempa = para % 10;
    int tempb = parb % 10;
    int currentSum = (tempa + tempb + rem) % 2;
    rem = (tempa + tempb + rem) / 2;
    sum += currentSum * place;
    place *= 10;
    para /= 10;
    parb /= 10;
  }
}

int algo::sumCalc(int para, int parb) {
  int tempSum = 0;
  rem = 0;
  int place = 1;
  while (para > 0 || parb > 0 || rem > 0) {
    int tempa = para % 10;
    int tempb = parb % 10;
    int currentSum = (tempa + tempb + rem) % 2;
    rem = (tempa + tempb + rem) / 2;
    tempSum += currentSum * place;
    place *= 10;
    para /= 10;
    parb /= 10;
  }
  return tempSum;
}

void algo::multCalc() {
  int tempa = a;
  int tempb = b;
  result = 0;
  int place = 1;

  while (tempb > 0) {
    int unitb = tempb % 10;
    int partResult = 0;
    if (unitb == 1) {
      partResult = tempa;
    }
    result = sumCalc(result, partResult * place);
    tempb /= 10;
    place *= 10;
  }
}

int algo::b_d(int tempa) {
  int a, res = 0, i = 0;
  while (tempa != 0) {
    a = tempa % 10;
    res += (a * pow(2, i));
    i++;
    tempa /= 10;
  }
  return res;
}

int algo::d_b(int tempa) {
  int res = 0, i = 1;
  while (tempa != 0) {
    int a = tempa % 2;
    res += a * i;
    tempa /= 2;
    i *= 10;
  }
  return res;
}

int algo::divCalc() {
  int decimalA = b_d(a);
  int decimalB = b_d(b);
  if (decimalB == 0) {
    cout << "Error: Division by zero" << endl;
    return 0;
  }
  int decimalResult = decimalA / decimalB;
  return div_result = d_b(decimalResult);
}

void algo::display(int n) { cout << n << endl; }

int main() {
  algo obj;
  obj.getData();
  cout << "______________________________" << endl;
  cout << "Sum:  ";
  obj.sumCalc();
  obj.display(obj.sum);
  cout << "Multiply:  ";
  obj.multCalc();
  obj.display(obj.result);
  cout << "Divide:  ";
  obj.divCalc();
  obj.display(obj.div_result);
}
