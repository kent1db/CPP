#include <iostream>
#include "Weapon.hpp"

std::string const & Weapon::getType(void) const
{
	return (_type);
}

void Weapon::setType(std::string str)
{
	_type = str;
}

Weapon::Weapon(std::string weapon) : _type(weapon)
{

}

Weapon::~Weapon()
{

}
