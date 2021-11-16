#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int		_point;
	static int const _bit = 8;
public:
	Fixed(void);
	Fixed(Fixed const & fixed);
	~Fixed(void);
	Fixed& operator=(Fixed const & inst);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif