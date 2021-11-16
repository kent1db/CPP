#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap a("michel");
	ClapTrap b("jean_luc");
	ScavTrap c("chris");
	ScavTrap d("niks");

	a.attack("jean_luc");
	b.takeDamage(9);
	b.beRepaired(20);
	c.attack("jean_luc");
	d.takeDamage(9);
	d.beRepaired(20);
	d.guardGate();
	return (0);
}
