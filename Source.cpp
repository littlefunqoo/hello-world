#include <iostream>

using namespace std;

int passwordinput;
int actualpassword = 4;
int securitybreachnumber = 50;
int x;

int main()
{
	cout << "To view the stored information, you must type in the password below.\n";
	cin >> passwordinput;
	if (passwordinput == actualpassword)
	{
		cout << "Loading information. Please come back in one hour.\n";
		cout << "actualpassword == " << actualpassword;
		cout << "\nsecuritybreachnumber == " << securitybreachnumber;
		cout << "\npasswordinput == " << passwordinput;
		cin.get();
	}
	else while (securitybreachnumber <= 100)
	{
		//x = x+3;
		cout << " " << x + 3 << " ";
	}
	cin.get();
}