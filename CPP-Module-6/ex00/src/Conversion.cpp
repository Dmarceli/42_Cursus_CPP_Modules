#include "Conversion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Conversion::Conversion()
{
}

Conversion::Conversion( const Conversion & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Conversion::~Conversion()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Conversion &				Conversion::operator=( Conversion const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Conversion const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */