#include <iostream>
#include "../10.1/stock00.h"

int main(){
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15,18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20);
    fluffy_the_cat.show();
}