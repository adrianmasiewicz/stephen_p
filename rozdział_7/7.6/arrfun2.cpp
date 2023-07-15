#include <iostream>
using namespace std;

const int ArSize = 8;

int sum_arr(int tab[], int n);

int main() {
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << "array address: " << cookies << endl;
    cout << "sizeof array: " << sizeof(cookies) << endl;
    int sum = sum_arr(cookies,ArSize);
    cout << "Cookies ware eaten: "<<sum<<endl;
    sum =  sum_arr(cookies,3);
    cout << "The first three people ate: "<<sum<<endl;
    sum = sum_arr(cookies+4,4);
    cout << "The last four people ate: "<<sum<<endl;
    return 0;
}

int sum_arr(int tab[], int n) {
    int total = 0;
    cout << "array address: " << tab << endl;
    //cout << "sizeof array:" << sizeof tab << endl;

    for (int i = 0; i < n; i++) {
        total += tab[i];
    }
    return total;
}