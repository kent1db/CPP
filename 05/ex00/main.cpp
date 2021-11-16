#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("Michel", 10);
		Bureaucrat b("Jacqueline", 140);
		Bureaucrat d("Alexis", 150);
		Bureaucrat e("Quentin", 1);
		for (int i = 0; i != 10; i++)
		{
			std::cout << a;
			a.IncrBureaucrat();
			std::cout << b;
			b.DecrBureaucrat();
		}
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
