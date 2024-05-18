//IMPLEMENTATION of class Security
//The interface of class Security is in Security.h

#include "Security.h"
#include<iostream>
#include<string>
using namespace std;

int Security::validate(string username, string password) {
	if ((username == "abbott") && (password == "monday")) {    
		return 1;    //valid user
	}
	else if ((username == "costello") && (password == "tuesday")) {    
		return 2;    //valid user or administrator
	}
	else {   
		return 0;    //invalid user and administrator
	}

}