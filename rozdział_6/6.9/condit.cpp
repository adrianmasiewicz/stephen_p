#include <iostream>

using namespace std;

int main()
{
    int first, second, third;
    cout <<"Enter two integers: ";
    cin >> first >> second;
    cout << "The greater of the number is: ";
    third = first > second ? first : second;
    cout << third <<endl;


}