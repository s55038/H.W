#include "SalarieEmployee.h"
#include "Administrator.h"
#include<iostream>
#include<string>
using namespace std;

int main(void) {
	Administrator user;

	user.inputAdmi();  //input administrator's data
	user.print();      //print administrator's data
	user.printCheck(); //print again on the check

	system("PAUSE");
	return 0;
}