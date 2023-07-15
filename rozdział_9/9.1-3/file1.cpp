#include <iostream>
#include "coordin.h"
using namespace std;

int main() {
    rect rPlace;
    polar pPlace;

    cout << "Enter value x and y: ";
    while (cin >> rPlace.x >> rPlace.y) {
        pPlace = rect_to_polar(rPlace);
        show_polar(pPlace);
        cout << "Next coordinates: (exit 'q') ";
    }
    cout << "Already!\n";
}