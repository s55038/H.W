//IMPLEMENTATION of class ScienceStudent
//The interface of class ScienceStudent is in ScienceStudent.h

#include "ScienceStudent.h"
#include<iostream>
#include<string>
using namespace std;

ScienceStudent::ScienceStudent() : Student(), sciDiscipline("computer"), grad("undergraduate") {};  //default constructor

ScienceStudent::ScienceStudent(string theUniName, int theRegiNum, UniversityStaff& theObject, string theSci, string theGrad) :
	Student(theUniName, theRegiNum, theObject), sciDiscipline(theSci), grad(theGrad) {};  //constructor to initilaize

ScienceStudent::ScienceStudent(const ScienceStudent& object) {     //copy constructor
	uniName = object.getUniName();
	regiNum = object.getRegiNum();
	proctor = object.getProctor();

	sciDiscipline = object.getSciDiscipline();  
	grad = object.getGrad();
}

void ScienceStudent::setSciDiscipline(string theSci) {  //function to set sciDiscipline
	sciDiscipline = theSci;
}
 
void ScienceStudent::setGrad(string theGrad) {     //function to set grad
	grad = theGrad;
}

string ScienceStudent::getSciDiscipline() const {    //function to get sciDiscipline
	return sciDiscipline;
}

string ScienceStudent::getGrad() const {     //function to get grad     
	return grad;
}

ScienceStudent& ScienceStudent::operator=(const ScienceStudent& object) {    //overloading assignment operator
	uniName = object.getUniName();
	regiNum = object.getRegiNum();
	proctor = object.getProctor();

	sciDiscipline = object.getSciDiscipline();
	grad = object.getGrad();

	return *this;
}

void ScienceStudent::output() const{    //function to output data
	cout << "University name=> " << uniName << endl;
	cout << "Registration number=> " << regiNum << endl;
	cout << "Proctor=> " << proctor.getName() << endl;
	cout << "Science discipline=> " << sciDiscipline << endl;
	cout << "Graduate=> " << grad << endl;
}