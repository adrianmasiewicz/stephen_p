#include <iostream>
using namespace std;

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int limit);
void revalue(double r, double ar[], int limit);

int main() {
    double properties[Max];
    int size = fill_array(properties, Max);

    if(size > 0){
        cout <<"Enter the factor of change of the value: ";
        double factor;
        while(!(cin>> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout <<"Wrong value. Give my a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout <<"Finished!"<<endl;
    return 0;

}

int fill_array(double ar[], int limit) {
    double temporarily;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Enter a value of of " << (i + 1) << ": ";
        cin >> temporarily;
        if (!cin)  // incorrect data
        {
            cin.clear();
            while (cin.get() != '\n')
                ;
            continue;
            cout << "Incorrect data. Data input has been aborted." << endl;
            break;
        } else if (temporarily < 0) {
            break;
        }
        ar[i] = temporarily;
    }
    return i;
}
void show_array(const double ar[], int limit) {
    for (int i = 0; i < limit; i++) {
        cout << "Property numer " << (i + 1) << ": " << ar[i] << endl;
    }
}
void revalue(double r, double ar[], int limit) {
    for (int i = 0; i < limit; i++) {
        ar[i] *= r;
    }
}
