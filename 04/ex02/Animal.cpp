#include "Animal.hpp"

AAnimal::AAnimal() : _type("animal")
{
	std::cout << "Animal born\n";
}

AAnimal::~AAnimal()
{
	std::cout << "Animal died\n";
}

AAnimal& AAnimal::operator=(AAnimal const & inst)
{
	this->_type = inst._type;
	return (*this);
}

AAnimal::AAnimal(AAnimal const & inst)
{
	*this = inst;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Animal Sound\n";
}

std::string AAnimal::getType(void) const
{
	return (_type);
}
