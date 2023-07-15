#include <iostream>

using namespace std;
const int Fave = 27;

int main() {
    using namespace std;
    int n;

    cout << "Look for my favorite number. ";
    cout << "Ranges form 1 - 100." << endl;

    do {
        cin >> n;
        if (n < Fave) {
            cout << "Not enough";
        } else if (n > Fave) {
            cout << "More than enough";
        } else {
            cout << "This is the number!";
        }
    } while (n != Fave);
    return 0;
}