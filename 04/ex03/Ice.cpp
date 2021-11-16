#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(Ice const & inst)
{
	*this = inst;
}

Ice& Ice::operator=(Ice const & inst)
{
	(void)inst;
	return (*this);
}

Ice* Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
