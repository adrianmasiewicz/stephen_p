#include <iostream>
using namespace std;

int main()
{
    char ch;
    int ch1, ch2;
    ch1 = ch2 = 0;
    while((ch = cin.get() != '$'))
    {
        cout << ch;
        ch1++;
        if( ch = '$')
            ch2++;
        cout << ch;
    }
    cout << "++ ch1 = "<<ch1<<", ch2 = "<<ch2<<"++"<<endl;
    return 0;
}