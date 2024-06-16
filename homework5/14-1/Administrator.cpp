//IMPLEMENTATION of class Administrator
//The interface of class SalarieEmployee is in Administrator.h

#include "Administrator.h"
#include<iostream>
#include<string>
using namespace std;

//default constructor
Administrator::Administrator() :SalarieEmployee(), title("No title yet."), respArea("No responsibility of area yet."),
supName("No name of supervisor yet.") {};

//constructor to initialize variables
Administrator::Administrator(double annualSalary, string name, string theTitle, string TheRespArea) :SalarieEmployee(annualSalary),
supName(name), title(theTitle), respArea(TheRespArea) {};

void Administrator::setSupervisor(string name) {   //function to set supName 
	supName = name;
}

void Administrator::setTitle(string theTitle) {    //function to set title
	title = theTitle;
}

void Administrator::setRespArea(string TheRespArea) {   //function to set respArea
	respArea = TheRespArea;
}

string Administrator::getSupervisor() const {    //function to get supName
	return supName;
}

string Administrator::getTitle() const {      //function to get title
	return title;
}

string Administrator::getRespArea() const {    //function to get respArea
	return respArea;
}

void Administrator::inputAdmi() {    //function to input administrator's data
	//double annSalary;

	cout << "Enter title:";
	cin >> title;

	cout << "Enter the company area of responsibility:";
	cin >> respArea;

	cout << "Enter the name of immediate supervisor:";
	cin >> supName;

	cout << "Enter the annual salary:";
	cin >> salary;
	//setSalary(annSalary);
}

void Administrator::print() const {     //function to print administrator's data
	cout << endl;
	cout << "Administrator's data:" << endl;
	cout << "Title=> " << title << endl;
	cout << "Company area of responsibility=> " << respArea << endl;
	cout << "Name of immediate supervisor=> " << supName << endl;
	cout << "Annual salary($)=> " << salary << endl;
}

void Administrator::printCheck() const {  //overriding
	cout << endl;
	cout << "Print again on the check!" << endl;
	cout << "Title=> " << title << endl;
	cout << "Company area of responsibility=> " << respArea << endl;
	cout << "Name of immediate supervisor=> " << supName << endl;
	cout << "Annual salary($)=> " << salary << endl;
}