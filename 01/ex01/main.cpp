#include <iostream>
#include "Zombie.hpp"

int		main(int ac, char **av)
{
	std::cout << "Use : [Number of Zombies] [Name]." << std::endl;
	if (ac == 3)
	{
		if (std::atoi(av[1]) <= 0)
			return (0);
		Zombie* zombie = zombieHorde(std::atoi(av[1]), av[2]);
		delete [] zombie;
	}
	return (0);
}