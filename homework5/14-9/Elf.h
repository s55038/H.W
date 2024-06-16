#ifndef ELF_H
#define ELF_H

#include"Creature.h"
#include<iostream>
#include<string>
using namespace std;

class Elf :public Creature {
private:
	string getSpecies();
public:
	Elf();
	Elf(int newStrength, int newHit);
	int getDamage();
};
#endif

