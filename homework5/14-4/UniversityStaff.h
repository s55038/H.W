#ifndef UNIVERSITYSTAFF_H
#define UNIVERSITYSTAFF_H

#include<iostream>
#include<string>
using namespace std;

class UniversityStaff { 
public:
	UniversityStaff();                                    //default cinstructor
	UniversityStaff(string theName);                      //constructor to initialize name
	UniversityStaff(const UniversityStaff& theObject);    //copy constructor
	string getName() const;                               //function to get name of proctor
	UniversityStaff& operator=(const UniversityStaff& rtSide);                           //overloading assignment operator
	friend istream& operator>>(istream& inStream, UniversityStaff& staffObject);         //overloading >>
	friend ostream& operator<<(ostream& outStream, const UniversityStaff& staffObject);  //overloading <<
private:
	string name;   //name of proctor
};

#endif   //UNIVERSITYSTAFF_H
