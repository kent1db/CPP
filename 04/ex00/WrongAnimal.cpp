#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal born\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal died\n";
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & inst)
{
	this->_type = inst._type;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const & inst)
{
	*this = inst;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound\n";
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}