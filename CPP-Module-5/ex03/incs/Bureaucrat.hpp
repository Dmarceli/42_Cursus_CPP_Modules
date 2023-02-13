#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

#define BLANK "\033[0m"
#define RED "\033[38;5;1m"
#define PURPLE "\033[38;5;13m"
#define YELLOW "\033[33m"
#define BLUE "\033[38;5;14m"
#define GREEN "\033[38;5;47m"
#define ORANGE "\033[38;5;208m"

typedef std::string	str;

class Form;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat &		operator=( Bureaucrat const & src );
		void	signForm(std::string form, bool isSigned);
		str const&		getName( void )const;
		int				getGrade( void ) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void	signForm(Form& form);
		void executeForm(Form const &form);
		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
	private:
		str const	_name;
		int			_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif 