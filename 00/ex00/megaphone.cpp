#include <iostream>

void	ft_upcase(char *str)
{
	int i;
	char ch;
	i = -1;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			ch =  str[i] - 32;
			std::cout << ch;
		}
		else
			std::cout << str[i];
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[++i])
			ft_upcase(av[i]);
		std::cout << std::endl;
	}
	return 0;
}
