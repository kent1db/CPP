#ifndef CURE
#define CURE

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria 
{
private:
	
public:
	Cure();
	~Cure();
	Cure(Cure const & inst);
	Cure& operator=(Cure const & inst);
	Cure* clone(void) const;
	void use(ICharacter& target);
};


#endif