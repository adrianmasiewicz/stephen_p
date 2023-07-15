#include <iostream>
using namespace std;

double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

int main() {
    int code;

    cout << "How many lines of code should be written?";
    cin >> code;
    cout << "Estimate Betsy:\n";
    estimate(code, betsy);
    cout << "Estimate Pam:\n";
    estimate(code, pam);
    return 0;
}

double betsy(int lns) {
    return 0.05 * lns;
}

double pam(int lns) {
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int)) {
    cout << lines << " lines are required "
         << (*pf)(lines) <<" hours of work.\n";
}