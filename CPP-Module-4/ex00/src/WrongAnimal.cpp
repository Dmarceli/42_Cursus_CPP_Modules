#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal default";
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const &src )
{
	std::cout << "WrongAnimal Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound()const
{
	std::cout << "**WrongAnimal Noises**" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

str WrongAnimal::getType()const{return(this->_type);}


/* ************************************************************************** */