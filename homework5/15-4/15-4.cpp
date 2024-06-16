#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include"Demon.h"
#include "Elf.h"
#include<iostream>
#include<string>
using namespace std;

string battleArena(Creature& creature1, Creature& creature2);   //function to battle

int main(void) {
	int strength;
	int hitpoints;
	string result;  //result of battle

	srand(time(NULL));

	cout << "Enter strength of creature(an integer):";
	cin >> strength;

	cout << "Enter hitpoints of creature(an integer):";
	cin >> hitpoints;

	Human human(strength, hitpoints);
	Cyberdemon cyber(strength, hitpoints);
	Balrog bal(strength, hitpoints);
	Elf elf(strength, hitpoints);

	cout << endl;
	human.getDamage();
	cyber.getDamage();
	bal.getDamage();
	elf.getDamage();
	cout << endl << "----------------------BATTLES------------------------" << endl;

	cout << endl << "----------------Human VS. Cyberdemon----------------" << endl;
	result = battleArena(human, cyber);
	while (result == "TIE" || result == "NOT YET!!!") {
		result = battleArena(human, cyber);   //Human VS Cyberdemon
	}
	cout << endl;

	cout << endl << "------------------Human VS. Balrog------------------" << endl;
	result = battleArena(human, bal);
	while (result == "TIE" || result == "NOT YET!!!") {
		result = battleArena(human, bal);   //Human VS Balrog
	}
	cout << endl;

	cout << endl << "--------------------Human VS. Elf--------------------" << endl;
	result = battleArena(human, elf);
	while (result == "TIE" || result == "NOT YET!!!") {
		result = battleArena(human, elf);    //Human VS Elf
	}
	cout << endl;

	cout << endl << "----------------Cyberdemon VS. Balrog----------------" << endl;
	result = battleArena(cyber, bal);
	while (result == "TIE" || result == "NOT YET!!!") {
		result = battleArena(cyber, bal);    //Cyberdemon VS Balrog
	}
	cout << endl;

	cout << endl << "------------------Cyberdemon VS. Elf------------------" << endl;
	result = battleArena(cyber, elf);
	while (result == "TIE" || result == "NOT YET!!!") {
		result = battleArena(cyber, elf);     //Cyberdemon VS Elf
	}
	cout << endl;

	cout << endl << "--------------------Balrog VS. Elf--------------------" << endl;
	result = battleArena(bal, elf);
	while (result == "TIE" || result == "NOT YET!!!") {
		result = battleArena(bal, elf);      //Balrog VS Elf
	}
	cout << endl;

	system("PAUSE");
	return 0;
}

//function to battle
string battleArena(Creature& creature1, Creature& creature2) {
	int c1Hitc2 = creature1.getDamage() - creature2.gethitpoints();
	int c2Hitc1 = creature2.getDamage() - creature1.gethitpoints();

	if ((c1Hitc2 < 0 && c2Hitc1 < 0) || (c1Hitc2 == 0 && c2Hitc1 == 0)) {
		cout << "Result: TIE" << endl << endl;
		return "TIE";
	}
	else if ((c1Hitc2 > 0 && c2Hitc1 < 0)) {
		cout << "Result: creature 1 WINS!!!" << endl << endl;
		return "creature1";
	}
	else if (c1Hitc2 < 0 && c2Hitc1 > 0) {
		cout << "Result: creature 2 WINS!!!" << endl << endl;
		return "creature2";
	}
	else {
		cout << "Result: NOT YET!!!" << endl << endl;
		return "NOT YET!!!";
	}
}

