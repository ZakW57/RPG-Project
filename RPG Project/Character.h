#pragma once
#include <iostream>

using namespace std;

class Character
{

	//Private Data
	string name;
	int healthPoints;
	int armour;
	int strength;

public:
	Character(const string& _name, int _healthPoints, int armour, int strength);

	string getName();
};

