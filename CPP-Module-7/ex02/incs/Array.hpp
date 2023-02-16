#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
#include <cstdlib>
#include <fstream>
template <typename T>
class Array
{

	public:

		Array()
		{
			this->_array = new T[0];
			this->_size = 0;
			//print( "Array default constructor called" );
		}
		Array( unsigned int size )
		{
			this->_array = new T[size];
			this->_size = size;
			//print( "Array constructor called" );
		}
		Array( Array const & src );
		~Array()
		{
			delete [] this->_array;
		}
		Array &		operator=( Array const & src );
		T&		operator[]( unsigned int n ) throw( std::exception );
		class OutOfBoundsException : public std::exception {
			public:
				char const*	what( void ) const throw();
		};
		unsigned int	size( void ) const;
	private:
		T*				_array;
		unsigned int	_size;
};

template< typename T >
void print(T x) {std::cout << x << std::endl; return; }

#endif