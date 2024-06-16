#include "Dice.h"
#include "LoadedDice.h"
#include<iostream>
using namespace std;

int rollTwoDice(const Dice& die1, const Dice& die2);   //function to return sum of two dice

int main(void) {
	int dice1 = 0, dice2 = 0;    //number of sides

	cout << "Enter a number of sides of dice 1:";
	cin >> dice1;

	cout << "Enter a number of sides of dice 2:";
	cin >> dice2;

	Dice D1(dice1), D2(dice2);   //BASE CLASS objects

	cout << endl << "---------Test for BASE CLASS object---------" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Round " << i + 1 << ": sum=" << rollTwoDice(D1, D2) << endl;
	}  //Invoke rollTwoDice function ten times for base class

	LoadedDice D3(dice1), D4(dice2);   //DERIVED CLASS objects

	cout << endl << "-------Test for DERIVED CLASS object-------" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Round " << i + 1 << ": sum=" << rollTwoDice(D3, D4) << endl;
	}   //Invoke rollTwoDice function ten times for derived class

	system("PAUSE");
	return 0;
}

int rollTwoDice(const Dice& die1, const Dice& die2) {  //Take two objects, roll them, and return the sum
	return die1.rollDice() + die2.rollDice();
}