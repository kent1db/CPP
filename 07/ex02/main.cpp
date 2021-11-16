#include "Array.hpp"
#include <iostream>

int		main(void)
{
	try{
		unsigned int i;
		Array<char>b;
		Array<int>a(6);
		for (i = 0; i < 6; i++)
			std::cout << "a = " << a[i] << std::endl;
		std::cout << "a[1] before : " << a[1] << std::endl;
		a[1] = 42;
		std::cout << "a[1] after : " << a[1] << std::endl;
		std::cout << "size a : " << a.size() << std::endl;
		std::cout << "size b : " << b.size() << std::endl;
		std::cout << a[7] << std::endl; /*out of range*/
	}
	catch(Array<int>::limits& e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}