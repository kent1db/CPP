#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("Michel", 10);
		Bureaucrat b("Jacquelin", 140);
		Bureaucrat d("Alexis", 150);
		Bureaucrat e("Quentin", 1);
		Form j("Employ Alexis", 1, 10);
//		Form k("Employer Jacques", 0, 15);
//		for (int i = 0; i != 10; i++)
//		{
//			std::cout << a;
//			a.IncrBureaucrat();
//			std::cout << b;
//			b.DecrBureaucrat();
//		}
		std::cout << j;
		j.beSigned(d);
//		j.beSigned(e);
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
