#include <iostream>
using namespace std;

struct travel_time {
    int hours;
    int mins;
};

const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main() {
    travel_time day_1 = {5, 45};
    travel_time day_2 = {4, 55};
    travel_time trip = sum(day_1, day_2);

    cout << "The sum of the two days is: ";
    show_time(trip);

    travel_time day_3 = {0, 140};
    cout << "The sum of three days is: ";
    show_time(sum(trip, day_3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2) {
    travel_time total;
    total.mins = t1.mins + t2.mins;
    total.hours = t1.hours + t2.hours;
    while (total.mins >= 60) {
        total.mins -= 60;
        total.hours++;
    }
    return total;
}

void show_time(travel_time t) {
    cout << t.hours << " hours, " << t.mins << " mins." << endl;
}