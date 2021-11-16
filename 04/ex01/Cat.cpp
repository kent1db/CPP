#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat born\n";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat died\n";
	delete(_brain);
}

Cat& Cat::operator=(Cat const & inst)
{
	this->_type = inst._type;
	this->_brain = new Brain(*inst._brain);
	return (*this);
}

Cat::Cat(Cat const & inst)
{
	*this = inst;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Sound\n";
}

std::string Cat::getType(void) const
{
	return (_type);
}
