#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria **_a;
public:
	Character();
	Character(std::string name);
	~Character();
	Character(Character const & inst);
	Character& operator=(Character const & inst);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif