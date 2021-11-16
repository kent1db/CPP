#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog born\n";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog died\n";
	delete(_brain);
}

Dog& Dog::operator=(Dog const & inst)
{
	this->_type = inst._type;
	this->_brain = new Brain(*inst._brain);
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