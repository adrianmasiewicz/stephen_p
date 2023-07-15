#include <array>
#include <iostream>
using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"spring", "summer", "fall", "winter"};

void fill(array<double, Seasons> * pa);
void show(array<double, Seasons> da);

int main(){
    array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(array<double, Seasons> * pa){
    for(int i = 0; i<Seasons; i++){
        cout <<"Enter expenses for the period "<<Snames[i]<<" : ";
        cin >>(*pa)[i];
    }
}

void show(array<double, Seasons> da){
    double total = 0.0;
    cout <<"\nEXPENSES\n";
    for (int i = 0;i<Seasons;i++){
        cout <<Snames[i]<<": "<<da[i]<<" PLN"<<endl;
        total = total + da[i];
    }
    cout << "Total expenses :"<<total<<" PLN"<<endl;
}