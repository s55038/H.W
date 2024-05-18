//IMPLEMENTATION of class Administrator
//The interface of class Administrator is in Administrator.h

#include "Administrator.h"
#include<iostream>
#include<string>
using namespace std;

bool Administrator::Login(const Security& S_admi) {
	if (S_admi.validate(username, password) == 1) {
		return false;    //Invalid administrator
	}
	else if (S_admi.validate(username, password) == 2) {
		return true;     //Valid administrator
	}
}