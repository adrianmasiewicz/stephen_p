#include <iostream>
using namespace std;

void swapR(int& a, int& b);
void swapP(int* p, int* q);
void swapV(int a, int b);

int main() {
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet 1 = " << wallet1 << "$\n";
    cout << "wallet 2 = " << wallet2 << "$\n";

    cout << "Changing the values with reference:\n";
    swapR(wallet1, wallet2);
    cout << "wallet 1 = " << wallet1 << "$\n";
    cout << "wallet 2 = " << wallet2 << "$\n";

    cout << "Changing the values with pointers:\n";
    swapP(&wallet1, &wallet2);
    cout << "wallet 1 = " << wallet1 << "$\n";
    cout << "wallet 2 = " << wallet2 << "$\n";

    cout << "Failed attempt to change value by copies:\n";
    swapV(wallet1, wallet2);
    cout << "wallet 1 = " << wallet1 << "$\n";
    cout << "wallet 2 = " << wallet2 << "$\n";

    return 0;
}

void swapR(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapP(int* p, int* q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void swapV(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
