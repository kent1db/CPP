#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	// ClapTrap a("michel");
	// ClapTrap b("jean_luc");
	// ScavTrap c("chris");
	// ScavTrap d("niks");
	FragTrap e("nicole");
	FragTrap f("Karen");

	// a.attack("jean_luc");
	// b.takeDamage(9);
	// b.beRepaired(20);
	// c.attack("jean_luc");
	// d.takeDamage(9);
	// d.beRepaired(20);
	// d.guardGate();
	e.takeDamage(100);
	e.beRepaired(100);
	f.attack("everybody");
	f.highFivesGuys();
	return (0);
}
