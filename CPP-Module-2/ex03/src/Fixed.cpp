#include "../incs/Fixed.hpp"

// constructors

Fixed::Fixed()
{
	_fixedpt = 0;
}

Fixed::Fixed(const int src)
{
	this->_fixedpt = src << Fixed::_frbits;
}

Fixed::Fixed(const float fractNb)
{
	this->_fixedpt = roundf(fractNb * (1 << Fixed::_frbits));
}

// destructor

Fixed::~Fixed(){}
// copy assignment operator

Fixed	&Fixed::operator=(const Fixed &src)
{
	this->_fixedpt = src._fixedpt;
	return (*this);
}

// overload ostream operator

std::ostream &operator<<(std::ostream &op, const Fixed &original)
{
	op << original.toFloat();
	return (op);
}

// comparasion operators

bool	Fixed::operator>(const Fixed &src){return(this->_fixedpt > src._fixedpt ? true : false);}

bool	Fixed::operator<(const Fixed &src){return(this->_fixedpt < src._fixedpt ? true : false);}

bool	Fixed::operator<=(const Fixed &src){return(this->_fixedpt <= src._fixedpt ? true : false);}

bool	Fixed::operator>=(const Fixed &src){return(this->_fixedpt >= src._fixedpt ? true : false);}

bool	Fixed::operator==(const Fixed &src){return(this->_fixedpt == src._fixedpt ? true : false);}

bool	Fixed::operator!=(const Fixed &src){return(this->_fixedpt != src._fixedpt ? true : false);}


//arithmetic operators

Fixed	Fixed::operator+(const Fixed &src){return(Fixed(this->toFloat() + src.toFloat()));}

Fixed	Fixed::operator-(const Fixed &src){return(Fixed(this->toFloat() - src.toFloat()));}

Fixed	Fixed::operator*(const Fixed &src){return(Fixed(this->toFloat() * src.toFloat()));}

Fixed	Fixed::operator/(const Fixed &src){return(Fixed(this->toFloat() / src.toFloat()));}


// increment/decrement operators
Fixed	&Fixed::operator++()
{
   	this->_fixedpt++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
   	this->_fixedpt--;
	return (*this);
}


Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_fixedpt;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_fixedpt;
	return (tmp);
}

// member functions (methods)

Fixed	&Fixed::min(Fixed &first, Fixed &second){return(first.toFloat() <= second.toFloat() ? first : second);}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second){return(first.toFloat() <= second.toFloat() ? first : second);}

Fixed	&Fixed::max(Fixed &first, Fixed &second){return(first.toFloat() >= second.toFloat() ? first : second);}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second){return(first.toFloat() >= second.toFloat() ? first : second);}

int	Fixed::getRawBits( void ) const { return (_fixedpt); }

int Fixed::toInt(void) const {return(_fixedpt >> Fixed::_frbits);}

float Fixed::toFloat(void) const {return ((float)_fixedpt / (1 << Fixed::_frbits));}

void Fixed::setRawBits( int const ptfixed ) { _fixedpt = ptfixed; }