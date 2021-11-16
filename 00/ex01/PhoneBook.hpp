#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook {

public:
	int		FindCommand(std::string str, int *nb);
private:
	void	WriteColumn(std::string str);
	void	AddCommand(int *nb);
	void	SearchCommand(int *nb);
	Contact _contact[8];
};

#endif