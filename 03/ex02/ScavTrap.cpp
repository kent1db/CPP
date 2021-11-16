#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Christophe")
{
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << _name << "default constructor (ScavTrap)\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << _name << " just born (ScavTrap)\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " died (ScavTrap)\n";
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " hit " << target << ", causing " << _attack_damage << " points of damage!\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name <<  " have enterred in Gate Keeper Mode\n";
}

ScavTrap& ScavTrap::operator=(ScavTrap const & inst)
{
	this->_name = inst._name;
	this->_hitpoints = inst._hitpoints;
	this->_energy_points = inst._energy_points;
	this->_attack_damage = inst._attack_damage;
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap const & clap)
{
	*this = clap;
}
