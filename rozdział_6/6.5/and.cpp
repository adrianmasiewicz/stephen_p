#include <iostream>
using namespace std;

const int ArSize = 6;

int main() {
    float naaq[ArSize];
    cout << "Enter the susceptibility coefficient value of your neighbors." << endl;
    cout << "Program operation will end after: " << ArSize << " values are entered."<<endl;

    int i = 0;
    float temp;
    cout << "The First value: ";
    cin >> temp;

    while (i < ArSize && temp >= 0) {
        naaq[i] = temp;
        ++i;
        if (i < ArSize) {
            cout << "Next value: ";
            cin >> temp;
        }
    }

    if (i == 0) {
        cout << "No data ! By ..." << endl;
    } else {
        float you;
        cout << "Enter your susceptibility coefficient value: ";
        cin >> you;

        int count = 0;
        for (int j = 0; j < i; j++) {
            if (naaq[j] > you) {
                ++count;
            }
        }
        cout << count;
        cout << " of your neighbors are more susceptible than you." << endl;
    }
    return 0;
}