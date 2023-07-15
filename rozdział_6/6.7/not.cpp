#include <climits>
#include <iostream>
using namespace std;

bool is_int(double);

int main() {
    double number;

    cout << "Hej! Enter an integer: ";
    cin >> number;

    while (!is_int(number)) {
        cout << "Out of range! Keep trying: ";
        cin >> number;
    }
    int val = int(number);
    cout << "The given integers is: " << val << endl;
    return 0;
}

bool is_int(double value) {
    if (value <= INT_MAX && value >= INT_MIN) {
        return true;
    } else {
        return false;
    }
}