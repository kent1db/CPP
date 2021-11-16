//
// Created by Quentin Robert de beauchamp on 9/28/21.
//

#include "Intern.hpp"
#include "AForm.hpp"

/* CANONICAL FORM */
Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(Intern const &src) {
	*this = src;
}

Intern &Intern::operator=(Intern const &inst) {
	(void) inst;
	return (*this);
}

AForm* Intern::makeForm(std::string const & formName, std::string const & formTarget) const {
	int i;
	AForm *a;
	std::string array[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (i = 0; i < 3; i++) {
		if (formName == array[i])
			break;
	}
	switch (i) {
		case 0 :
			a = new PresidentialPardonForm(formTarget);
			break;
		case 1 :
			a = new RobotomyRequestForm(formTarget);
			break;
		case 2 :
			a = new ShrubberyCreationForm(formTarget);
			break;
		default :
			throw unknown;
	}
	std::cout << "Intern creates " << a->getName() << std::endl;
	return (a);
}
