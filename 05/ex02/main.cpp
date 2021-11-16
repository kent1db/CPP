#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat a("Michel", 5);
		Bureaucrat b("Jacquelin", 150);
		ShrubberyCreationForm c("Eco");
		RobotomyRequestForm d("Alexis");
		PresidentialPardonForm e("Quentin");
		c.beSigned(a);
		d.beSigned(a);
		e.beSigned(a);
		a.executeForm(c);
		a.executeForm(d);
		a.executeForm(e);
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
}
