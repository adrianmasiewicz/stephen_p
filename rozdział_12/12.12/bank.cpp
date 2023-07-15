#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../12.10/queue.h"

using namespace std;
const int MIN_PER_HR = 60;
bool newCustomer(double x);

int main() {
    srand(time(0));
    cout << "Case study: Hundred Cash Bank ATM\n";
    cout << "Enter the maximum queue length: ";
    int qs;
    cin >> qs;
    Queue line(qs);

    cout << "Enter simulate time in hours: ";
    int hours;
    cin >> hours;
    long cycleLimit = MIN_PER_HR * hours;

    cout << "Enter the average number customers per hour: ";
    double perHour;
    cin >> perHour;
    double min_per_customers;
    min_per_customers = MIN_PER_HR * hours;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sumLine = 0;
    long waitTime = 0;
    long lineWait = 0;

    for (int cycle = 0; cycle < cycleLimit; cycle++) {
        if (newCustomer(min_per_customers)) {
            if (line.isFull())
                turnaways++;
            else {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if (waitTime <= 0 && !line.isEmpty()) {
            line.dequeue(temp);
            waitTime = temp.ptime();
            lineWait += cycle - temp.when();
            served++;
        }
        if (waitTime > 0)
            waitTime--;
        sumLine += line.queueCount();
    }

    if (customers > 0) {
        cout << "number of customers accept: " << customers << endl;
        cout << "number of customers served: " << served << endl;
        cout << "number of customers referred: " << turnaways << endl;
        cout << "average queue length: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
        cout << (double)sumLine / cycleLimit << endl;
        cout << "average waiting time: ";
        cout << (double)lineWait / served << " minutes\n";
    } else
        cout << "No customers!\n";

    cout << "Ready!\n";
}

bool newCustomer(double x) {
    return (rand() * x / RAND_MAX < 1);
}