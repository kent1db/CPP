#ifndef IMATERIAS
#define IMATERIAS

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
private:
	
public:
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
	virtual ~IMateriaSource() {};
};


#endif