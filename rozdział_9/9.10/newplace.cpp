#include <iostream>
#include <new>
using namespace std;

const int BUF = 512;
const int N = 5;

char buffer[BUF];

int main() {
    double *pd1, *pd2;
    int i;
    cout << "Calling new regular and local: \n";
    pd1 = new double[N];
    pd2 = new (buffer) double[N];
    for (int i = 0; i < N; i++) {
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    }
    cout << "Memory addresses: \n";
    cout << "Heap: " << pd1 << " static memory: " << (void*)buffer << endl;
    cout << "Memory contents:\n";
    for (int i = 0; i < N; i++) {
        cout << pd1[i] << " at the address: " << &pd1[i] << "; ";
        cout << pd2[i] << " at the address: " << &pd2[i] << "\n";
    }

    cout << "\nSecond calling regular and local new: \n";
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N];
    for (i = 0; i < N; i++) {
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    }
    cout << "Memory contents:\n";
    for (int i = 0; i < N; i++) {
        cout << pd3[i] << " at the address: " << &pd3[i] << "; ";
        cout << pd4[i] << " at the address: " << &pd4[i] << "\n";
    }

    cout << "Third calling regular and local new: \n";
    delete[] pd1;
    pd1 = new double[N];
    pd2 = new (buffer) double[N];
    for (int i = 0; i < N; i++) {
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    }
    cout << "Memory contents:\n";
    for (int i = 0; i < N; i++) {
        cout << pd1[i] << " at the address: " << &pd1[i] << "; ";
        cout << pd2[i] << " at the address: " << &pd2[i] << "\n";
    }
    delete [] pd1;
    delete [] pd3;

    return 0;
}