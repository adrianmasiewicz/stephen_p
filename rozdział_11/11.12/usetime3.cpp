#include <iostream>
#include "../11.10/mytime3.h"

int main() {
    using namespace std;
    Time aida(3, 25);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida i Tosca:\n";
    cout << aida << ", " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca = " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17 = " << temp << endl;
    cout << "10 * Tosca = " << 10 * tosca << endl;
}