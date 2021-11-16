#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a(2, 3);
	Point b(4, 7);
	Point c(7, 1);
	Point p(5.76f, 4.99f);
	if (bsp(a, b, c, p))
		std::cout << "In\n";
	else
		std::cout << "Out\n";
	return (0);
}
