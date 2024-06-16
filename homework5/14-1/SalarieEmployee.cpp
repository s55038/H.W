//IMPLEMENTATION of class SalarieEmployee
//The interface of class SalarieEmployee is in SalarieEmployee.h

#include "SalarieEmployee.h"
#include<iostream>
#include<string>
using namespace std;

SalarieEmployee::SalarieEmployee() :salary(0) {};     //default constructor
SalarieEmployee::SalarieEmployee(double theAnnualSalary): salary(theAnnualSalary) {};   //constructor to initialize salary

void SalarieEmployee::setSalary(double newSalary) {    //function to set salary
	salary = newSalary;
}

double SalarieEmployee::getSalary() const {    //function to get salary
	return salary;
}

void SalarieEmployee::printCheck() const {    
	cout << "\nERROR: printCheck FUNCTION IS CALLED FOR AN UNDEFFERENTIATED SalarieEmployee."
		<< "Aborting the program\n"
		<< "Check with the author of the program about this bug.\n";
	exit(1);
}

