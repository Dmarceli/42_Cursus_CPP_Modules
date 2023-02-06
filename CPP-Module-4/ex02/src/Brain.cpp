#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain Copy Constructor called" << std::endl;

	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
}

Brain &				Brain::operator=( Brain const &src)
{
	std::cout << "Brain Assignment operator called" << std::endl;
	for (int i = 0; i < IDEANUM; i++)
		this->_ideas[i] = src._ideas[i];
	return *this;
}
void	Brain::setIdea(unsigned int i, str idea)
{
	if (i > 100)
		std::cout << "100 thoughts is the maximum" << std::endl;
	else
	 	this->_ideas[i] = idea;
}

str	Brain::getIdea(unsigned int i){return(this->_ideas[i]);}