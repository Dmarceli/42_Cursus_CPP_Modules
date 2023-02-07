#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

typedef std::string	str;

class Form
{

	public:
		Form();
		Form( Form const & src );
		~Form();
		Form &		operator=( Form const & rhs );
		void		beSigned(Bureaucrat &bur);
		str	getName();
		str	getSigned();
		int	getSignGrade();
		int	getExecGrade();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		const str 			_name;
		bool				_isSigned;
		const int			_gradeTosign;
		const int			_gradeToExec;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */