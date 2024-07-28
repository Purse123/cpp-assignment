#include <iostream>
using namespace std;
class fuzzy {
  int a[50];
  float f[50][2];
  int n;

 public:
  fuzzy(int num) {
    n = num;
    for (int i = 0; i < n; i++) {
      cout << "Enter element " << i + 1 << " : ";
      cin >> a[i];
    }
  }
  void display();
  void process();
  float calc(int);
};

float fuzzy::calc(int x) {
  int leader = 5;
  float temp;
  if (x <= leader) {
    temp = (leader - x) / 5.0;
  } else {
    temp = (x - leader) / 5.0;
  }
  return temp;
}

void fuzzy::display() {
  cout << "{ ";
  for (int i = 0; i < n; i++) {
    cout << "(" << f[i][0] << ", " << f[i][1] << ") ";
  }
  cout << "}" << endl;
}

void fuzzy::process() {
  for (int i = 0; i < n; i++) {
    f[i][0] = a[i];
    f[i][1] = calc(a[i]);
  }
}

int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  fuzzy f1(n);
  f1.process();
  f1.display();
}
