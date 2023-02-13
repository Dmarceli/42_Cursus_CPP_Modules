#include "../incs/Form.hpp"

Form::Form() : _name("default") , _gradeToExec(150), _gradeToSign(150)
{
	this->_isSigned = false;
	std::cout << ORANGE << "Form Default Constructor called" << BLANK << std::endl;
}

Form::Form(str const name, int gradeExec, int gradeSign) : _name(name), _gradeToExec(gradeExec), _gradeToSign(gradeSign)
{
	checkValue(gradeSign);
	checkValue(gradeExec);
	this->_isSigned = false;
	std::cout << ORANGE << "Form Constructor called with the name " << this->_name <<
		" with minimum value to be signed:" << this->_gradeToSign <<
		" and minimum value to execute:" << this->_gradeToSign << BLANK << std::endl;
}

Form::Form( const Form & src ): _name(src._name), _gradeToExec(src._gradeToExec),  _gradeToSign(src._gradeToSign)
{
	std::cout << ORANGE << "Form Copy Constructor called" << BLANK << std::endl;
}


Form::~Form()
{
	std::cout << ORANGE << "Form Deconstructor called" << BLANK << std::endl;
}


Form &				Form::operator=( Form const &src)
{
	this->_isSigned = src._isSigned;
	return *this;
}

std::ostream &operator<<( std::ostream &o, Form const &i )
{
	o << ORANGE << "Form: "<< i.getName() << std::endl <<
		" with minimum value to be signed: " << i.getGradeToSign() <<std::endl <<
		" and minimum value to execute: " << i.getGradeToExec() <<std::endl <<
		" and signed status of: " << (i.getSignedStatus() ? "Signed" : "Not Signed")<<std::endl <<
		BLANK << std::endl;
	return o;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("\033[38;5;1mForm GradeTooHighException\033[0m");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("\033[38;5;1mForm GradeTooLowException\033[0m");
}

const char*	Form::NotSignedException::what() const throw()
{
	return ("\033[38;5;1mForm Not Signed!\033[0m");
}

const char*	Form::AlreadySignedException::what() const throw()
{
	return ("\033[38;5;1mForm Already Signed!\033[0m");
}

const char* Form::TooLowToExecuteException::what() const throw() {
	return ("\033[38;5;1mForm: Grade too low to execute\033[0m");
}


void Form::checkValue(int grade_num) throw(std::exception) {
	if (grade_num <= 0)
		throw Form::GradeTooHighException();
	else if (grade_num > 150)
		throw Form::GradeTooLowException();
}

void Form::checkBureaucrat(Bureaucrat const &b) const throw(std::exception) {
	if (b.getGrade() > this->getGradeToExec())
		throw Form::TooLowToExecuteException();
	else if(!this->_isSigned)
		throw Form::NotSignedException();
	
}

void Form::beSigned(Bureaucrat &b) throw(std::exception)
{
	if (b.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else if (_isSigned)
		throw Form::AlreadySignedException();
	else
	{
		_isSigned = true;
		std::cout << GREEN << b.getName() << " successfully signed form "  << 
		this->getName()	<< std::endl;
	}
}
void Form::execute(Bureaucrat const & executor) const throw (std::exception)
{
	checkBureaucrat(executor);
	//execution(_target);
	std::cout << GREEN << executor.getName() << " successfully executed form "  << 
		this->getName()	<< BLANK << std::endl;
}

void Form::execution(str const target)const{
	(void)target;
	return;
}

int Form::getGradeToSign()const{return(this->_gradeToSign);}

int Form::getGradeToExec()const{return(this->_gradeToExec);}

bool Form::getSignedStatus()const{return(this->_isSigned);}

str Form::getName()const{return(this->_name);}
