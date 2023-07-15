#include <iostream>
#include "../11.7/mytime2.h"

using namespace std;

int main(){
    Time weeding(4,35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout <<"Wedding time = ";
    weeding.show();
    cout <<"waxing time = ";
    waxing.show();
    cout <<"Total time = ";
    total = weeding + waxing;
    total.show();
    diff = weeding - waxing;
    cout <<"weeding time - waxing time = ";
    diff.show();
    adjusted = total * 1,5;
    cout << "Total time with pause = ";
    adjusted.show();
}