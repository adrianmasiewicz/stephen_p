#include "../10.7/stock20.h"
#include <iostream>
#include <cstring>

Stock::Stock(){
    company = "no name";
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const std::string& co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "The number of shares can't be negative."
                  << " We set a new number of shares in " << company << " to 0./n";
        shares = 0;
    } else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock(){}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "The number of shares purchased can't be negative."
                  << " Transaction aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        std::cout << "The number of sell can't be negative."
                  << " Transaction aborted.\n";
    } else if (num > shares) {
        std::cout << "You can't sell more shares than you own."
                  << " Transaction aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price){
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using namespace std;

    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    streamsize prec = cout.precision(3);

    cout <<"Company: "<<company
    <<"\nThe number of shares: " << shares
    <<"\nPrice of shares: "<<share_val<< " PLN";
    
    cout.precision(2);
    cout <<"\nTotal value of shares: "<<total_val<<" PLN\n";

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock & Stock::topVal(const Stock & s) const{
    if(s.total_val > total_val)
        return s;
    else    
        return *this;
}

