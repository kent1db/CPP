#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(Cure const & inst)
{
	*this = inst;
}

Cure& Cure::operator=(Cure const & inst)
{
	(void)inst;
	return (*this);
}

Cure* Cure::clone(void) const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
