#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap const & clap)
{
	*this = clap;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & inst)
{
	this->_name = inst._name;
	this->_hitpoints = inst._hitpoints;
	this->_energy_points = inst._energy_points;
	this->_attack_damage = inst._attack_damage;
	return (*this);
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << _name << " constructed (ClapTrap)\n";
}

ClapTrap::ClapTrap() : _name("Christophe"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << _name << "default constructor (ClapTrap)\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " destructed (ClapTrap)\n";
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!\nNow :" << _hitpoints << "HP\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitpoints += amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of heal!\nNow :" << _hitpoints << "HP\n";
}
