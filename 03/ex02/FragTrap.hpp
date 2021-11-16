#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
private:
	
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	void highFivesGuys(void);
	FragTrap& operator=(FragTrap const & inst);
	FragTrap(FragTrap const & clap);
};

#endif