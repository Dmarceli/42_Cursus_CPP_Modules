#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor Called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	(void)src;
	std::cout << "Intern Copy Constructor Called" << std::endl;
}

Intern	&Intern::operator=(const Intern &src)
{
	(void)src;
	std::cout << "Intern Copy Assignment Called" << std::endl;
	return (*this);
}

static Form	*makePresident(const str target){return (new PresidentialPardonForm(target));}

static Form	*makeRobot(const str target){return (new RobotomyRequestForm(target));}

static Form	*makeShrubbery(const str target){return (new ShrubberyCreationForm(target));}


Form	*Intern::makeForm(std::string name, std::string target)
{
	str forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int selec;
	for (selec = 0; selec < 3; ++selec)
	{
		if (name == forms[selec])
			break;
	}
	switch (selec) 
	{
		case 0:
			std::cout << "Intern creates Presidential Pardon form" << std::endl;
			return (makePresident(target));
		case 1:
			std::cout << "Intern creates Robotomy Request form" << std::endl;
			return (makeRobot(target));
		case 2:
			std::cout << "Intern creates Shrubbery Creation form" << std::endl;
			return (makeShrubbery(target));
		default:
			std::cout << "Intern doesnt know how to create " << name << "form" << std::endl;	
  	}
 	return(0);
}
