#include <iostream>
#ifndef KAREN_H
# define KAREN_H

class Karen
{
private:
	void command(void (Karen::*funct)());
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	void complain(std::string level);
	Karen(/* args */);
	~Karen();
};

#endif