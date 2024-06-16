#ifndef CREATURE_H
#define CREATURE_H
#include<iostream>
using namespace std;

class Creature
{
private:
	int strength; // How much damage we can inflict
	int hitpoints; // How much damage we can sustain
public:
	Creature();
	// Initialize to human, 10 strength, 10 hit points
	Creature(int newStrength, int newHit);
	// Initialize creature to new type, strength, hit points
	// Also add appropriate accessor and mutator functions
	// for type, strength, and hit points
	void setstrength(int newStrength);
	int getstrength();
	void sethitpoints(int newHit);
	int gethitpoints();
	int getDamage();
	// Returns amount of damage this creature
	// inflicts in one round of combat
};
#endif
