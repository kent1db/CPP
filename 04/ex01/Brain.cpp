#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain construction\n";
}

Brain::~Brain()
{
	std::cout << "Brain destruction\n";
}

Brain& Brain::operator=(Brain const & inst)
{
	std::copy(std::begin(inst._ideas), std::end(inst._ideas), std::begin(this->_ideas));
	return (*this);
}

Brain::Brain(Brain const & inst)
{
	*this = inst;
}