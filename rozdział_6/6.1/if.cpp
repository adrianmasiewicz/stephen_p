#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while(ch != '.'){
        if (ch == ' '){
            ++spaces;
        }
        ++total;
    cin.get(ch);
    }
    cout << "In the sentence is: "<<spaces<<" spaces, and there are :"<<total<<" characters in total.\n";
    return 0;
}