#include "../incs/fixed.hpp"

Fixed::Fixed()
{
	_fixedpt = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
	*this = original;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	this->_fixedpt = src._fixedpt;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

int	Fixed::getRawBits( void ) const { return (_fixedpt); }

void Fixed::setRawBits( int const ptfixed ) { _fixedpt = ptfixed; }