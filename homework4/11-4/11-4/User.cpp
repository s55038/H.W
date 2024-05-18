//IMPLEMENTATION of class User
//The interface of class Administrator is in User.h

#include "User.h"
#include<iostream>
#include<string>
using namespace std;

bool User::Login(const Security& S_user) {
	if (S_user.validate(username, password) != 0) {
		return true;   //valid user
	}
	else {
		return false;  //invalid user
	}
}