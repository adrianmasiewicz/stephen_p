#include <iostream>
using namespace std;

struct antartica
{
    int year;
};


int main()
{
    antartica s1, s2, s3;
    s1.year = 1998;
    antartica * pa = &s2;
    pa->year = 1999;
    antartica trio[3];
    trio[0].year = 2003;
    cout << trio[0].year <<endl;
    cout << trio->year <<endl;
    const antartica * arp[3] = {&s1, &s2, &s3};
    cout << arp[1]->year<<endl;
    const antartica ** ppa = arp;
    
    cout << ppa[0]->year<<endl;
    cout << (*ppa)->year <<endl;
    cout << ((*ppa)+1)->year<<endl;
    
    cout << endl;
}