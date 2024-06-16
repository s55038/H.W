#include<iostream>
#include"Human.h"
using namespace std;

Human::Human() :Creature(10, 10) {}

Human::Human(int newStrength, int newHit) :Creature(newStrength, newHit) {}

string Human::getSpecies() {
	return "Human";
}
int Human::getDamage() {
	int damage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	damage = (rand() % getstrength()) + 1;
	cout << " attacks for " <<
		damage << " points!" << endl;
	return damage;
}

