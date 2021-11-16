#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
private:
	std::string const	 _name;
	bool 				_signed;
	const int			_gsign;
	const int			_gexec;
public:
	AForm();
	AForm(std::string const& name, int gradeSign, int gradeExecute);
	AForm(AForm const& src);
	virtual ~AForm();
	AForm& operator=(AForm const& rhs);
	const std::string &getName() const;
	bool isSigned() const;
	int getGsign() const;
	int getGexec() const;
	void beSigned(Bureaucrat const & bur);
	virtual void execute(Bureaucrat const & executor) const = 0;
	bool testBeforeExec(Bureaucrat const & bur) const;
	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw ()
		{
			return "Grade Too High\n";
		}
	}high;
	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw ()
		{
			return "Grade Too Low\n";
		}
	}low;
	class Unsigned : public std::exception
	{
		public:
		const char* what () const throw () {
			return "Unsigned form\n";
		}
	}unsign;
};
std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif