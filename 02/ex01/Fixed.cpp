#include "Fixed.hpp"

int Fixed::toInt(void) const
{
	return (_point / pow(2, _bit));
}

float Fixed::toFloat(void) const
{
	return (_point / pow(2, _bit));
}

int Fixed::getRawBits(void) const
{
	return (this->_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_point = raw;
}

std::ostream &	operator<<(std::ostream & o,  Fixed const & inst)
{
	o << inst.toFloat();
	return (o);
}

Fixed&	Fixed::operator=(Fixed const & inst)
{
	std::cout << "Assignation operator called\n";
	this->_point = inst.getRawBits();
	return (*this);
}

Fixed::Fixed() : _point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const & fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed(const int nb) : _point(nb * pow(2, _bit))
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float nb) : _point(roundf(nb * pow(2, _bit)))
{
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
