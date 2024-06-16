#include<iostream>
#include"Cyberdemon.h"
using namespace std;

Cyberdemon::Cyberdemon() :Demon(10, 10) {}

Cyberdemon::Cyberdemon(int newStrength, int newHit) :Demon(newStrength, newHit) {}

string Cyberdemon::getSpecies() {
	return "Cyberdemon";
}

