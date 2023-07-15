#include <iostream>
using namespace std;

char* build_str(char c, int n);

int main() {
    int times;
    char ch;

    cout << "Enter the sing: ";
    cin >> ch;
    cout << "Enter the integer: ";
    cin >> times;

    char* ps = build_str(ch, times);
    cout << ps << endl;

    delete[] ps;
    ps = build_str('+', 19);
    cout << ps << endl;
    delete[] ps;
    return 0;
}

char* build_str(char c, int n) {
    char* pstr = new char[n + 1];
    pstr[n] = '\n';
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}