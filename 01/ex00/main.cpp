#include <iostream>
#include "Zombie.hpp"

int		main(void)
{
	Zombie *test = newZombie("bob");
	test->announce();
	randomChump("jim");
	delete test;
	return (0);
}