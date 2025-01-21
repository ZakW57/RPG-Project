#include "Character.h"

using namespace std;

Character::Character(const string& _name, int _healthPoints, int _armour, int _strength)
{

	name = _name;
	healthPoints = _healthPoints;
	armour = _armour;
	strength = _strength;

}

string Character::getName()
{
	return name;
}

void Character::attack()
{

}