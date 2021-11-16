#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("michel");
	ClapTrap b("jean_luc");

	a.attack("jean_luc");
	b.takeDamage(609);
	b.beRepaired(400);
	return (0);
}