#include "Television.h"
#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string type;     //display type of television
	double size;     //dimension of television
	int numMode;     //the number of connectivity modes
	int numTV;       //the number of TV
	int j = 0;       //while-loop variable
	char cust;       //whether user requires customization
	string* modePtr = NULL;    //pointer for array connectivitySupport
	string* C_modePtr = NULL;  //pointer for array connectivitySupport when customization
	Television* TVptr = NULL;  //pointer for objects

	cout << "Enter display type:";
	cin >> type;

	cout << "Enter dimension of the television in inches:";
	cin >> size;

	cout << "Enter the number of connectivity modes:";
	cin >> numMode;

	modePtr = new string[numMode];   //ask memory for array connectivitySuppert
	if (modePtr == NULL) {
		cout << "Insufficient memory." << endl;
		exit(1);
	}

	cout << "Enter connectivity modes with space:";
	for (int i = 0; i < numMode; i++) {
		cin >> modePtr[i];
	}

	Television T1(type, size);
	T1.setnumMode(numMode);
	T1.setconnect(modePtr);

	T1.output();   //output data of TV 

	cout << endl << "Enter the number of TV required:";
	cin >> numTV;   //num of TV required

	while (j < numTV) {
		TVptr = new Television(T1);     //ask memory for object
		if (TVptr == NULL) {
			cout << "Insufficient memory." << endl;
			exit(1);
		}

		Television TV = *TVptr;
		cout << "If customization is required, enter 'Y'. If not, enter 'N':";
		cin >> cust;   //whether user requires customization

		if (cust == 'Y' || cust == 'y') {      //customization
			cout << "Enter display type:";     //customization for display type
			cin >> type;
			TV.setdisplayType(type);

			cout << "Enter dimension of the television in inches:";   //customization for dimension
			cin >> size;
			TV.setdimension(size);

			cout << "Enter the number of connectivity modes:";
			cin >> numMode;  //input the number of connectivity modes

			TV.setnumMode(numMode);

			C_modePtr = new string[numMode];   //new a string array for connectivity modes
			if (modePtr == NULL) {
				cout << "Insufficient memory." << endl;
				exit(1);
			}

			cout << "Enter connectivity modes with space:";    //customization for connectivitySupport
			for (int i = 0; i < numMode; i++) {
				cin >> C_modePtr[i];
			}

			TV.setconnect(C_modePtr);

			TV.output();   //output data of TV
			cout << endl;
		}
		else if (cust == 'N' || cust == 'n') {    //customization is not required
			T1.output();
			cout << endl;
		}
		j++;
	}

	delete modePtr;        //release memory
	modePtr = NULL;

	delete TVptr;          //release memory
	TVptr = NULL;

	delete[] C_modePtr;    //release memory
	C_modePtr = NULL;

	system("PAUSE");
	return 0;
}
