#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	{
		try{
			std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
			Bureaucrat exec("execer", 145);
			Bureaucrat signer("signer", 145);
			ShrubberyCreationForm A("ze manel");
			std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
			std::cout << A;
			exec.decrementGrade();
			signer.decrementGrade();
			A.beSigned(signer);
			std::cout << A;
			A.execute(exec);
			std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
		}
		catch (std::exception &error){std::cout << error.what() << std::endl;}

	}
	{
		try{
			std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
			Bureaucrat exec("execer", 45);
			Bureaucrat signer("signer", 72);
			RobotomyRequestForm A("roboto");
			std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
			std::cout << A;
			A.beSigned(signer);
			std::cout << A;
			A.execute(exec);
			std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
		}
		catch (std::exception &error){std::cout << error.what() << std::endl;}
		
	}
	{
		try{
			std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
			Bureaucrat exec("execer", 6);
			Bureaucrat signer("signer", 4);
			PresidentialPardonForm A("roboto");
			std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
			std::cout << A;
			//A.beSigned(signer);
			//std::cout << A;
			exec.signForm(A);
			exec.incrementGrade();
			exec.executeForm(A);
			//A.execute(exec);
			std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
		}
		catch (std::exception &error){std::cout << error.what() << std::endl;}	
	}

}