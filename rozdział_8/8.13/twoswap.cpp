#include <iostream>
using namespace std;



template <typename T>
void Swap(T& a, T& b);

struct job {
    char name[40];
    double salary;
    int floor;
};
void Show(job& j);

template <>
void Swap<job>(job& j1, job& j2);


int main() {
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10;
    int j = 20;
    cout << "i = "<<i<<", j = "<<j<<endl;
    cout << "changing function! \n";
    Swap(i,j);
    cout << "Now :\n";
    cout << "i = "<<i<<", j = "<<j<<endl;

    cout <<"\n";
    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 53054.99, 9};
    Show (sue);
    Show (sidney);
    cout << "changing function!\n";
    Swap (sue, sidney);
    cout << "Now :\n";
    Show (sue);
    Show (sidney);
    
    return 0;
}

template <typename T>
void Swap(T& a, T& b) {
    T temp;
    temp = a;
    b = a;
    a = temp;
}

template <>
void Swap(job& j1, job& j2) {
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job& j) {
    cout << j.name << " : " << j.salary << "PLN, on the floor " << j.floor << endl;
}