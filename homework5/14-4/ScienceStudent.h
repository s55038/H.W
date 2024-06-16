#ifndef SCIENCESTUDENT_H
#define SCIENCESTUDENT_H

#include "Student.h"
#include<iostream>
#include<string>
using namespace std;

class ScienceStudent : public Student {   //DERIVED CLASS FROM¡@CLASS STUDENT
public:
	ScienceStudent();   //default constructor
	ScienceStudent(string theUniName, int theRegiNum, UniversityStaff& theObject, string theSci, string theGrad);  //constructor to initilaize
	ScienceStudent(const ScienceStudent& object);              //copy constructor
	void setSciDiscipline(string theSci);                      //function to set sciDiscipline
	void setGrad(string theGrad);                              //function to set grad
	string getSciDiscipline() const;                           //function to get sciDiscipline
	string getGrad() const;                                    //function to get grad
	ScienceStudent& operator=(const ScienceStudent& object);   //overloading assignment operator
	void output() const;                                       //function to output data
private:
	string sciDiscipline;   //science discipline
	string grad;            //undergraduate or postgraduate
};

#endif  //SCIENCESTUDENT_H