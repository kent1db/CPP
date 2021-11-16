#include "Karen.hpp"

int		main(void)
{
	Karen karen;
	std::cout << "Enter your message\n";
	std::string rep;
	getline(std::cin, rep);
	if (rep.empty())
	{
		std::cout << "Empty message\n";
		return (0);
	}
	karen.complain(rep);
	return (0);
}
