#include <iostream>
#include "../13.1/tabtenn0.h"

using namespace std;

int main() {
    TableTennisPlayer player1("Wang", "Nan", true);
    TableTennisPlayer player2("Deng", "Yaping", false);

    player1.Name();
    if (player1.HasTable())
        cout << " : has a ping pong table.\n";
    else
        cout << " : hasn't ping pong table.\n";

    player2.Name();
    if (player2.HasTable())
        cout << " : has a ping pong table.\n";
    else
        cout << " : hasn't ping pong table.\n";
    
    return 1;
}