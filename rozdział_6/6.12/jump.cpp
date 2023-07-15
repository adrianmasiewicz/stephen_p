#include <iostream>
using namespace std;

const int ArSize = 80;

int main() {
    char line[ArSize];
    int space = 0;

    
    cout << "Type a line of text:";
    cin.get(line, ArSize);
    cout << "The entire line: \n"
         << line << endl;
    cout << "Line up to the first period: " << endl;
    for (int i = 0; line[i] != '\0'; i++) {
        cout <<line[i];
        if(line[i] == '.')
            break;
        if (line[i] != ' ')
            continue;
        space++;
    }
    cout << endl << space <<" spaces. Finished!\n";
    return 0;
}