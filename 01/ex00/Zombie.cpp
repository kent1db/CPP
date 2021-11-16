#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{

}

Zombie::~Zombie()
{
	std::cout << _name << " died\n";
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
