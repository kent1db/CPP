#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
private:
	
public:
	Cat();
	~Cat();
	Cat& operator=(Cat const & inst);
	Cat(Cat const & inst);
	void makeSound(void) const;
	std::string getType(void) const ;
};

#endif