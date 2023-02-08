#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	// {
	// 	try{
	// 		std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
	// 		Intern A;
	// 		std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
	// 		A.
	// 		std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
	// 	}
	// 	catch (std::exception &error){std::cout << error.what() << std::endl;}	
	// }
	{
		std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
		Intern  someRandomIntern;
		Form* rrf;
		std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		std::cout << *rrf;
		std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
		delete rrf;
	}

}