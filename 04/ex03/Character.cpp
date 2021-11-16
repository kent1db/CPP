#include "Character.hpp"

Character::Character()
{
	AMateria** a = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		a[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	_a = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_a[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_a[i] != NULL)
			delete _a[i];
	delete[] _a;
}

Character::Character(Character const & inst)
{
	*this = inst;
}

Character& Character::operator=(Character const & inst)
{
	_name = inst._name;
	for (int i = 0; i < 4; i++)
	{
		if (_a[i] != NULL)
			delete _a[i];
		_a[i] = inst._a[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_a[i] == NULL)
		{
			_a[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	_a[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	_a[idx]->use(target);
}
