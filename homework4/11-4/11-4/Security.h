#ifndef SECURITY_H
#define SECURITY_H
#include<string>
using namespace std;

class Security {
public:
	Security() {};      //default constructor
	~Security() {};     //destructor
	static int validate(string username, string password);   //function to determine whether input is valid
};

#endif   //SECURITY_H