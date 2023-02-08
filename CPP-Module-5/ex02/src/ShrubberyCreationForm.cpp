#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("shrubbery creation", 145, 137), _target("default"){
	std::cout << GREEN << "ShrubberyCreationForm Default Constructor Called!" << BLANK << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): Form("shrubbery creation", 145, 137), _target(src._target)
{
	std::cout << GREEN << "ShrubberyCreationForm Copy Constructor Called"<< BLANK << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const str &name): Form("shrubbery creation", 145, 137), _target(name){
		std::cout << GREEN << "ShrubberyCreationForm Constructor Called For: " << this->_target << BLANK << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << GREEN << "ShrubberyCreationForm Deconstructor Called For: " << this->_target << BLANK << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const throw (std::exception)
{
	checkBureaucrat(executor);
	std::ofstream file;
	file.open((_target + "_shrubbery").c_str());
	for (int i = 0; i < 3; i++)
	{
		if (file.is_open())
		{		
			file << "               ,@@@@@@@," << std::endl;
			file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
			file << "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
			file << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
			file << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
			file << "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
			file << "  `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
			file << "       |o|        | |         | |" << std::endl;
			file << "       |.|        | |         | |" << std::endl;
			file << "jgs \\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		}

	}
	file.close();
}
