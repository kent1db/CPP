#include <iostream>
#include "Weapon.hpp"
#ifndef HUMANA_H
# define HUMANA_H

class HumanA
{
private:
	std::string _name;
	Weapon& _weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack(void);
};

#endif
