#include<iostream>
#include"Cyberdemon.h"
using namespace std;

Cyberdemon::Cyberdemon() :Demon(10, 10) {}

Cyberdemon::Cyberdemon(int newStrength, int newHit) :Demon(newStrength, newHit) {}

int Cyberdemon::getDamage() {
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

string Cyberdemon::getSpecies() {
	return "Cyberdemon";
}

