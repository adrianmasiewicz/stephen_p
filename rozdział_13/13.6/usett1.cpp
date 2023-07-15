#include <iostream>
#include "../13.4/tabtenn1.h"

using namespace std;

int main(){
    TableTennisPlayer player1("Wang", "Nan", true);
    RatedPlayer r_player1(1140, "Deng", "Yaping", false);
    r_player1.Name();
    if(r_player1.HasTable())
        cout << ": has ping pong table.\n";
    else 
        cout << ": han't ping pong table.\n";
    player1.Name();
    if(player1.HasTable())
        cout << ": has ping pong table.\n";
    else 
        cout << ": han't ping pong table.\n";
    cout << "First name and last name: ";
    r_player1.Name();
    cout << "Rating: "<<r_player1.Rating() << endl;
    RatedPlayer r_player2(1212, player1);
    cout << "First name and last name: ";
    r_player2.Name();
    cout << "Rating: "<<r_player2.Rating() << endl;
        
}