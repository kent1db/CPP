#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
private:
	
public:
	Dog();
	~Dog();
	Dog& operator=(Dog const & inst);
	Dog(Dog const & inst);
	void makeSound(void) const;
	std::string getType(void) const ;
};

#endif