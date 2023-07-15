#include <iostream>
#include "../11.4/mytime1.h"
int main() {
    using std::cout;
    using std::endl;

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.show();
    
    cout << "coding time = ";
    coding.show();
    
    cout << "fixing time = ";
    fixing.show();
    
    total = coding + fixing;
    cout << "together (coding + fixing) = ";
    total.show();
    
    Time moreFixing(3, 28);
    cout << "Next fixes = ";
    total = moreFixing.operator+(total);
    cout << "together (moreFixing.operator+(total)) = ";
    total.show();
}