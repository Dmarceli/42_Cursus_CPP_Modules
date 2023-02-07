#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
		Bureaucrat tia("jocelyn", 145);
		std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
		std::cout << tia.getName() << std::endl;
		std::cout << tia.getGrade() << std::endl;
		std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
	}
	{
		std::cout << "\e[1;35m===========Exceptions===========\033[0m" << std::endl;
		try 
		{
			std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
			Bureaucrat	err( "error", 151 );
			std::cout << err << std::endl;
		}
		catch ( std::exception& err ) { std::cerr << err.what() << std::endl; }
		try 
		{
			std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
			Bureaucrat	err( "error", 0);
			std::cout << err << std::endl;
		}
		catch ( std::exception& err) { std::cerr << err.what() << std::endl; }
		try 
		{
			std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
			Bureaucrat	err( "error", 1);
			err.incrementGrade();
			std::cout << err << std::endl;
		}
		catch ( std::exception& err) { std::cerr << err.what() << std::endl; }
		try 
		{
			std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
			Bureaucrat	err( "error", 150);
			err.decrementGrade();
			std::cout << err << std::endl;
		}
		catch ( std::exception& err) { std::cerr << err.what() << std::endl; }
		try 
		{
			std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
			Bureaucrat	suc( "trial", 150);
			suc.decrementGrade();
			std::cout << suc << std::endl;
		}
		catch ( std::exception& err) { std::cerr << err.what() << std::endl; }
	}

}