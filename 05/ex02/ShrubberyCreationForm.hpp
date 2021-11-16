//
// Created by Quentin Robert de beauchamp on 9/27/21.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const & target);
	void execute(Bureaucrat const & executor) const ;
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &inst);
};

#endif
