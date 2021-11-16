#include "Point.hpp"

Fixed sign (Point p1, Point p2, Point p3)
{
	return (((p1.getVarX() - p3.getVarX()) * (p2.getVarY() - p3.getVarY()) - (p2.getVarX() - p3.getVarX()) * (p1.getVarY() - p3.getVarY())));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    bool d1, d2, d3;
	Fixed zero(0.0f);

    d1 = sign(point, a, b) < zero;
    d2 = sign(point, b, c) < zero;
    d3 = sign(point, c, a) < zero;
    return ((d1 == d2) && (d2 == d3));
}
