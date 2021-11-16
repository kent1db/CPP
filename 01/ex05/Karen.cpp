#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{

}

typedef void (Karen::*funct) (void);

void	Karen::complain(std::string level)
{
	int i;
	funct functptr[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++)
	{
		if (level == tab[i])
			(this->*functptr[i])();
	}
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}
void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}
void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month\n";
}
void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now\n";
}
