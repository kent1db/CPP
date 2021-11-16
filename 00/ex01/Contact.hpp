#include <iostream>
#ifndef CONTACT_H
# define CONTACT_H

class Contact {
public:
	Contact(void);
	void setFirstName(std::string);
	void setLastName(std::string);
	void setNickName(std::string);
	void setPhoneNumber(std::string);
	void setDarkestSecret(std::string);
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};
#endif
