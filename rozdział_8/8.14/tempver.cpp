#include <iostream>
using namespace std;

template <typename T>
void showArray(T arr[], int n);

template <typename T>
void showArray(T* arr[], int n);

struct debts {
    char name[50];
    double amount;
};

int main() {
    int things[6] = {13, 653, 86, 348, 36, 4};
    struct debts mr_E[3] =
        {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe", 1300.0},
            {"Iby Stout", 1800.0}};
    double* pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Enumerating thins Mr.E: \n";
    showArray(things, 6);

    cout << "Enumerating the debs Mr.E \n";
    showArray(pd, 3);
}

template <typename T>
void showArray(T arr[], int n) {
    cout << "Template A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
void showArray(T* arr[], int n) {
    cout << "Template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ' ;
    cout << endl;
}