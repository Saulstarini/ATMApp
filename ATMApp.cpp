#include <iostream>
#include <string>
#include <vector>

#include "Credentials.cpp";
#include "Actions.cpp";
using namespace std;

void mainMenu()
{
	Actions a;

	int action;

	cout << "Select your action >" << endl;
	cout << "1. Deposit" << endl;
	cout << "2. Withdraw" << endl;
	cout << "3. Check Balance" << endl;
	cout << "4. Log out" << endl;
	cout << "action: ";
	cin >> action;

	switch (action)
	{
	case 1:
		a.Deposit();
		break;
	case 2:
		a.Withdraw();
		break;
	case 3:
		a.checkBalance();
		break;
	}
}



int main()
{
	Credentials cred;

	int action;

	cout << "Please select action" << endl;
	cout << "> 1. Login" << endl;
	cout << "> 2. Register" << endl;
	cout << "action: ";
	cin >> action;

	if (action == 1)
	{
		cred.loginUser();
		mainMenu();
	} else if (action == 2)
	{
		cred.registerUser();
		main();
	}
	else 
	{
		cout << "Wrong input. Please try again" << endl;
		main();
	}

	return 0;
}