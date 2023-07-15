#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../12.4/string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    String name;
    cout << "Hey! What's your name?\n";
    cin >> name;

    cout << "\t" << name << endl;
    cout << "Write to " << ArSize << " different sayings\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for (i = 0; i < ArSize; i++) {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n') {
            continue;
        }

        if (!cin || temp[0] == '\0') {
            break;
        } else {
            sayings[i] = temp;
        }
    }

    int total = i;
    if (total > 0) {
        cout << "Your sayings: ";
        for (i = 0; i < total; i++) {
            cout << sayings[i] << endl;
        }

        String* shortest = &sayings[0];
        String* first = &sayings[0];
        for (i = 1; i < total; i++) {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)
                first = &sayings[i];
        }

        cout << "The shortest sayings: " << *shortest << endl;
        cout << "first sentence alphabetically: " << *first << endl;

        srand(time(0));
        int choice = rand() % total;
        String* favorite = new String(sayings[choice]);
        cout << "My favorite sayings is : " << *favorite << endl;
        delete favorite;
    } else {
        cout << "No data!\n";
    }
    cout <<"Bay Bay!\n";
}
