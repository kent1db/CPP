//
// Created by Quentin Robert de beauchamp on 9/28/21.
//

#ifndef INTERN
#define INTERN
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
public:
	Intern();
	Intern(Intern const & src);
	virtual ~Intern();
	Intern&
	operator=(Intern const &inst);
	AForm* makeForm(std::string const & formName, std::string const & formTarget) const;
	class Unknown : public std::exception {
		public:
		const char* what() const throw () {
			return "Unknown Form\n";
		}
	}unknown;
};

#endif
