#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <fstream>
RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request", 45, 72), _target("default"){
	std::cout << YELLOW << "RobotomyRequestForm Default Constructor Called!" << BLANK << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src ): Form("Robotomy Request", 45, 72), _target(src._target)
{
	std::cout << YELLOW << "RobotomyRequestForm Copy Constructor Called"<< BLANK << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const str &name): Form("Robotomy Request", 45, 72), _target(name){
		std::cout << YELLOW << "RobotomyRequestForm Constructor Called For: " << this->_target << BLANK << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELLOW << "RobotomyRequestForm Deconstructor Called For: " << this->_target << BLANK << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const throw (std::exception)
{
	checkBureaucrat(executor);
	execution(_target);
	std::cout << GREEN << executor.getName() << " successfully executed form "  << 
		this->getName()	<< BLANK << std::endl;
}

bool randomBool()
{
    srand(time(NULL));
    return rand() % 2 == 0;	
}
void RobotomyRequestForm::execution(str const target)const
{
	std::cout << "drrrrrrrrrrrrrrrRRRRRRRRRR drrrrrrrrrrrrrrrRRRRRRRRRR" << std::endl;
	if (randomBool())
		std::cout << GREEN << " successfully robotomized "  << target << BLANK << std::endl;
	else
		std::cout << RED << " robotomized request for "  << target  << " failed" << BLANK << std::endl;
}