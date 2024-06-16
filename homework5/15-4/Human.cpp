#include<iostream>
#include"Human.h"
using namespace std;

Human::Human() :Creature(10, 10) {}

Human::Human(int newStrength, int newHit) :Creature(newStrength, newHit) {}

string Human::getSpecies() {
	return "Human";
}


