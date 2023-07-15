#include <iostream>
using namespace std;

unsigned int c_int_str(const char* str, char ch);

int main() {
    char text[] = "minimum";
    char *wail = text;

    unsigned int m_str = c_int_str(text, 'm');
    unsigned int u_str = c_int_str(wail, 'u');

    cout <<"There are: "<<m_str<<" character m in "<<text<<endl;
    cout <<"There are: "<<u_str<<" character u in "<<wail<<endl;
}

unsigned int c_int_str(const char* str, char ch) {
    unsigned int count = 0;
    while (*str) {
        if (*str == ch)
            count++;
        str++;
    }
    return count;
}