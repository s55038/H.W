#ifndef SALARIEEMPLOYEE_H
#define SALARIEEMPLOYEE_H

#include<iostream>
#include<string>
using namespace std;

class SalarieEmployee {
public:
	SalarieEmployee();                        //default constructor
	SalarieEmployee(double theAnnualSalary);  //constructor to initialize salary
	void setSalary(double newSalary);         //function to set salary
	double getSalary() const;                 //function to get salary
	void printCheck() const;                  
	~SalarieEmployee() {};                    //destructor
protected:
	double salary;  //annual salary
};

#endif  //SALARIEEMPLOYEE_H
