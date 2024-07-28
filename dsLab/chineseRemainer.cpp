#include <iostream>
using namespace std;
class algo {
  int a[20], m[20], M[20], Mi[20];
  int n, Mt = 1;

public:
  void getData();
  void calcM();
  void calcMi();
  int calcX();
  void display();
};

void algo::getData() {
  cout << "Enter the number of elements: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i + 1 << " term of number: ";
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cout << "Enter " << i + 1 << " term of mod: ";
    cin >> m[i];
  }
}

void algo::calcM() {
  for (int i = 0; i < n; i++) {
    Mt *= m[i];
  }
  for (int i = 0; i < n; i++) {
    M[i] = Mt / m[i];
  }
}

void algo::calcMi() {
  // M * Mi = x       algo
  // x % m = 1        algo
  for (int i = 0; i < n; i++) {
    int count = 1;
    while ((M[i] * count) % m[i] != 1) {
      count++;
    }
    Mi[i] = count;
  }
}

int algo::calcX() {
  int result = 0;
  for (int i = 0; i < n; i++) {
    result += (a[i] * M[i] * Mi[i]);
  }
  return result % Mt;
}

void algo::display() { cout << "value of x: " << calcX() << endl; }

int main() {
  algo a1;
  a1.getData();
  a1.calcM();
  a1.calcMi();
  a1.display();
}
