#include <iostream>
using namespace std;

int main() {
    cout << "The program formats the disk. Do you continue?";
    char ch;
    cin >> ch;

    if (ch == 't' || ch == 'T')
        cout << "I warned you!" << endl;
    else if (ch == 'n' || ch == 'N')
        cout << "Very wise!" << endl;
    else
        cout << "No matching letter selected! \a\a\a\a\n";

    return 0;
}