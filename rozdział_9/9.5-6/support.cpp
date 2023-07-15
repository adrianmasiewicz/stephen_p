#include <iostream>
using namespace std;

//extern double warming;
static double warming = 0.3;

void update(double dt);
void local();

void update(double dt) {
    extern double warming;
    warming += dt;
    cout << "Increase the thermal insulation parameter to: " << warming << " degrees\n";
}
void local() {
    double warming = 0.8;
    cout << "local warming is : " << warming << " degrees\n";
    cout << "but global warming is: "<<::warming<< " degrees\n";
}
