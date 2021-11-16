#include "Karen.hpp"

int		main(int ac, char **av)
{
	Karen karen;
	if (ac != 2)
		return (0);
	std::string rep = av[1];
	if (rep.empty())
		return (0);
	karen.complain(rep);
	return (0);
}