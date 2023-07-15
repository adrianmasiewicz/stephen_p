#include <iostream>
using namespace std;

const char * qualify[4] = {
    "10 km run\n",
    "tug of war in the mud\n",
    "canoe champions duel\n",
    "cake tossing festival\n"
};

int main(){
    int age;
    int index;
    
    cout << "Please enter you age: ";
    cin >> age;

    if (age > 17 && age < 35){
        index = 0;
    }

    else if( age >= 35 && age < 50){
        index = 1;
    }
    else if( age >= 50 && age < 65){
        index = 2;
    }
    else {
        index = 3;
    }

    cout << "You are eligible for competition: "<<qualify[index];
}