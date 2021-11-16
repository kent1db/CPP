#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_point = raw;
}

Fixed&	Fixed::operator=(Fixed const & inst)
{
	std::cout << "Assignation operator called\n";
	this->_point = inst.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const & fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed() : _point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
