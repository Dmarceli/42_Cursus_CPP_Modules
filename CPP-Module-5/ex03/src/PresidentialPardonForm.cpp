#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Robotomy Request", 5, 25), _target("default"){
	std::cout << YELLOW << "PresidentialPardonForm Default Constructor Called!" << BLANK << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &src ): Form("Robotomy Request", 5, 25), _target(src._target)
{
	std::cout << YELLOW << "PresidentialPardonForm Copy Constructor Called"<< BLANK << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const str &name): Form("Robotomy Request", 5, 25), _target(name){
		std::cout << YELLOW << "PresidentialPardonForm Constructor Called For: " << this->_target << BLANK << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELLOW << "PresidentialPardonForm Deconstructor Called For: " << this->_target << BLANK << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const throw (std::exception)
{
	checkBureaucrat(executor);
	execution(_target);
	std::cout << GREEN << executor.getName() << " successfully executed form "  << 
		this->getName()	<< BLANK << std::endl;
}

void PresidentialPardonForm::execution(str const target)const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}