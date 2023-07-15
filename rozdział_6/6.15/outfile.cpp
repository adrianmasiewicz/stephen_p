#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("car_info.txt");

    cout << "Pleas enter the make and model of the car: ";
    cin.getline(automobile, 50);
    cout << "Pleas enter the year of production: ";
    cin >> year;
    cout << "Please provide the starting price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "The make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Starting price: " << a_price << endl;
    cout << "Current price: " << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "The make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Starting price: " << a_price << endl;
    outFile << "Current price: " << d_price << endl;

    outFile.close();
    return 0;
}