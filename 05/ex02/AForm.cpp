#include "AForm.hpp"

AForm::AForm(std::string const& name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gsign(gradeSign), _gexec(gradeExecute){
	if (_gsign < 1)
		throw high;
	else if (_gsign > 150)
		throw low;
	if (_gexec < 1)
		throw high;
	else if (_gexec > 150)
		throw  low;
}

AForm::AForm() : _name("Default"), _signed(false), _gsign(50), _gexec(42)
{
}


AForm::~AForm()
{
}

AForm::AForm(AForm const& src) : _name(src._name), _gsign(src._gsign), _gexec(src._gexec)
{
	*this = src;
}

AForm&	AForm::operator=(AForm const& rhs)
{
	_signed = rhs._signed;
	return *this;
}

const std::string &AForm::getName() const {
	return _name;
}

bool AForm::isSigned() const {
	return _signed;
}

int AForm::getGsign() const {
	return _gsign;
}

int AForm::getGexec() const {
	return _gexec;
}

void AForm::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() <= _gsign)
		_signed = true;
	else {
		bur.signForm(*this);
		throw low;
	}
	bur.signForm(*this);
}

bool AForm::testBeforeExec(const Bureaucrat &bur) const {
	if (_signed) {
		if (bur.getGrade() <= _gexec) {
			return (true);
		}
		else
			throw low;
	}
	else
		throw unsign;
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	os << "_name: " << form.getName() << std::endl << "Signed : " << form.isSigned() << std::endl << "Grade required to sign it : " << form.getGsign() << std::endl << "Grade required to execute it : " << form.getGexec() << std::endl;
	return os;
}
