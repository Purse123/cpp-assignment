// Copyright C "Purse" from internal-pointer-variable
#include <iostream>
using namespace std;
class algo {
  int A = 0, B = 0, C = 0;

public:
  void operator++(int);
  void display();
  int calc();
};

void algo::operator++(int a) {
  if (C > 0) {
    if (B >= 1) {
      if (A >= 1) {
        A = 0;
      } else {
        A++;
      }
      B = 0;
    } else {
      B++;
    }
    C = 0;
  } else {
    C++;
  }
}

int algo::calc() {
  int result;
  result = ((A || B) && C) ? 1 : 0;
  return result;
}

void algo::display() {
  cout << "|  " << A << "  |  " << B << "  |  " << C << "  |       " << calc()<< "       |"
       << endl;
}

int main() {
  algo a1;
  cout << "|  A  |" << "  B  |" << "  C  |" << "  (A V B) ∧ C  |" << endl;
  a1.display();
  for (int i = 0; i < 7; i++) {
    a1++;
    a1.display();
  }
}
