#ifndef HUMAN_H
#define HUMAN_H

#include"Creature.h"
#include<iostream>
#include<string>
using namespace std;

class Human:public Creature{
private:
	string getSpecies();
public:
	Human();
	// Initialize to human, 10 strength, 10 hit points
	Human(int newStrength, int newHit);
	// Initialize creature to new type, strength, hit points
	// Also add appropriate accessor and mutator functions
	// for type, strength, and hit points
	int getDamage();
};
#endif
