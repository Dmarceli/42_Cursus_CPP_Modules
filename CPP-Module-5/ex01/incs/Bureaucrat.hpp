#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>


typedef std::string	str;

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