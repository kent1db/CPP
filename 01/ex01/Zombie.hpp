#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();
	void setName(std::string name);
	void announce(void) const;
};

Zombie* zombieHorde(int N, std::string name);

#endif