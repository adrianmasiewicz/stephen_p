#include <iostream>
#include "../11.19/stonewt1.h"

int main(){
    using std::cout;
    StoneWt poppins(9,2.8);

    double p_wt = poppins;
    cout << "conversion to type double = ";
    cout << "poppins: "<<p_wt<<" pound\n";

    cout << "conversion to type int = ";
    cout << "poppins: "<<int(poppins) <<" pound\n";
}