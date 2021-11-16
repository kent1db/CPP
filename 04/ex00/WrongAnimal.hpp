#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & inst);
	~WrongAnimal();
	WrongAnimal& operator=(WrongAnimal const & inst);
	void makeSound(void) const;
	std::string getType(void) const ;
};

#endif