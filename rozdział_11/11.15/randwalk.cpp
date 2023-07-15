#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../11.13/vect.h"

using namespace std;

int main() {
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dStep;
    cout << "Enter the distance to go (press 'k' to exit):";
    while (cin >> target) {
        cout << "Enter a stride length: ";
        if (!(cin >> dStep))
            break;

        while (result.magVal() < target) {
            direction = rand() % 360;
            step.reset(dStep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " step the culprit had reached his position:\n";
        cout << result << endl;
        result.polar_mode();
        cout << "That is\n"
             << result << endl;
        cout << "mean length f the apparent step = ";
        cout << result.magVal() / steps << endl;
        steps = 0;
        result.reset(0.0,0.0);
        cout << "Enter the distance to go (press 'k' to exit): ";
    }
    cout << "Finished!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}