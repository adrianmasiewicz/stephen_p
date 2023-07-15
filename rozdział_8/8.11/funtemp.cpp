#include <iostream>
using namespace std;

template <typename T>
void Swap(T& a, T& b);

int main() {
    int i = 10;
    int j = 20;
    cout << "i = " << i << ", j = " << j << endl;
    Swap(i, j);
    cout << "Now i = " << i << ", j = " << j << endl;


    double x = 24.5;
    double y = 34.73;
    cout << "x = " << x << ", y = " << y << endl;
    Swap(x, y);
    cout << "Now x = " << x << ", y = " << y << endl;
    
}

template <typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}