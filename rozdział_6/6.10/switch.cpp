#include <iostream>
using namespace std;

void show_menu();
void report();
void comfort();

int main() {
    show_menu();
    int choice;
    cin >> choice;
    while (choice != 5) {
        switch (choice) {
        case 1:
            cout << "\a\n";
            break;
        case 2:
            report();
            break;
        case 3:
            cout << "The boss did not go anywhere.";
            break;
        case 4: 
            comfort();
            break;
        default:
            cout << "No way";
        }
        show_menu();
        cin >> choice;
    }
    cout << "See you!";
}

void show_menu() {
    cout << "Choose the number 1,2,3,4 or 5:\n";
    cout << "1) Alarm\t 2)Report\t 3)Alibi\t 4)Looser\t 5)End\n";
}
void report() {
    cout <<"Sales increased by 120%, expenses decreased by 35%";
}
void comfort() {
    cout << "Employees recognized you as the best director.";
}