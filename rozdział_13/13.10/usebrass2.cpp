#include <iostream>
#include <string>
#include "brass.h"
using namespace std;

const int CLIENTS = 4;
int main() {
	Brass* p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	char kind;

	for (int i = 0; i < CLIENTS;i++)
	{
		cout << "Enter your name: ";
		getline(cin, temp);
		cout << "Enter your bank account number: ";
		cin >> tempnum;
		cout << "Enter your initial account balance: ";
		cin >> tempbal;
		cout << "Enter one for brass account or two for brassPlus account: ";

		while (cin >> kind && (kind != '1' && kind != '2')) {
			cout << "Enter a number one or two: ";
		}

		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "Enter the overdraft limit: ";
			cin >> tmax;
			cout << "Enter the interest rate: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}

		while (cin.get() != '\n') {
			continue;
		}
			
	}

	cout << endl;
	for (int i = 0; i < CLIENTS;i++)
		{
			p_clients[i]->ViewAcct();
			cout << endl;
		}

	for (int i = 0; i < CLIENTS;i++)
	{
			delete p_clients[i];
	}
	cout << "Finished";
}
