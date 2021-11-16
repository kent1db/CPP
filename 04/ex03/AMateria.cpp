#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{

}

AMateria::~AMateria()
{

}
AMateria::AMateria(AMateria const & inst)
{
	*this = inst;
}

AMateria& AMateria::operator=(AMateria const & inst)
{
	_type = inst._type;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

std::string const & AMateria::getType(void) const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Use : " << _type << " at " << target.getName() << std::endl;
}
