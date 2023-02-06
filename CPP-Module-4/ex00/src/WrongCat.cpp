#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat(): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ): WrongAnimal(src)
{
	*this = src;
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
 
WrongCat &				WrongCat::operator=( WrongCat const & src )
{
	std::cout << "WrongCat Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound(void)const
{
	std::cout << "**WrongCat sounds**" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */