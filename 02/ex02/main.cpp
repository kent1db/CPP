#include "Fixed.hpp"

int main(void)
{
    Fixed        a;
    Fixed        const    b(Fixed(5.05f) + Fixed(2));
    Fixed        const    d(Fixed(2.02f) - Fixed(3.02f));
    Fixed        const    e(Fixed(2.02f) * Fixed(3.02f));
    Fixed        const    f(Fixed(2.02f) / Fixed(3.02f));
    Fixed         x(b);

    Fixed        c(2);


    std::cout << b << " b" << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    std::cout << a << " a" << std::endl;
    std::cout << ++a << " ++a" << std::endl;
    std::cout << a << " a" << std::endl;
    std::cout << a++ << " a++" << std::endl;
    std::cout << a << " a" << std::endl;
    std::cout << --a << " --a"<< std::endl;
    std::cout << a << " a"<< std::endl;
    std::cout << a-- << " a--" << std::endl;
    std::cout << a << " a" << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;


    if (a > b) {
        std::cout << "a is upper to b" << std::endl;
    }
    if (a < b) {
        std::cout << "a is lower to b" << std::endl;
    }
    a = a + 2;
    if (a <= b) {
        std::cout << "a is lower or equal to b" << std::endl;
    }
    if (a >= b) {
        std::cout << "a is upper or equal to b" << std::endl;
    }
    if (a == b) {
        std::cout << "a is equal to b" << std::endl;
    }
    if (x == b) {
        std::cout << "x is equal to b" << std::endl;
    }
    if (a != b) {
        std::cout << "a is not equal to b" << std::endl;
    }
    std::cout << "Max a/b : " << Fixed::max(a, b ) << std::endl;
    std::cout << "Min a/b : " << Fixed::min(a, b ) << std::endl;
    std::cout << "Max a/c : " << Fixed::max(a, c) << std::endl;
}

// int main( void ) 
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 10 ) / Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }
