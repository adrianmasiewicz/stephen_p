#include <iostream>
using namespace std;

int tom = 3;
int dick = 20;
static int harry = 300;

void remote_access();

int main() {
    cout << "Function main() returns the following addresses: \n";
    cout << "&tom = " << &tom << ", &dick = " << &dick << ", &harry = " << &harry << endl;
    remote_access();
    return 0;
}