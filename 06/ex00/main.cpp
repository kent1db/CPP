#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <cmath>

void convert(std::string arg){
	double d;
	if (arg.length() == 1 && !isdigit(static_cast<int>(arg[0])))
		 d = static_cast<double>(arg[0]);
	else
		 d = atof(arg.c_str());
	if ((atoi(arg.c_str()) == 0 && arg.length() > 1 )|| d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "char: Impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if ((atoi(arg.c_str()) == 0 && arg.length() > 1) || d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (fmod(d, 1) == 0)
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	if (fmod(d, 1) == 0)
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(d) << std::endl;
}

int main(int ac, char ** av) {
	if (ac == 2)
			convert(av[1]);
	return (0);
}