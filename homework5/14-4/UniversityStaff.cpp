//IMPLEMENTATION of class UniversityStaff
//The interface of class UniversityStaff is in UniversityStaff.h

#include "UniversityStaff.h"
#include<iostream>
#include<string>
using namespace std;

UniversityStaff::UniversityStaff() :name("No name yet.") {};        //default cinstructor

UniversityStaff::UniversityStaff(string theName) :name(theName) {}; //constructor to initialize name

UniversityStaff::UniversityStaff(const UniversityStaff& theObject) :name(theObject.getName()) {};   //copy constructor

string UniversityStaff::getName() const {  //function to get name of proctor
	return name;
}

UniversityStaff& UniversityStaff::operator=(const UniversityStaff& rtSide) {  //overloading assignment operator
	name = rtSide.getName();

	return *this;
}

istream& operator>>(istream& inStream, UniversityStaff& staffObject) {   //overloading >>
	inStream >> staffObject.name;

	return inStream;
}

ostream& operator<<(ostream& outStream, const UniversityStaff& staffObject) {   //overloading <<
	outStream << staffObject.name;

	return outStream;
}
