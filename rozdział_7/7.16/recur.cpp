#include <iostream>
using namespace std;

void countdown(int n);

int main() {
    countdown(5);
}

void countdown(int n) {
    if (n > 0) {
        cout << "countdown... " << n << endl;
        countdown(n - 1);
    }
    cout << "Jeb!"<<endl;
}