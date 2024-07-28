#include <iostream>
using namespace std;

class algo {
  int a, b, rem = 0;
  int para, parb;

public:
  int sum = 0;
  int result = 0;
  void getData();
  int counter(int);
  void sumCalc();
  int sumCalc(int, int);
  void multCalc();
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

void algo::display(int n) { cout << n << endl; }

int main() {
  algo obj;
  obj.getData();
  obj.sumCalc();
  cout << "______________________________" << endl;
  cout << "Sum:  ";
  obj.display(obj.sum);
  obj.multCalc();
  cout << "Multiply:  ";
  obj.display(obj.result);
}
