#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main() {
    double total, choices;
    cout << "Enter the highest number you can choose "
         << "and the number of deletions:\n";

    while ((cin >> total >> choices) && choices <= total) {
        cout << "The chance of winning is 1 in ";
        cout << probability(total, choices) << ".\n";
        cout << "Then two number: ";
    }

    cout << "Goodbye!\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n=numbers, p = picks; p>0; n--, p--)
        result = result * n/p;
    
    return result;
}