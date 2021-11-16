#ifndef SCAPTRAP_H
# define SCAPTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap(std::string name);
	ScavTrap();
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const & inst);
	ScavTrap(ScavTrap const & clap);
	void attack(std::string const & target);
	void guardGate(void);
};


#endif
