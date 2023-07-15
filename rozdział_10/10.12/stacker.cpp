#include <cctype>
#include <iostream>
#include "../10.10/stack.h"
using namespace std;

int main() {
    Stack st;
    char ch;
    unsigned long po;
    cout << "Press pusher D to enter declarations.\n";
    cout << "Press pusher P to aborted declarations.\n";
    cout << "Press pusher K to exit the program.\n";

    while (cin >> ch && toupper(ch) != 'K') {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch (ch) {
        case 'D':
        case 'd':
            cout << "Enter the number of the new declarations: ";
            cin >> po;
            if (st.isFull())
                cout << "Stack is full!\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isEmpty())
                cout << "Stack is empty!\n";
            else {
                st.pop(po);
                cout << "Declarations number: " << po << " removed.";
            }
            break;
        }
        cout << "Press pusher D to enter declarations.\n";
        cout << "Press pusher P to aborted declarations.\n";
        cout << "Press pusher K to exit the program.\n";
    }
    cout << "Finished!\n";
    return 0;
}