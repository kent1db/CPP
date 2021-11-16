#include <iostream>
#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string);
	~Weapon();
	std::string const & getType(void) const;
	void setType(std::string);
};

#endif