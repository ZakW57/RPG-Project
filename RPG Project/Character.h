#pragma once
#include <string>

using namespace std;

class Character
{

	//Private Data
	string name;
	int healthPoints;
	int armour;
	int strength;

public:
	Character(const string& _name, int _healthPoints, int _armour, int _strength);

	string getName();

	void attack();
	
};

