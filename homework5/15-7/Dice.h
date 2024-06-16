#ifndef DICE_H
#define DICE_H

#include<iostream>
using namespace std;

class Dice {   //BASE CLASS
public:
	Dice();                        //default constructor
	Dice(int numSides);            //constructor to initialize numSides in Dice
	virtual int rollDice() const;  //function to roll a dice
protected: 
	int numSides;   //number of sides of a dice
};

#endif  //DICE_H