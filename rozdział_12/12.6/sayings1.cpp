#include <iostream>
#include "../12.4/string1.h"

const int ArSize = 10;
const int MaxLen = 18;

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    String name;
    cout << "Hey! What's your name?\n";
    cin >> name;

    cout << "\t" << name << endl;
    cout << "Write to " << ArSize << " different sentences";
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
        cout << "Yours sentences: \n";
        for (i = 0; i < total; i++) {
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }
        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++) {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "The shortest sentence: " << sayings[shortest] << endl;
        cout << "first sentence alphabetically: " << sayings[first] << endl;
        cout << "The program used: " << String::HowMany() << " objects class String\n";

    } else {
        cout << "No data!\n";
    }

    return 0;
}