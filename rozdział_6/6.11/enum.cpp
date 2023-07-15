#include <iostream>
using namespace std;

enum { red,
       green,
       blue,
       yellow,
       pink,
       white,
       black,
       orange,
       violet,
       indigo };

int main() {
    int color;
    cout << "Enter the color code (0-6): ";
    cin >> color;

    while (color >= red && color <= black) {
        switch (color) {
        case red:
            cout << "Her lips were red." << endl;
            break;
        case green:
            cout << "Her nails were green." << endl;
            break;
        case blue:
            cout << "Her clothes were blue." << endl;
            break;
        case yellow:
            cout << "Her shoes were yellow." << endl;
            break;
        case pink:
            cout << "Her watch was pink." << endl;
            break;
        case white:
            cout << "Her scarf was white." << endl;
            break;
        case black:
            cout << "Her heirs was black." << endl;
            break;
        }
        cout << "Enter the color code (0-6): ";
        cin >> color;
    }
    cout << endl
         << "Goodbye!" << endl;
}