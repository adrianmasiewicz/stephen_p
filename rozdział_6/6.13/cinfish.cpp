#include <iostream>
using namespace std;

const int Max = 5;

int main() {
    double fish[Max];
    int i = 0;
    cout << "Please enter the weight in you fish. \n"
         << "maximum of " << Max << " fish can be given.\n";
    cout << "Fish 1: ";
    while (i < Max && cin >> fish[i]) {
        if (++i < Max) {
            cin.clear();
            cout << "fish " << i + 1 << ": ";
        }
    }

    double total = 0.0;
    for (int j = 0; j < i; j++) {
        total += fish[j];
    }
    if (i == 0)
        cout << "There are no fish!" << endl;
    else
        cout << total / i << " = average weight " << i << " fish\n";
    cout << "Finished\n";

    return 0;
}