#include <iostream>
#include "PhoneBook.hpp"

void	PhoneBook::WriteColumn(std::string str)
{
	int i = 0;
	int len = str.size();

	if (len == 10)
		i = -1;
	for (std::string::iterator ite = str.begin(); ite != str.end() && i < 9; ite++)
	{
		std::cout << *ite;
		i++;
	}
	if (i == 9 && len > 10)
		std::cout << ".";
	for (int ws = 10 - len; ws > 0; ws--)
		std::cout << " ";
	std::cout << "|";
}

void	PhoneBook::SearchCommand(int *nb)
{
	std::string buf;
	int			rep = -1;
	int			i;
	
	std::cout << std::endl;
	for (i = 0; i < *nb && i < 8; i++)
	{
		std::cout << i << "         |";
		WriteColumn(_contact[i].getFirstName());
		WriteColumn(_contact[i].getLastName());
		WriteColumn(_contact[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	if (i == 0)
		std::cout << "\033[1;31mNO CONTACT\033[0m\n";
	else
		std::cout << "Who do you want to see ?" << std::endl;
	std::cout << std::endl;
	std::cout << "iPhoneBook > ";
	std::getline(std::cin, buf);
	if (buf.size() == 1 && std::isalpha(buf[0]) == 0)
		rep = std::atoi(buf.c_str());
	if (rep >= i || rep == -1)
		std::cout << "\033[1;31mNo index for this number\033[0m" << std::endl;
	else
	{
		std::cout << "First Name : " << _contact[rep].getFirstName() << std::endl;
		std::cout << "Last name : " << _contact[rep].getLastName() << std::endl;
		std::cout << "Nick name : " << _contact[rep].getNickName() << std::endl;
		std::cout << "Phone number : " << _contact[rep].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << _contact[rep].getDarkestSecret() << std::endl;
	}
}

void	PhoneBook::AddCommand(int *nb)
{
	std::string fn;
	std::string ln;
	std::string nn;
	std::string pn;
	std::string ds;

	std::cout << "First name ?" << std::endl;
	std::cout << "iPhoneBook > ";
	std::getline(std::cin, fn);
	std::cout << "Last name ?" << std::endl;
	std::cout << "iPhoneBook > ";
	std::getline(std::cin, ln);
	std::cout << "Nick name ?" << std::endl;
	std::cout << "iPhoneBook > ";
	std::getline(std::cin, nn);
	std::cout << "Phone Number ?" << std::endl;
	std::cout << "iPhoneBook > ";
	std::getline(std::cin, pn);
	for (std::string::iterator it = pn.begin(); it != pn.end(); it++)
	{
		if (isdigit(*it) == 0)
		{
			std::cout << "\033[1;31mOnly digit is required for Phone Number\033[0m\n";
			return ;
		}
	}
	std::cout << "Darkest Secret ?" << std::endl;
	std::getline(std::cin, ds);
	if (fn.empty() || ln.empty() || nn.empty() || pn.empty() || ds.empty())
		return ;
	_contact[*nb % 8].setFirstName(fn);
	_contact[*nb % 8].setLastName(ln);
	_contact[*nb % 8].setNickName(nn);
	_contact[*nb % 8].setPhoneNumber(pn);
	_contact[*nb % 8].setDarkestSecret(ds);
	(*nb)++;
}

int		PhoneBook::FindCommand(std::string str, int *nb)
{
	if (str.compare("ADD") == 0)
		AddCommand(nb);
	else if (str.compare("SEARCH") == 0)
		SearchCommand(nb);
	else if (str.compare("EXIT") == 0) 
		return (-1);
	else
		std::cout << "Commands available : \033[1;33mADD, SEARCH, and EXIT.\033[0m" << std::endl;
	return (0);
}