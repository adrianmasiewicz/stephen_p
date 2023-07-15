#include <iostream>
#include "../10.7/stock20.h"

const int STKS = 4;
int main(){
    Stock stocks[STKS] = {
        Stock("cauliflower", 12, 20.0),
        Stock("beetroot", 200, 2.0),
        Stock("eggplant", 130, 3.25),
        Stock("celery", 60, 6.5)
    };

    int st;
    for (st = 0; st < STKS; st++){
        stocks[st].show();
        std::cout << std::endl;
    }
    
    const Stock * top = &stocks[0];
    for(st = 0; st < STKS; st++){
        top = &top->topVal(stocks[st]);
    }

    std::cout << "The most valuable package: \n";
    top->show();
}