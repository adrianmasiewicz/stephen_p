#include <iostream>

using namespace std;

const int Cities = 5;
const int Years = 4;

int main() {
    const char* cities[Cities] =
        {
            "Warszawa",
            "MiatoRadom",
            "Poznań",
            "Kraków",
            "Szczecin"};

    int maxtemps[Years][Cities] =
        {
            {32, 21, 14, 23, 21},
            {23, 12, 14, 14, 42},
            {12, 34, 13, 24, 42},
            {25, 25, 26, 15, 12}};

    cout << "maximum temperatures in years 2008-2011 : \n\n";
    for (int city = 0; city < Cities; ++city) {
        cout << cities[city] << " :\t";
        for (int year = 0; year < Years; ++year) {
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }
    cin.get();
}