#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	
public:
	WrongCat();
	~WrongCat();
	WrongCat& operator=(WrongCat const & inst);
	WrongCat(WrongCat const & inst);
	void makeSound(void) const;
	std::string getType(void) const ;
};

#endif