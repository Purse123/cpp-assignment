#include <iostream>
using namespace std;
class operation {
    int n;
    int a[50];
public:
    void getData(int len);
    void display();
    void intersection(operation, operation);
    void setUnion(operation, operation);
    void difference(operation, operation);
};
void operation::getData(int len) {
    n = len;
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " element: ";
        cin >> a[i];
    }
}
// for intersectoin
void operation::intersection(operation p1, operation p2) {
    int k = 0;
    int temp[50];
    for (int i = 0; i < p1.n; i++) {
        for (int j = 0; j < p2.n; j++) {
            if (p1.a[i] == p2.a[j]) {
                temp[k++] = p1.a[i];
                break;
            }
        }
    }
    cout << "Intersection: { ";
    for (int i = 0; i < k; i++) {
        cout << temp[i] << " ";
    }
    cout << "}" << endl;
}
// for union
void operation::setUnion(operation p1, operation p2) {
    int k = 0;
    int temp[50];
    for (int i = 0; i < p1.n; i++) {
        temp[k++] = p1.a[i];
    }
    for (int i = 0; i < p2.n; i++) {
        bool found = false;
        for (int j = 0; j < p1.n; j++) {
           if (p2.a[i] == p1.a[j]) {
                found = true;
                break;
            } 
        }
        if (!found) {
            temp[k++] = p2.a[i];
        }
    }
    cout << "Union: { ";
    for (int i = 0; i < k; i++) {
        cout << temp[i] << " ";
    }
    cout << "}" << endl;
}
// for difference
void operation::difference(operation p1, operation p2) {
    int k = 0;
    int temp[50];
    for (int i = 0; i < p1.n; i++) {
        bool found = false;
        for (int j = 0; j < p2.n; j++) {
            if (p1.a[i] == p2.a[j]) {
                found = true;
                break;
            } 
        }
        if (!found) {
            temp[k++] = p1.a[i];
        }
    }
    cout << "Difference (A - B): { ";
    for (int i = 0; i < k; i++) {
        cout << temp[i] << " ";
    }
    cout << "}" << endl;
}
int main() {
    operation o1, o2, o3;
    int x, y;
    cout << "Enter no of elements of Set A: ";
    cin >> x;
    o1.getData(x);
    cout << "Enter no of elements of Set B: ";
    cin >> y;
    o2.getData(y);
    o3.intersection(o1, o2);
    o3.setUnion(o1, o2);
    o3.difference(o1, o2);
}
