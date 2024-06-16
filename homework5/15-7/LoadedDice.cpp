//IMPLEMENTATION of class LoadedDice
//The interface of class LoadedDice is in LoadedDice.h

#include "LoadedDice.h"
#include<iostream>
using namespace std;

LoadedDice::LoadedDice() :Dice(6) {};

LoadedDice::LoadedDice(int numSides) :Dice(numSides) {};

int LoadedDice::rollDice() const {	
	if (rand() % 2 == 1) {   // 50% chance to return the largest number
		return numSides;   
	}
	else {   //otherwice, return number that rollDice function in base class returns
		return Dice::rollDice();
	}
}