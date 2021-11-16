#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal(void);
		AAnimal(AAnimal const & inst);
		virtual ~AAnimal();
		AAnimal& operator=(AAnimal const & inst);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const ;
};

#endif