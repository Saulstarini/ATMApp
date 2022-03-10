#include <iostream>
using namespace std;

class Actions
{
public:
	
	void Deposit()
	{
		double amount;

		cout << "Enter the deposit amount >" << endl;
		cout << "amount: ";
		cin >> amount;

	}

	void Withdraw()
	{
		double amount;
		cout << "Enter the withdraw amount >" << endl;
		cout << "amount: ";
		cin >> amount;
	}

	void checkBalance()
	{

	}
};