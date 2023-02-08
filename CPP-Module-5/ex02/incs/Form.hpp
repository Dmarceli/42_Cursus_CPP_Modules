#ifndef FORM_HPP
# define FORM_HPP
# include <stdexcept>
# include <iostream>
# include <string>

#include "Bureaucrat.hpp"

typedef std::string	str;

class Form
{

	public:
		Form();
		Form(str const, int, int);
		Form( Form const & src );
		~Form();
		Form &		operator=( Form const &src );
		void	beSigned(Bureaucrat &bur)throw(std::exception);
		str		getName()const;
		bool	getSignedStatus()const;
		int		getGradeToSign()const;
		int		getGradeToExec()const;
		void 	checkValue(int) throw(std::exception);
		void	checkBureaucrat(Bureaucrat const &b) const throw(std::exception);
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
		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		const str 			_name;
		const int			_gradeToExec;
		const int			_gradeToSign;
		bool				_isSigned;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif