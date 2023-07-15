#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Write and I will repeat.\n";
    cin.get(ch);

    while (ch != '.') {
        if (ch == ' ' || ch =='\n')
            cout << ch;
        else
            cout << ch + 1;
        cin.get(ch);
    }
}