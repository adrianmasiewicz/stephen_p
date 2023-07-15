#include <iostream>
#include "../10.4/stock10.h"

int main() {
    using namespace std;
    {
        Stock stock1("NanoSmart", 20, 12.5); // inicjalizacja (bardziej efektywne)
        stock1.show();
        Stock stock2 = Stock("Beetroot", 2, 2.0); // przypisanie (mniej efektywne)
        stock2.show();

        stock2 = stock1;
        stock1.show();
        stock2.show();

        stock1 = Stock("FuPOL", 10, 50.0);
        stock1.show();
        std::cout << "Finished!\n";
    }
    return 0;
}