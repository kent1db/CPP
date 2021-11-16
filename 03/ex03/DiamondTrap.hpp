#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap& operator=(DiamondTrap const & inst);
	DiamondTrap(DiamondTrap const & clap);
	void whoAmI(void);
	void attack(std::string const & target);
};

#endif
