#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>
# include <stdexcept>

#define PURPLE "\033[38;5;13m"
#define ORANGE "\033[38;5;208m"
#define BLANK "\033[0m"

class Span
{
	private:
		unsigned int _size;
		std::vector<unsigned int> _vec;
	public:
		Span();
		Span(unsigned int size);
		Span(const Span &span);
		Span& operator=(const Span &span);
		~Span();
		class	NoMoreSpacesException : public std::exception {
			public:
				char const* what( void ) const throw()
				{return("No More Spaces Left");}
		};
		class	NotEnoughElementsException : public std::exception {
			public:
				char const* what( void ) const throw()
				{return("No More Spaces Left");}
		};
		void		addNumber(unsigned int x);
		void		addNumber(unsigned int x, unsigned int y);
		unsigned int shortestSpan() const ;
		unsigned int longestSpan() const;
		unsigned int getSize() const;
		std::vector<unsigned int> getVector() const;
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif