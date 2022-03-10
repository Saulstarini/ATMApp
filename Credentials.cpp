#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Credentials
{
public:
	string username;
	string password;

	vector<string> usernames = { "test" };
	vector<string> passwords = { "test" };

	//login
	void loginUser()
	{
		int i;

		cout << "Enter your username: ";
		cin >> username;
		cout << "Enter your password: ";
		cin >> password;

		//check the entered username & password
		for (i = 0; i < 5; i++)
		{
			string checkUsername = usernames[i];
			if (checkUsername == username)
			{
				cout << "Username found" << endl;
				break;
			}
		}

		for (i = 0; i < 5; i++)
		{
			string checkPassword = passwords[i];
			if (checkPassword == password)
			{
				cout << "Password correct" << endl;
				break;
			}
		}
	}

	//register
	void registerUser()
	{
		cout << "Enter your new username: ";
		cin >> username;
		cout << "Enter your new password: ";
		cin >> password;

		//add new credentials to arrays
		//add username
		usernames.push_back(username);

		//add password
		passwords.push_back(password); 

	}
};

