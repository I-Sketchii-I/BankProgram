#include "pch.h"
#include <iostream>

using namespace std;

void normalCheck(int x, int y);
void hackCheck(int& x, int& y);

int main()
{
	int myBalance = 1337;
	int otherBalance = 4562;
	int myFunds = 100;
	int otherFunds = 100;

	cout << "Account 1 Balance: " << myBalance;
	cout << "\nAccount 1 Funds: " << myFunds;
	cout << "\nAccount 2 Balance: " << otherBalance;
	cout << "\nAccount2 Funds: " << otherFunds;

	myBalance += myFunds;
	otherBalance += otherFunds;

	normalCheck(myBalance, otherBalance);
	cout << "\n\nAccount 1 Balance: " << myBalance;
	cout << "\nAccount 2 Balance: " << otherBalance;

	hackCheck(myBalance, otherBalance);
	cout << "\nAccount 1 Balance: " << myBalance;
	cout << "\nAccount 2 Balance: " << otherBalance;
	cout << "\n";
	system("pause");

	return 0;
}

void normalCheck(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void hackCheck(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}