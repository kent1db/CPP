#include "Animal.hpp"

Animal::Animal() : _type("animal")
{
	std::cout << "Animal born\n";
}

Animal::~Animal()
{
	std::cout << "Animal died\n";
}

Animal& Animal::operator=(Animal const & inst)
{
	this->_type = inst._type;
	return (*this);
}

Animal::Animal(Animal const & inst)
{
	*this = inst;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal Sound\n";
}

std::string Animal::getType(void) const
{
	return (_type);
}