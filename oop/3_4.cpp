#include <iostream>
using namespace std;
class Time {
  int hr;
 public:
  void getData();
  operator int() {
    int minute;
    minute = hr * 60;
    return minute;
  }
};

void Time::getData() {
  cout << "Enter Hours: ";
  cin >> hr;
}

int main() {
  Time tm;
  tm.getData();
  float min = tm;
  cout << "Minute: " << min << endl;
}
