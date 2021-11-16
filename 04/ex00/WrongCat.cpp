#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat born\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat died\n";
}

WrongCat& WrongCat::operator=(WrongCat const & inst)
{
	this->_type = inst._type;
	return (*this);
}

WrongCat::WrongCat(WrongCat const & inst)
{
	*this = inst;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Sound\n";
}

std::string WrongCat::getType(void) const
{
	return (_type);
}
