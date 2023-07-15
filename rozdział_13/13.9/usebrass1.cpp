#include <iostream>
#include "../13.7/brass.h"

using namespace std;

int main(){
    Brass Piggy("Purple piggy", 323541,12000.00);
    BrassPlus Giraffe("Light yellow giraffe", 324252, 9000.00);
    Piggy.ViewAcct();
    cout <<endl;
    Giraffe.ViewAcct();
    cout << endl;
    cout << "Payment of 3000zł to Giraffe's account:\n";
    Giraffe.Deposit(3000.00);
    cout << "New account balance Giraffe's: "<<Giraffe.Balance()<<" zł"<<endl;
    cout << "Payment od 1260zł from Piggy's account:\n ";
    Piggy.Withdraw(1260);
    cout << "Account balance Piggy: "<<Piggy.Balance()<<" zł"<<endl;
}