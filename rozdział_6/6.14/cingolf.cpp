#include <iostream>
using namespace std;

const int Max = 5;

int main() {
    int golf[Max];
    cout << "Pleas enter your golf scores: \n"
         << "You must enter " << Max << "games.\n";
    int i;
    for (i = 0; i < Max; i++) {
        cout <<"turn "<<i+1<<": ";
        while(!(cin>>golf[i])){
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout <<"Pleas enter the number: ";
        }
    }
    double total = 0.0;
    for (i =0;i< Max;i++){
        total += golf[i];
    }
    cout << total/ i <<" average scores from "<<i<< " games\n";
    cout << "Finished!\n";
    
}