//
// Created by Quentin Robert de beauchamp on 9/27/21.
//

#include "PresidentialPardonForm.hpp"

/* CANONICAL FORM */
PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target, 25, 5){
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src) {
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &inst) {
	(void) inst;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (AForm::testBeforeExec(executor)) {
		std::cout << AForm::getName() << " has been pardoned by Zafod Beeblebrox.\n";
	}
}


/* ACCESSORS */

/* MAIN */