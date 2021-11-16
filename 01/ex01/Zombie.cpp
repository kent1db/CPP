#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{

}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << " Grrrrrrr" << std::endl;
}