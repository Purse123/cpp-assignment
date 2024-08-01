#include <iostream>
using namespace std;
class algo {
public:
  int result[10][10];
  int a[10][10];
  int r, c;
  void getData(int, int);
  void join(algo, algo, int, int);
  void meet(algo, algo, int, int);
  void display();
};

void algo::getData(int row, int col) {
  r = row;
  c = col;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Enter value " << i + 1 << " " << j + 1 << " : ";
      cin >> a[i][j];
    }
  }
}

void algo::join(algo x, algo y, int row, int col) {
  r = row;
  c = col;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      result[i][j] = x.a[i][j] | y.a[i][j];
    }
  }
}

void algo::meet(algo x, algo y, int row, int col) {
  r = row;
  c = col;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      result[i][j] = x.a[i][j] & y.a[i][j];
    }
  }
}

void algo::display() {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << result[i][j] << "\t";
    }
    cout << endl;
  }
}

class Mult : public algo {
public:
  void multiply(algo &, algo &, int, int);
};

void Mult::multiply(algo &a1, algo &a2, int row, int col) {
  r = row;
  c = col;

  // Initialize result matrix to 0
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      result[i][j] = 0;
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      for (int k = 0; k < a1.c; k++) {
        result[i][j] |= (a1.a[i][k] & a2.a[k][j]);
      }
    }
  }
}
int main() {
  int x, y;
  algo a1, a2, j, m;
  cout << "Enter no of row: ";
  cin >> x;
  cout << "Enter no of column: ";
  cin >> y;
  cout << "Enter matrix 1: " << endl;
  a1.getData(x, y);
  cout << "Enter matrix 2: " << endl;
  a2.getData(x, y);
  j.join(a1, a2, x, y);
  m.meet(a1, a2, x, y);
  cout << "After Join: " << endl;
  j.display();
  cout << "After Meet: " << endl;
  m.display();
  cout << "____________________________________" << endl;
  cout << "For boolean product: " << endl;
  Mult ma, mb, mul;
  int x1, x2, y1, y2;
  cout << "Enter no of row: ";
  cin >> x1;
  cout << "Enter no of column: ";
  cin >> y1;
  cout << "Enter no of row: ";
  cin >> x2;
  cout << "Enter no of column: ";
  cin >> y2;
  if (y1 == x2) {
    ma.getData(x1, y1);
    mb.getData(x2, y2);
    mul.multiply(ma, mb, x1, y2);
    cout << "After boolean multiplication: " << endl;
    mul.display();
  } else {
    cout << "Matrix multiply not possible" << endl;
  }
}
