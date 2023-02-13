#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	{
		std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
		Intern  someRandomIntern;
		Form* rrf;
		Bureaucrat tio("ze", 10);
		std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf;
		rrf->beSigned(tio);
		//tio.execute(*rrf);
		std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
		delete rrf;
	}

}