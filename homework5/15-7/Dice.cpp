//IMPLEMENTATION of class Dice
//The interface of class Dice is in Dice.h

#include "Dice.h"
#include<iostream>
using namespace std;

Dice::Dice() : numSides(6) {
	srand(time(NULL));
}

Dice::Dice(int numSides) {
	this->numSides = numSides;
	srand(time(NULL));
}

int Dice::rollDice() const {
	return (rand() % numSides) + 1;
}