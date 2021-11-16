#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_a = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_a[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & inst)
{
	*this = inst;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & inst)
{
	for (int i = 0; i < 4; i++)
	{
		if (_a[i] != NULL)
			delete _a[i];
		_a[i] = inst._a[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_a[i] != NULL)
			delete _a[i];
	delete[] _a;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_a[i] && _a[i]->getType() == type)
			return (_a[i]->clone());
	}
	return (0);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_a[i] == NULL)
		{
			_a[i] = m;
			return ;
		}
	}
}
