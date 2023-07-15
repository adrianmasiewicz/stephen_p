#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int other = 0;

    cout << "Provide the text for analysis. End it by typing the @ sing." << endl;
    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            other++;
        cin.get(ch);
    }

    cout << chars << " chars\n";
    cout << whitespace <<" whitespace\n";
    cout << digits << " digits\n";
    cout << punct << " punct\n";
    cout << other << " other\n";

    return 0;
}