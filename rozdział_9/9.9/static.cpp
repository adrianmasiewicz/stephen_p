#include <iostream>
using namespace std;

const int ArSize = 10;

void strCount(const char* str);

int main() {
    char input[ArSize];
    char next;

    cout << "Enter the line: ";
    cin.get(input, ArSize);

    while (cin) {
        cin.get(next);
        while (next != '\n')
            cin.get(next);
        strCount(input);
        cout << "Enter the next line: ";
        cin.get(input, ArSize);
    }
    cout << "The end!\n";
    return 0;
}

void strCount(const char* str) {
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    while (*str++)
        count++;
    total += count;
    cout << count << "characters\n";
    cout << "Together " << total << "characters\n";
}