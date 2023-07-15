#include <iostream>
#include <string>
#include "file.hpp"

using namespace std;

const int SIZE = 5;

void display(const string sa[], int n);

int main() {
    string list[SIZE];
    cout << "Name you " << SIZE << " favorite sky color: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << " : ";
        getline(cin, list[i]);
    }

    Display display;
    display.show(list, SIZE);
}

void display(const string sa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " : " << sa[i] << " ";
    }
    cout << endl;
}
