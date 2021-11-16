#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* _brain;
	public:
		Dog();
		virtual ~Dog();
		Dog& operator=(Dog const & inst);
		Dog(Dog const & inst);
		void makeSound(void) const;
		std::string getType(void) const ;
};

#endif