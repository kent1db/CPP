#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	int	_hitpoints;
	int	_energy_points;
	int _attack_damage;
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & clap);
	~ClapTrap();
	ClapTrap(void);
	ClapTrap& operator=(ClapTrap const & inst);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif