//
// Created by Quentin Robert de beauchamp on 9/27/21.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
private:
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const & target);
	void execute(Bureaucrat const & executor) const;
	RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &inst);
};

#endif
