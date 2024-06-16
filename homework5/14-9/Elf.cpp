#include<iostream>
#include"Elf.h"
using namespace std;

Elf::Elf() :Creature(10, 10) {}

Elf::Elf(int newStrength, int newHit) :Creature(newStrength, newHit) {}

int Elf::getDamage() {
	int damage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	damage = (rand() % getstrength()) + 1;
	cout << getSpecies() << " attacks for " <<
		damage << " points!" << endl;
	if ((rand() % 10) == 0)
	{
		cout << "Magical attack inflicts " << damage <<
			" additional damage points!" << endl;
		damage = damage * 2;
	}

	return damage;
}
string Elf::getSpecies() {
	return "Elf";
}

