#ifndef MATERIAS
#define MATERIAS

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria **_a;
public:
	MateriaSource();
	MateriaSource(MateriaSource const & inst);
	MateriaSource& operator=(MateriaSource const & inst);
	~MateriaSource();
	AMateria* createMateria(std::string const & type);
	void learnMateria(AMateria*);
};
#endif