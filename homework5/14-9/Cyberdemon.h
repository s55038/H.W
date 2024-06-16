#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include"Demon.h"
#include<iostream>
#include<string>
using namespace std;

class Cyberdemon :public Demon {
private:
	string getSpecies();
public:
	Cyberdemon();
	Cyberdemon(int newStrength, int newHit);
	int getDamage();
};
#endif


