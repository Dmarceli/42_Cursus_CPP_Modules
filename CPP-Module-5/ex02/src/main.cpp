#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	{
		std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
		Bureaucrat tia("jocelyn", 145);
		Form funana("drena", 144,144);
		std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
		std::cout << tia ;
		std::cout << funana ;
		try{
			funana.beSigned(tia);
		}
		catch ( std::exception& err ) { std::cerr << err.what() << std::endl; }
		std::cout << funana ;
		tia.incrementGrade();
		try{
			funana.beSigned(tia);
		}
		catch ( std::exception& err ) { std::cerr << err.what() << std::endl; }
		std::cout << funana ;
		Bureaucrat k("karen", 143);
		try{
			funana.beSigned(k);
		}
		catch ( std::exception& err ) { std::cerr << err.what() << std::endl; }
		std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
	}
	{
		std::cout << std::endl << std::endl << "\t\t2ND Test"<< std::endl;
		std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
		try{
			Form a("a", 151, 151);
		}
		catch (std::exception &error){std::cout << error.what() << std::endl;}
		try{
			Form c("a", 12, 0);
		}
		catch (std::exception &error){std::cout << error.what() << std::endl;}
		try{
			Form b("a", 0, -1);
		}
		catch (std::exception &error){std::cout << error.what() << std::endl;}
	}
	{
		Bureaucrat exec("exec", 146);
		ShrubberyCreationForm A("ze manel");
		A.execute(exec);
	}
}