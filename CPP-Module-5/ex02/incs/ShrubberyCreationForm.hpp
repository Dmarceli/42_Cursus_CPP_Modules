#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm: public Form 
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string&);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		virtual void execute(Bureaucrat const &exec) const throw (std::exception);
	private:
		str const _target;
};


#endif 