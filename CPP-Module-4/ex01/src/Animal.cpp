#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "default";
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

Animal &				Animal::operator=(Animal const &src)
{
	std::cout << "Animal Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

void Animal::makeSound()const
{
	std::cout << "Default animals dont make sounds!" << std::endl;
	return ;
}

str Animal::getType()const{return(this->_type);}