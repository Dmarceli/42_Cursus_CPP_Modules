#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal( const Animal & src )
{
}




Animal::~Animal()
{

}




Animal &				Animal::operator=( Animal const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}