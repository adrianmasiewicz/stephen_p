#include <iostream>
using namespace std;

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access(){
    cout << "Function remote_access() return following addresses: \n";
    cout << "&tom = " << &tom << ", &dick = " << &dick << ", &harry = " << &harry << endl;
}