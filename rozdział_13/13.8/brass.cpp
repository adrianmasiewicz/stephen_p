#include "../13.7/brass.h"
#include <iostream>

using namespace std;

typedef ios_base::fmtflags format;
typedef streamsize precis;
format setFormat();

void restore(format f, precis p);

Brass::Brass(const string& s, long an, double bal) {
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt) {
    if (amt < 0)
        cout << "Negative amount cannot be deposit!";
    else
        balance += amt;
}

void Brass::Withdraw(double amt) {
    format initialState = setFormat();
    precis prec = cout.precision(2);
    if (amt < 0)
        cout << "Negative amount cannot be withdraw!";
    else if (amt <= balance)
        balance += amt;
    else
        cout << "Insufficient funds!";
    restore(initialState, prec);
}

double Brass::Balance() const {
    return balance;
}

void Brass::ViewAcct() const {
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Customer: " << fullName << endl;
    cout << "Account number: " << acctNum << endl;
    cout << "Account balance: " << balance << " zł" << endl;
    restore(initialState, prec);
}

BrassPlus::BrassPlus(const string& s,
                     long an,
                     double bal,
                     double ml,
                     double r)
    : Brass(s, an, bal) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass& ba, double ml, double r)
    : Brass(ba) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct();
    cout << "Overdraft limit: " << maxLoan << " zł" << endl;
    cout << "Amount of debt: " << owesBank << " zł" << endl;
    cout.precision(3);
    cout << "Interest date: " << 100 * rate << "%" << endl;
    restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt) {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank) {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Actual debt is: " << advance * rate << " zł" << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout <<"Overdraw limit exceeded!\n";
    restore(initialState, prec);
}

format setFormat()
{
    return cout.setf(ios_base::fixed, ios_base::floatfield);
}

void restore(format f, precis p){
    cout.setf(f, ios_base::floatfield);
    cout.precision(p);
}

