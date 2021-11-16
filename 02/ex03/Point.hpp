#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	~Point();
	Point(Point const &);
	Point(Fixed const x, Fixed const y);
	Point(float const x, float const y);
	Point & operator=(Point const & point);
	Fixed	getVarX(void) const;
	Fixed	getVarY(void) const;
};

#endif