#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain& operator=(Brain const & inst);
		Brain(Brain const & inst);
};

#endif