#include <iostream>
#include "Weapon.hpp"
#ifndef HUMANB_H
# define HUMANB_H

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB(const std::string& name);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon& weapon);
};

#endif