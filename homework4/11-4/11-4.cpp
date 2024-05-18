#include<iostream>
#include<string>
#include "Security.h"
#include "Administrator.h"
#include "User.h"
using namespace std;

int main(void) {
	string name, pw;   //user's name and password
	Security secu;     //declare Security object

	cout << "Enter user name:";
	cin >> name;   //input user's name

	cout << "Enter password:";
	cin >> pw;     //input password

	Administrator user1(name, pw);    //declare Administrator object and initialize
	User user2(name, pw);             //declare User object and initialize

	cout << endl;
	cout << "Authentication mode: Administrator" << endl;

	//invokes Login of class Administrator
	if (user1.Login(secu)) {
		cout << "Valid administrator!" << endl;
	}
	else if (!user1.Login(secu)) {
		cout << "Invalid administrator!" << endl;
	}
	cout << endl;

	//invokes Login of class User
	cout << "Authentication mode: User" << endl;
	if (user2.Login(secu)) {
		cout << "Valid user or administrator!" << endl;
	}
	else if (!user2.Login(secu)) {
		cout << "Invalid user!" << endl;
	}

	system("PAUSE");
	return 0;
}