#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(src) 
{
	*this = src;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}


Dog &				Dog::operator=( Dog const & src)
{
	std::cout << "Dog Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

void Dog::makeSound()const
{
	std::cout << "Wooof" << std::endl;
}