#include "Point.hpp"

Fixed	Point::getVarX(void) const
{
	return (_x);
}

Fixed	Point::getVarY(void) const
{
	return (_y);
}

Point::Point() : _x(0), _y(0)
{
//  std::cout << "Point constructor called\n";
}

Point::Point(Point const & point) : _x(point._x), _y(point._y)
{
	// std::cout << "copy point\n";
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
//  std::cout << "Point init constructor called\n";
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	// std::cout << "Point init constructor called\n";
}

Point::~Point()
{

}

Point &	Point::operator=(Point const & point)
{
	(void)point;
	return (*this);
}
