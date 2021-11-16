#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat q("Quentin", 1);
		Intern a;
		AForm *rff;
		rff = a.makeForm("robotomy request", "bender alexis");
		std::cout << rff->getGsign() << std::endl;
		std::cout << q.getGrade() << std::endl;
		rff->beSigned(q);
		q.executeForm(*rff);
		delete rff;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(AForm::Unsigned& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Intern::Unknown& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
