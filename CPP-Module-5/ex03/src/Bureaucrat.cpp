#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << "Bureaucrat Constructor called for " << this->getName() <<
	" with grade of: " << this->getGrade() << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Deconstructor called for " << this->getName() << std::endl;
}

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & src )
{
	this->_grade = src.getGrade();
	return *this;
}

std::ostream &operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName()<< ",  bureaucrat grade:" << i.getGrade() << std::endl;
	return o;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat GradeTooHighExecption");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat GradeTooLowExecption");
}

void	Bureaucrat::incrementGrade()
{
	if(_grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if(_grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

str	const &Bureaucrat::getName()const{return (this->_name);}
 
int	Bureaucrat::getGrade()const{return (this->_grade);}
