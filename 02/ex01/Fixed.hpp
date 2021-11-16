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
	Fixed&	operator=(Fixed const & inst);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};
	
std::ostream & operator<<(std::ostream & o,  Fixed const & inst);

#endif