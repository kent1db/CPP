#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	try
	{	
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(32);
		vec.push_back(78);
		vec.push_back(42);
		vec.push_back(0);
		std::cout << *(easyfind(vec, 42)) << std::endl;
		std::cout << *(easyfind(vec, 100)) << std::endl;
		return (0);
	}
	catch (error::exception& e)
	{
		std::cout << e.what();
	}
}