#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat();
		virtual ~Cat();
		Cat& operator=(Cat const & inst);
		Cat(Cat const & inst);
		void makeSound(void) const;
		std::string getType(void) const ;
};

#endif