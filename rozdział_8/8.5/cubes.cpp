#include <iostream>
using namespace std;

double cube(double a);
double refCube(double& ra);

int main() {
    double x = 3.0;
    cout << cube(x);
    cout << "= cube " << x << endl;

    cout << refCube(x);
    cout << " = cube " << x << endl;
    return 0;
}

double cube(double a) {
    a *= a * a;
    return a;
}
double refCube(double& ra) {
    ra *= ra * ra;
    return ra;
}