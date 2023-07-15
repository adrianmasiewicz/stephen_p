#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

const int size = 60;

int main() {
    char filenames[size];
    ifstream inFile;

    cout << "Enter the name of the data file: ";
    cin.getline(filenames, size);
    inFile.open(filenames);
    if (!inFile.is_open()) {
        cout << "Opening a file " << filenames << " filed!" << endl;
        cout << "The program will end." << endl;
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while (inFile.good()) {
        ++count;
        sum += value;
        inFile >> value;
    }

    if (inFile.eof())
        cout << "End of file" << endl;
    else if (inFile.fail())
        cout << "Date reading aborted - Error 1" << endl;
    else
        cout << "Date reading aborted - Error 2" << endl;

    if (count == 0)
        cout << "No data was processed." << endl;
    else {
        cout << "Loading items: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average of the number: " << sum / count << endl;
    }
    inFile.close();
    return 0;
}