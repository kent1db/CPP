//
// Created by Quentin Robert de beauchamp on 9/27/21.
//

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <ctime>

/* CANONICAL FORM */
RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45){
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : AForm(target, 72, 45) {
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) {
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &inst) {
	(void)inst;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (AForm::testBeforeExec(executor)){
		std::srand(std::time(nullptr));
		int ran = std::rand() % 100;
		bool random = ran < 50;
		if (random) {
			std::cout << "Brrrrrrrrrrrrrrrrrrr\n" << AForm::getName() << " has been robotomized successfully.\n";
		}
		else
			std::cout << "Failed to robotomize " << AForm::getName() << "...\n";
	}
}


/* ACCESSORS */

/* MAIN */