#include "namesp.h"
#include <iostream>

namespace pers {
using std::cin;
using std::cout;
void getPerson(Person& rp) {
    cout << "Enter first name: ";
    cin >> rp.fName;
    cout << "Enter last name: ";
    cin >> rp.lName;
}

void showPerson(const Person& rp) {
    cout << rp.lName << ", " << rp.fName;
}
}  // namespace pers

namespace debts {
using std::cin;
using std::cout;
using std::endl;
void getDebt(Debt& rd) {
    getPerson(rd.name);
    cout << "Enter the price: ";
    cin >> rd.amount;
}
void showDebt(const Debt& rd) {
    showPerson(rd.name);
    cout << ": ";
    cout << rd.amount;
    cout << " PLN" << endl;
}

double sumDebts(const Debt ar[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += ar[i].amount;
    }
    return total;
}
}  // namespace debts