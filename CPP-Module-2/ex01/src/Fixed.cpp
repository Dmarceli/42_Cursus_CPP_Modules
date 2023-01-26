#include "../incs/Fixed.hpp"

Fixed::Fixed()
{
	_fixedpt = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int src)
{
	this->_fixedpt = src << Fixed::_frbits;
	std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float fractNb)
{
	this->_fixedpt = roundf(fractNb * (1 << Fixed::_frbits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	this->_fixedpt = src._fixedpt;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &op, const Fixed &original)
{
	op << original.toFloat();
	return (op);
}


Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

int	Fixed::getRawBits( void ) const { return (_fixedpt); }

int Fixed::toInt(void) const {return(_fixedpt >> Fixed::_frbits);}

float Fixed::toFloat(void) const {
	return ((float)_fixedpt / (1 << Fixed::_frbits));
}

void Fixed::setRawBits( int const ptfixed ) { _fixedpt = ptfixed; }