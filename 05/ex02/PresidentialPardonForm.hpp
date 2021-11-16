//
// Created by Quentin Robert de beauchamp on 9/27/21.
//

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const & target);
	void execute(Bureaucrat const &executor) const;
	PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &inst);
};

#endif
