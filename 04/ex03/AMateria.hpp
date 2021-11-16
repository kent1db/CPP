#ifndef AMATERIA
#define AMATERIA
#include <iostream>
// #include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	AMateria();
	virtual ~AMateria();
	AMateria(AMateria const & inst);
	AMateria& operator=(AMateria const & inst);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif