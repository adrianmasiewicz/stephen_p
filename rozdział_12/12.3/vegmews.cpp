#include <iostream>
#include "../12.1/stringbad.h"

using std::cout;
using std::endl;

void callMe1(StringBad&);
void callMe2(StringBad);

int main() {
    {
        cout << "We start the inner block." << endl;

        StringBad headLine1("The signing of the lark - new verses make you fall asleep?");
        StringBad headLine2("Death to roosters!");
        StringBad sports("The club falls out of the league! Judging scandal.");

        cout << "Breaking news: " << headLine1 << endl;
        cout << "Topic of the day: " << headLine2 << endl;
        cout << "Sport news: " << sports << endl;

        callMe1(headLine1);
        cout << "Breaking news: " << headLine1 << endl;
        callMe2(headLine2);
        cout << "Topic of the day: " << headLine2 << endl;

        cout << "Initialization...\n";
        StringBad sailor = sports;
        cout << "Country news: " << sailor << endl;

        cout << "Assignment...\n";
        StringBad knot;
        knot = headLine1;
        cout << "World news: " << knot << endl;

        cout << "We finished the inner block." << endl;
    }
    cout << "Finish main.\n";
    return 0;
}

void callMe1(StringBad& rsb){
    cout << "Object passed by reference:\n";
    cout << "    \""<<rsb<<"\""<<endl;
}
void callMe2(StringBad rsb){
    cout << "Object passed by value:\n";
    cout << "    \""<<rsb<<"\""<<endl;
}