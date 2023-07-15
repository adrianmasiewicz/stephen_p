#include <iostream>
using namespace std;

template <typename T>
void Swap(T& a, T& b);

template <typename T>
void Swap(T* a, T* b, int n);

void Show(int a[]);
const int Lim = 8;

int main() {
    int i = 10;
    int j = 20;

    cout << "i = " << i << ", j = " << j << endl;
    Swap(i, j);
    cout << "Now i = " << i << ", j = " << j << endl;

    int d1[Lim] = {0, 7, 0, 2, 6, 2, 7, 4};
    int d2[Lim] = {0, 7, 3, 6, 3, 8, 3, 7};

    Show(d1);
    Show(d2);
    // Swap(d1, d2, Lim);
    cout << "Now arrays: \n";
    Show(d2);
    Show(d1);
}

template <typename T>
void Swap(T& a, T& b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n) {
    T temp;
    for (int i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[]) {
    for (int i = 0; i < Lim; i++)
        cout << a[i] << " ";
    cout << endl;
}