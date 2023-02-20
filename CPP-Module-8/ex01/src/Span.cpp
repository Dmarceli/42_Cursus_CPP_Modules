#include "Span.hpp"

Span::Span()
{
	this->_size = 0;
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::Span(unsigned int size)
{
	this->_size = size;
}

Span& Span::operator=(const Span &span)
{
	this->_size = span._size;
	this->_vec = span._vec;
	return *this;
}

Span::~Span()
{
}

unsigned int Span::shortestSpan(void) const
{
	unsigned int smalls = std::numeric_limits<int>::max();
	if (this->_vec.size() <  2)
		throw(NotEnoughElementsException());
	else
	{
		std::vector<unsigned int>::const_iterator it;
		for (it = _vec.begin(); it != _vec.end() - 1; ++it) {
			if (smalls > (*(it + 1)) - *it )
				smalls = (*(it + 1) - *it);
		}
	}
	return (smalls);
}

unsigned int Span::longestSpan(void) const 
{
	if (_vec.size() < 2)
		throw(NotEnoughElementsException());
	else
		return (_vec.back() - _vec.front());
}

std::ostream&	operator<<( std::ostream& os, Span const& i ) {

	os << PURPLE "SPAN" BLANK << std::endl;
	os << " -> Size: " << i.getSize() << std::endl;
	os << " -> Content: " ;
	os << "[";
    for (unsigned int cnt = 0; cnt < i.getVector().size(); ++cnt) {
        os << i.getVector()[cnt];
        if (cnt != i.getSize() - 1)
            os << ", ";
    }
    os << "]\n";
	os << " ->Shortest Span: " << i.shortestSpan() << std::endl;
	os << " ->Longest Span: " << i.longestSpan() << std::endl;
	return(os);
}

unsigned int	Span::getSize( void ) const {return (this->_size);}
std::vector<unsigned int>	Span::getVector( void ) const {return (this->_vec);}

void	Span::addNumber(unsigned int x)
{
	if (this->_vec.size() >= this->_size)
		throw (NoMoreSpacesException());
	else
		this->_vec.push_back(x);
	std::sort(_vec.begin(), _vec.begin() + _vec.size());
}

void	Span::addNumber(unsigned int x, unsigned int y)
{
	for(unsigned int i = x; i <= y; i++)
	{
		if (this->_vec.size() <= this->_size)
			_vec.push_back(i);
		else
			throw (NoMoreSpacesException());
	}
}

