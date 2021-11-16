#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{

}

std::string Contact::getFirstName(void) const
{
	return this->first_name;
}

std::string Contact::getLastName(void) const
{
	return this->last_name;
}

std::string Contact::getNickName(void) const
{
	return this->nickname;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret(void) const
{
	return this->darkest_secret;
}

void	Contact::setFirstName(std::string str)
{
	this->first_name = str;
}

void	Contact::setLastName(std::string str)
{
	this->last_name = str;
}

void	Contact::setNickName(std::string str)
{
	this->nickname = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->phone_number = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	this->darkest_secret = str;
}
