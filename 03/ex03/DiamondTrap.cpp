#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "Yooooooooooooooooooo\n";
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap() : ClapTrap("Christophe_clap_name"), FragTrap("Christophe"), ScavTrap("Christophe"), _name("Christophe")
{
	std::cout << "default constructor\n";
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Good bye\n";
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & inst)
{
	this->_name = inst._name;
	this->_hitpoints = inst._hitpoints;
	this->_energy_points = inst._energy_points;
	this->_attack_damage = inst._attack_damage;
	return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap const & clap)
{
	*this = clap;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap name is : " << ClapTrap::_name <<std::endl;
	std::cout << "His name is : " << _name <<std::endl;
}
