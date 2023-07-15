#include <iostream>
#include "../11.16/stonewt.h"

using std::cout;

void display(const StoneWt& st, int n);
int main() {
    StoneWt incognito = 275;
    StoneWt wolfe(285.7);
    StoneWt taft(21, 8);

    cout << "Celebrity weighted: ";
    incognito.show_stn();
    cout << "Detective weighted: ";
    wolfe.show_stn();
    cout << "President weighted: ";
    taft.show_lbs();

    incognito = 276.8;
    cout << "After the dinner celebrity weighted: ";
    incognito.show_stn();

    taft = 325;
    cout << "After the dinner President weighted: ";
    taft.show_stn();

    display(taft, 2);
    cout << "The wrestler weighted: ";
    display(437, 2);

    cout << "\n";

}

void display(const StoneWt& st, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Oho! ";
        st.show_stn();
    }
}