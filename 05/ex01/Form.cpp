#include "Form.hpp"

Form::Form(std::string const& name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gsign(gradeSign), _gexec(gradeExecute){
	if (_gsign < 1)
		throw high;
	else if (_gsign > 150)
		throw low;
	if (_gexec < 1)
		throw high;
	else if (_gexec > 150)
		throw  low;
}

Form::Form() : _name("Default"), _signed(false), _gsign(50), _gexec(42)
{
}


Form::~Form()
{
}

Form::Form(Form const& src) : _name(src._name), _gsign(src._gsign), _gexec(src._gexec)
{
	*this = src;
}

Form&	Form::operator=(Form const& rhs)
{
	_signed = rhs._signed;
	return *this;
}

const std::string &Form::getName() const {
	return _name;
}

bool Form::isSigned() const {
	return _signed;
}

int Form::getGsign() const {
	return _gsign;
}

int Form::getGexec() const {
	return _gexec;
}

void Form::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() <= _gsign)
		_signed = true;
	else {
		bur.signForm(*this);
		throw low;
	}
	bur.signForm(*this);
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "_name: " << form.getName() << std::endl << "Signed : " << form.isSigned() << std::endl << "Grade required to sign it : " << form.getGsign() << std::endl << "Grade required to execute it : " << form.getGexec() << std::endl;
	return os;
}
