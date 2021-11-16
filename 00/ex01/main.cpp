#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int		main(void)
{
	std::string buf;
	int			nb = 0;
	PhoneBook	pb;

	std::cout << "Welcome to the \033[1;37m iPhoneBook\033[0m, three commands are available : \033[1;32mADD\033[0m, to add contact, \033[1;32mSEARCH\033[0m, to search contact, and \033[1;32mEXIT\033[0m, to .... exit !" << std::endl;
	std::cout << "iPhoneBook > ";
	while (std::getline(std::cin, buf))
	{
		if (pb.FindCommand(buf, &nb) == -1)
			return (0);
		std::cout << "iPhoneBook > ";
	}
	return (0);
}
