#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int		_point;
	static int const _bit = 8;
public:
	Fixed(void);
	Fixed(Fixed const & fixed);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	bool	operator>(Fixed const & b);
	bool	operator<(Fixed const & b);
	bool	operator>=(Fixed const & b);
	bool	operator<=(Fixed const & b);
	bool	operator==(Fixed const & b);
	bool	operator!=(Fixed const & b);
	Fixed&	operator=(Fixed const & inst);
	Fixed	operator+(Fixed const & b) const;
	Fixed	operator-(Fixed const & b) const;
	Fixed	operator*(Fixed const & b) const;
	Fixed	operator/(Fixed const & b) const;
	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	static Fixed& min(Fixed & a, Fixed & b);
	static const Fixed& min(Fixed const & a, Fixed const & b);
	static Fixed& max(Fixed & a, Fixed & b);
	static const Fixed& max(Fixed const & a, Fixed const & b);
};
	
std::ostream & operator<<(std::ostream & o,  Fixed const & inst);

#endif