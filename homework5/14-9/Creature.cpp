#include<iostream>
#include"Creature.h"
using namespace std;

Creature::Creature() :strength(0), hitpoints(0) {}

Creature::Creature(int newStrength, int newHit) :strength(newStrength), hitpoints(newHit) {}

void Creature::setstrength(int newStrength) {
	strength = newStrength;
}
int Creature::getstrength() { return strength; }
void Creature::sethitpoints(int newHit) {
	hitpoints = newHit;
}
int Creature::gethitpoints() { return hitpoints; }

int Creature::getDamage() {
	int damage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	damage = (rand() % strength) + 1;
	cout << " attacks for " <<
		damage << " points!" << endl;
	return damage;
}

