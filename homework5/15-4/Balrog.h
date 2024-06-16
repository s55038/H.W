#ifndef BALROG_H
#define BALROG_H
#include"Demon.h"
#include<iostream>
#include<string>
using namespace std;

class Balrog :public Demon {
private:
	string getSpecies();
public:
	Balrog();
	Balrog(int newStrength, int newHit);
	virtual int getDamage();
};
#endif



