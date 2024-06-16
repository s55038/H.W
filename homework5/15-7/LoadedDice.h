#ifndef LOADEDDICE_H
#define LOADEDDICE_H

#include "Dice.h"
#include<iostream>
using namespace std;

class  LoadedDice : public Dice {   //DERIVED CLASS from Dice
public:
	LoadedDice();                   //default constructor
	LoadedDice(int numSides);       //constructor to initialize numSides in Dice
	virtual int rollDice() const;   //function to roll a dice
};

#endif  //LOADEDDICE_H
