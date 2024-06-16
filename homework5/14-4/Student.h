#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityStaff.h"
#include<iostream>
#include<string>
using namespace std;

class Student {   //BASE CLASS
public:
	Student();                                                                    //default constructor
	Student(string theUniName, int theRegiNum, const UniversityStaff& theProctor);//cinstructor to initilize variables
	Student(const Student& theObject);                                            //copy constructor
	void setUniName(string theUniName);                                           //function to set university name
	void setRegiNum(int theRegiNum);                                              //function to set registration number
	void setProctor(UniversityStaff& theProctor);                                 //function to set object proctor
	string getUniName() const;                                                    //function to get university name
	int getRegiNum() const;                                                       //function to get registration number
	UniversityStaff getProctor() const;                                           //function to get object proctor
	Student& operator=(const Student& theObject);                                 //overloading assignment operator
	void output() const;                                                          //function to output data
protected:
	string uniName;           //university name
	int regiNum;              //registration number
	UniversityStaff proctor;  //name of proctor
};

#endif   //STUDENT_H