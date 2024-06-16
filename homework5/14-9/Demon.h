#ifndef DEMON_H
#define DEMON_H
#include"Creature.h"
#include<iostream>
#include<string>
using namespace std;

class Demon :public Creature {
private:
	string getSpecies();
public:
	Demon();
	// Initialize to human, 10 strength, 10 hit points
	Demon(int newStrength, int newHit);
	// Initialize creature to new type, strength, hit points
	// Also add appropriate accessor and mutator functions
	// for type, strength, and hit points
	int getDamage();
	// Returns amount of damage this creature
	// inflicts in one round of combat
};
#endif

