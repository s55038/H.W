//IMPLEMENTATION of class Student
//The interface of class Student is in Student.h

#include "Student.h"
#include<iostream>
#include<string>
using namespace std;

Student::Student() : uniName("No university name yet."), regiNum(0000) {};               //default constructor

Student::Student(string theUniName, int theRegiNum, const UniversityStaff& theProctor) : //cinstructor to initilize variables
	uniName(theUniName), regiNum(theRegiNum), proctor(theProctor) {};

Student::Student(const Student& theObject) {    //copy cnstructor
	uniName = theObject.getUniName();
	regiNum = theObject.getRegiNum();
	proctor = theObject.getProctor();
}

void Student::setUniName(string theUniName) {   //function to set university name
	uniName = theUniName;
}

void Student::setRegiNum(int theRegiNum) {      //function to set registration number
	regiNum = theRegiNum;
}

void Student::setProctor(UniversityStaff& theProctor) {   //function to set object proctor
	proctor = theProctor;
}

string Student::getUniName() const {       //function to get university name
	return uniName;
}

int Student::getRegiNum() const {          //function to get registration number
	return regiNum;
}

UniversityStaff Student::getProctor() const {    //function to get object proctor
	return proctor;
}

Student& Student::operator=(const Student& theObject) {   //overloading assignment operator
	uniName = theObject.getUniName();
	regiNum = theObject.getRegiNum();
	proctor = theObject.getProctor();

	return *this;
}

void Student::output() const{     //function to output data
	cout << "University name=> " << uniName << endl;
	cout << "Registration number=> " << regiNum << endl;
	cout << "Proctor=> " << proctor.getName() << endl;
}

