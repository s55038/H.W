#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "Security.h"
#include<string>
using namespace std;


class Administrator {
public:
	Administrator() {};    //default constructor
	Administrator(string name, string pw):username(name), password(pw) {};  //function to initialize username and password
	void setUsername(string name) { username = name; }                      //function to set username
	void setPassword(string pw) { password = pw; }                          //function to set password
	string getUsername() const { return username; }                         //function to get username
	string getPassword() const { return password; }                         //function to get password
	bool Login(const Security& S_admi);                                     //function to determine whether input is valid administrator
	~Administrator() {};   //destructor
private:
	string username;
	string password;
};

#endif   //ADMINISTRATOR_H
