#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_Brain = new Brain();
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(src) 
{
	this->_Brain = new Brain(*src._Brain);
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
	delete this->_Brain;
}


Dog &				Dog::operator=( Dog const & src)
{
	std::cout << "Dog Assignment operator called" << std::endl;
	this->_type = src._type;
	this->_Brain = src._Brain;
	return *this;
}

void Dog::makeSound()const
{
	std::cout << "Wooof" << std::endl;
}

str	Dog::getIdea(unsigned int i){return(this->_Brain->getIdea(i));}

void	Dog::setIdea(unsigned int i, std::string idea){this->_Brain->setIdea(i, idea);}
