#include<iostream>
#include"Balrog.h"
using namespace std;

Balrog::Balrog() :Demon(10, 10) {}

Balrog::Balrog(int newStrength, int newHit) :Demon(newStrength, newHit) {}

int Balrog::getDamage() {
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
	int damage2 = (rand() % getstrength()) + 1;
	cout << "Balrog speed attack inflicts " << damage2 <<
		" additional damage points!" << endl;
	damage = damage + damage2;
	return damage;
}
string Balrog::getSpecies() {
	return "Balrog";
}

