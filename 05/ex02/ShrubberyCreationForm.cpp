
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm(target, 145, 137){

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src) {
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &inst) {
	(void)inst;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (AForm::testBeforeExec(executor)) {
			std::ofstream file(AForm::getName() + "_shrubbery");
			file << "       # #### ####" << std::endl;
			file << "    ### ###|###|#####" << std::endl;
			file << "    ###### #| |####_####_#" << std::endl;
			file << "   ###  ##### |# ## # ###" << std::endl;
			file << " ##_#_##_### | #####_#_####" << std::endl;
			file << "## #### # # #| #  #### #####" << std::endl;
			file << " __#_--#### |{,###---###-~" << std::endl;
			file << "           # }{" << std::endl;
			file << "            }}{" << std::endl;
			file << "            }}{" << std::endl;
			file << "            {{}" << std::endl;
			file << "         =-~{ .-^- " << std::endl;
	}
}
