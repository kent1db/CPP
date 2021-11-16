#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const	 _name;
	bool 				_signed;
	const int			_gsign;
	const int			_gexec;
public:
	Form();
	Form(std::string const& name, int gradeSign, int gradeExecute);
	Form(Form const& src);
	virtual ~Form();
	Form& operator=(Form const& rhs);
	const std::string &getName() const;
	bool isSigned() const;
	int getGsign() const;
	int getGexec() const;
	void beSigned(Bureaucrat const & bur);
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
};
std::ostream &operator<<(std::ostream &os, const Form &form);

#endif