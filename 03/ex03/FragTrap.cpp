#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Christophe")
{
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << _name << "default constructor (FragTrap)\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << _name << " spawn ! (FragTrap)\n";
}

FragTrap::~FragTrap()
{
	std::cout << _name << " disappeared ! (FragTrap)\n";
}

FragTrap& FragTrap::operator=(FragTrap const & inst)
{
	this->_name = inst._name;
	this->_hitpoints = inst._hitpoints;
	this->_energy_points = inst._energy_points;
	this->_attack_damage = inst._attack_damage;
	return (*this);
}

FragTrap::FragTrap(FragTrap const & clap)
{
	*this = clap;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High Five bro !\n";
}
