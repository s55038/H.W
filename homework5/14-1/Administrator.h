#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include<iostream>
#include<string>
using namespace std;

#include "SalarieEmployee.h"

class Administrator : public SalarieEmployee {    //derived class from class SalarieEmployee
public:
	Administrator();        //default constructor
	Administrator(double annualSalary, string name, string theTitle, string TheRespArea);  	//constructor to initialize variables
	void setSupervisor(string name);        //function to set supName                                               
	void setTitle(string theTitle);         //function to set title
	void setRespArea(string TheRespArea);   //function to set respArea
	string getSupervisor() const;           //function to get supName
	string getTitle() const;                //function to get title
	string getRespArea() const;             //function to get respArea
	void inputAdmi();                       //function to input administrator's data
	void print() const;                     //function to print administrator's data
	void printCheck() const; //overriding
	~Administrator() {};     //destructor
private:
	string title;     //administrator's title
	string respArea;  //company area of responsibility
	string supName;   //name of immediate supervisor
};

#endif  //ADMINISTRATOR_H
