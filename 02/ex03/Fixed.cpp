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

bool	Fixed::operator>(Fixed const & b)
{
	return (_point > b.getRawBits());
}

bool	Fixed::operator<(Fixed const & b)
{
	return(_point < b.getRawBits());
}

bool	Fixed::operator>=(Fixed const & b)
{
	return(_point >= b.getRawBits());
}

bool	Fixed::operator<=(Fixed const & b)
{
	return(_point <= b.getRawBits());
}

bool	Fixed::operator==(Fixed const & b)
{
	return (_point == b.getRawBits());
}

bool	Fixed::operator!=(Fixed const & b)
{
	return (_point != b.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & b) const
{
	return ((this->_point + b.getRawBits()) / powf(2, 8));
}

Fixed	Fixed::operator-(Fixed const & b) const
{
	return ((this->_point - b.getRawBits()) / powf(2, 8));
}

Fixed	Fixed::operator*(Fixed const & b) const
{
	return ((this->_point * b.getRawBits()) / powf(2, 16));
}

Fixed	Fixed::operator/(Fixed const & b) const
{
	return ((this->_point * powf(2, 8)) / (b.getRawBits() * powf(2, 8)));
}

Fixed&	Fixed::operator++(void)
{
	_point++;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	_point--;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed post;
	post = *this;
	_point++;
	return(post);
}

Fixed	Fixed::operator--(int)
{
	Fixed post;
	post = *this;
	_point--;
	return(post);
}

Fixed& Fixed::min(Fixed & a, Fixed & b)
{
	if (a._point < b._point)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed & a, Fixed & b)
{
	if (a._point > b._point)
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a._point < b._point)
		return (a);
	return (b);
}

const Fixed& Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a._point > b._point)
		return (a);
	return (b);
}


std::ostream &	operator<<(std::ostream & o,  Fixed const & inst)
{
	o << inst.toFloat();
	return (o);
}

Fixed&	Fixed::operator=(Fixed const & inst)
{
	// std::cout << "Assignation operator called\n";
	this->_point = inst.getRawBits();
	return (*this);
}

Fixed::Fixed() : _point(0)
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const & fixed)
{
	// std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed(const int nb) : _point(nb * pow(2, _bit))
{
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float nb) : _point(roundf(nb * pow(2, _bit)))
{
	// std::cout << "Float constructor called\n";
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}
