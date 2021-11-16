#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal(void);
	Animal(Animal const & inst);
	virtual ~Animal();
	Animal& operator=(Animal const & inst);
	virtual void makeSound(void) const;
	std::string getType(void) const ;
};

#endif