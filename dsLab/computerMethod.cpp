#include<iostream>
using namespace std;
class set {
  int universal[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int a[20], bina[20];
  int n;
public:
  set(){}
  set(int[], int);
  set unionOperator(set, set);
  set intersectionOperator(set, set);
  void ascending();
  void binary();
  void display();
};
set set::unionOperator (set x, set y){
  set un;
  for(int i = 0; i < 10; i++){
    un.bina[i] = x.bina[i] | y.bina[i];
  }
  return un;
}
set set::intersectionOperator (set x, set y){
  set in;
  for(int i = 0; i < 10; i++){
    in.bina[i] = x.bina[i] & y.bina[i];
  }
  return in;
}
set::set(int arr[], int size) {
  n = size;
  for (int i = 0; i < n; i++) {
    a[i] = arr[i];
  }
}
void set::ascending() {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
void set::binary() {
    for (int i = 0; i < 10; i++) {
        bina[i] = 0;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<10; j++) {
            if(universal[j] == a[i]) {
                bina[j] = 1;
                break;
            }
        }
    }
}
void set::display() {
    cout << "{ ";
    for (int i = 0; i < 10; i++) {
        cout << bina[i] << " ";
    }
    cout << "}" << endl;
}
int main() {
    int arr1[] = {5, 2, 1, 7, 3, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    set s1(arr1, size1);
    s1.ascending();
    s1.binary();
    cout << "Set A: ";
    s1.display();
    int arr2[] = {9, 8, 7, 6, 5, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    set s2(arr2, size2);
    s2.ascending();
    s2.binary();
    cout << "Set B: ";
    s2.display();
    cout <<"________________________________"<<endl;

    set u;
    u = u.unionOperator(s1, s2);
    cout << "Union Set: ";
    u.display();
    set i;
    i = i.intersectionOperator(s1, s2);
    cout << "Intersection Set: ";
    i.display();
}
