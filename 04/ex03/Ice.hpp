#ifndef ICE
#define ICE

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria 
{
private:

public:
	Ice();
	~Ice();
	Ice(Ice const & inst);
	Ice& operator=(Ice const & inst);
	Ice* clone(void) const;
	void use(ICharacter& target);
};

#endif