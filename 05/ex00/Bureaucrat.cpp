#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(150)
{
	if (grade < 1)
		throw high;
	else if (grade > 150)
		throw low;
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src._name)
{
	*this = src;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const & inst)
{
	o << inst.getName() << ", " << "bureaucrat grade " << inst.getGrade() << ".\n";
	return (o);
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	_grade = rhs._grade;
	return *this;
}

std::string const & Bureaucrat::getName(void) const
{
	return (_name);
}

int const & Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::IncrBureaucrat(void)
{
	if (_grade == 1)
		throw high;
	else
	{
		std::cout << "Increment " << _name << std::endl;
		_grade -= 1;
	}
}

void	Bureaucrat::DecrBureaucrat(void)
{
	if (_grade == 150)
		throw low;
	else
	{
		std::cout << "Decrement " << _name << std::endl;
		_grade += 1;
	}
}
