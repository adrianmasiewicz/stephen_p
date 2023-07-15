#include <iostream>
using namespace std;

void oil(int x);
void show(int d);

int main() {
    int texas = 31;
    int year = 2011;
    cout << "In function main() texas = " << texas;
    cout << " | &texas = " << &texas << endl;
    cout << "In function main() year = " << year;
    cout << " | &year = " << &year << endl;
    oil(texas);
    return 0;
}

void oil(int x) {
    int texas = 5;
    cout << "In function oil() texas = " << texas;
    cout << " | &texas = " << &texas << endl;
    cout << "In function oil x = " << x;
    cout << " | &x = " << &x << endl;
    {
        int texas = 113;
        cout << "Inside the block texas = " << texas;
        cout << " | &texas = " << &texas << endl;
        cout << "Inside the block x = " << x;
        cout << " | &x = " << &x << endl;
    }
}
