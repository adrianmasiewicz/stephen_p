#include <iostream>
#include "namesp.h"

void other(void);
void another(void);
int main(void) {
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {{"Jacek", "Nowak"}, 120.0};
    showDebt(golf);
    other();
    another();

    return 0;
}

void other(void) {
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Daria", "Kowal"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];

    for (int i = 0; i < 3; i++)
        getDebt(zippy[i]);
    for (int i = 0; i < 3; i++)
        showDebt(zippy[i]);
    cout << "The total amount of: "<<sumDebts(zippy, 3) <<" PLN"<< endl;
    return;
}

void another(void){
    using pers::Person;

    Person collector = {"Zibi", "Pomidor"};
    pers::showPerson(collector);
    std::cout << std::endl;
}