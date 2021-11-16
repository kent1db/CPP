#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog born\n";
}

Dog::~Dog()
{
	std::cout << "Dog died\n";
}

Dog& Dog::operator=(Dog const & inst)
{
	this->_type = inst._type;
	return (*this);
}

Dog::Dog(Dog const & inst)
{
	*this = inst;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sound\n";
}

std::string Dog::getType(void) const
{
	return (_type);
}