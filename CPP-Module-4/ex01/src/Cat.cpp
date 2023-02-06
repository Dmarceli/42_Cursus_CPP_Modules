#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_Brain = new Brain();
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat & src) : Animal(src)
{
	this->_Brain = new Brain(*src._Brain);
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
	delete this->_Brain;
}


Cat &				Cat::operator=( Cat const & src)
{
	std::cout << "Cat Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "Meowwwwww" << std::endl;
}