#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

void file_it(ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main() {
    ofstream fout;
    const char* fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open()) {
        cout << "I can not open the: " << fn << ". Goodbye!\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length of the telescope in millimeters: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal (in millimeters): " << LIMIT << " of the telescope: ";
    for (int i = 0; i < LIMIT; i++) {
        cout << "Telescope nr " << i + 1 << ": ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Ready!\n";
}

void file_it(ostream& os, double fo, const double fe[], int n) {
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);
    os.precision(0);
    os << "Focal length of the lens: " << fo << " mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os << "f of the eyepiece";
    os.width(12);
    os << "Magnification" << endl;
    for (int i = 0; i < n; i++) {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int(fo / fe[i] + 0.5) << endl;
    }
    os.setf(initial);
}