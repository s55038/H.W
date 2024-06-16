#include<iostream>
#include"Demon.h"
using namespace std;

Demon::Demon() :Creature(10, 10) {}

Demon::Demon(int newStrength, int newHit) :Creature(newStrength, newHit) {}

int Demon::getDamage() {
	int damage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	damage = (rand() % getstrength()) + 1;
	cout << getSpecies() << " attacks for " <<
		damage << " points!" << endl;
	if ((rand() % 100) < 5)
	{
		damage = damage + 50;
		cout << "Demonic attack inflicts 50 "
			<< " additional damage points!" << endl;
	}
	return damage;
}
string Demon::getSpecies() {
	return "Demon";
}

