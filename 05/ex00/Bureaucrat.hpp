#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP
#include <iostream>
class Bureaucrat
{
private:
	std::string const 	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& src);
	virtual ~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat const& rhs);
	std::string const & getName(void) const;
	int const & getGrade(void) const;
	void IncrBureaucrat(void);
	void DecrBureaucrat(void);
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade Too High");
		}
	}high;
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade Too Low");
		}
	}low;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const & inst);

#endif
