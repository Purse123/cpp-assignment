#include<iostream>
using namespace std;
class multiplier{
    int c, n;
    int a[50];
    public:
    void getData(int);
    void ctProduct(multiplier, multiplier);
    void display(int, int);
};
void multiplier::getData(int len) {
    n = len;
    int i;
    for(i=0; i<n; i++) {
        cout << "Enter " << i + 1
             << " element: ";
        cin >> a[i];
    }
}
void multiplier::ctProduct(multiplier m1, multiplier m2) {
    int i, j;
    cout << "{";
    for(i = 0; i < m1.n; i++){
        for(j = 0; j < m2.n; j++){
            display(m1.a[i], m2.a[j]); 
        }
    }
    cout << "}" << endl;
}
void multiplier::display(int x, int y) {
    cout << "(" << x << ", "<< y << ")";
}
int main() {
    multiplier m1, m2;
    int x, y;
    cout << "Enter no of element of A: " << endl;
    cin >> x;
    m1.getData(x);
    cout << "Enter no of element of B: " << endl;
    cin >> y;
    m2.getData(y);
    m1.ctProduct(m1, m2);
}
