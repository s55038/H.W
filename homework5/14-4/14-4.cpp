#include "ScienceStudent.h"
#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string uniName;       //university name
	int regiNum;          //registration number
	string proName;       //name of proctor
	string sciDiscipline; //science discipline
	string grad;          //undergraduate or postgraduate

	cout << "Enter university name:";
	cin >> uniName;

	cout << "Enter registration number:";
	cin >> regiNum;

	cout << "Enter name of proctor:";
	cin >> proName;

	UniversityStaff proctor(proName);   //declare an object which is the member of base class-Student

	cout << "Enter science discipline:";
	cin >> sciDiscipline;

	cout << "Enter graduate:";
	cin >> grad;

	cout << endl << "BASE CLASS-Student:" << endl;
	Student STU1(uniName, regiNum, proctor);     //object from base class
	STU1.output();

	Student STU2 = STU1;    //TEST assignment operator in base class
	cout << endl << "Print again to test assignment operator in base class!" << endl;
	STU2.output();

	cout << endl << "DERIVED CLASS-ScienceStudent:" << endl;
	ScienceStudent stu1(uniName, regiNum, proctor, sciDiscipline, grad);   //object from derived class
	stu1.output();

	ScienceStudent stu2 = stu1;    //TEST assignment operator in derived class
	cout << endl << "Print again to test assignment operator in derived class!" << endl;
	stu2.output();

	system("PAUSE");
	return 0;
}